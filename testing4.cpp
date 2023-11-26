// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//    // remove duplicate element from given array:-
// //    int n ;
// //    cin>>n;

// //    int arr[n];
// //    for(int i = 0;i<n;i++){
// //     cin>>arr[i];
// //    }
// //    cout<<endl;
// //    for(int i = 0;i<n;i++){
// //     cout<<arr[i]<<" ";
// //    }
// //    cout<<endl;
// //    for(int i  = 0;i<n;i++){
// //     for(int j = i+1;j<n;j++){
// //         if(arr[i]==arr[j]){
// //             arr[i] = arr[j]= -1;
// //         }
// //     }
// //    }
// //    cout<<endl;
// //     for(int i = 0;i<n;i++){
// //         if(arr[i]>0){
// //             cout<<arr[i]<<" ";
// //         }
// //     }
//    // frequeny of an element
//    int n;
//    cin >> n;
//    int count = 0;

//    int arr[n];
//    for (int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    }
//    cout << endl;
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = i + 1; j < n; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                arr[i] = arr[j] = -1;
//            }
//        }
//    }
//    cout << endl;
//    for (int i = 0; i < n; i++)
//    {
//        if (arr[i] > 0)
//        {
//            cout << arr[i] << " ";
//        }
//    }

//     return 0;
// }
#include <iostream>
#include <string>
#include <vector>

class Employee
{
public:
    Employee(int id, std::string name, std::string contactInfo, double baseSalary)
        : id(id), name(name), contactInfo(contactInfo), baseSalary(baseSalary) {}

    virtual double calculateSalary() const
    {
        return baseSalary;
    }

    void displayInfo() const
    {
        std::cout << "Employee ID: " << id << "\n";
        std::cout << "Name: " << name << "\n";
        std::cout << "Contact Info: " << contactInfo << "\n";
        std::cout << "Base Salary: " << baseSalary << "\n";
    }

protected:
    int id;
    std::string name;
    std::string contactInfo;
    double baseSalary;
};

class HourlyEmployee : public Employee
{
public:
    HourlyEmployee(int id, std::string name, std::string contactInfo, double hourlyRate, double hoursWorked)
        : Employee(id, name, contactInfo, 0), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

    double calculateSalary() const override
    {
        double overtimePay = (hoursWorked > 40) ? (hoursWorked - 40) * 1.5 * hourlyRate : 0;
        return baseSalary + (hourlyRate * (hoursWorked - overtimePay)) + overtimePay;
    }

    void displayInfo() const
    {
        Employee::displayInfo();
        std::cout << "Hourly Rate: " << hourlyRate << "\n";
        std::cout << "Hours Worked: " << hoursWorked << "\n";
    }

private:
    double hourlyRate;
    double hoursWorked;
};

class PayrollSystem
{
public:
    void addEmployee(Employee *employee)
    {
        employees.push_back(employee);
    }

    void processPayroll()
    {
        for (const auto &employee : employees)
        {
            double salary = employee->calculateSalary();
            employee->displayInfo();
            std::cout << "Total Salary: " << salary << "\n";
        }
    }

private:
    std::vector<Employee *> employees;
};

int main()
{
    PayrollSystem payrollSystem;

    HourlyEmployee hourlyEmployee1(1, "John Doe", "john@example.com", 15.0, 45.0);
    HourlyEmployee hourlyEmployee2(2, "Jane Smith", "jane@example.com", 20.0, 38.0);

    payrollSystem.addEmployee(&hourlyEmployee1);
    payrollSystem.addEmployee(&hourlyEmployee2);

    payrollSystem.processPayroll();

    return 0;
}
