#include <iostream>
#include <string>

class Vehicle
{
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(const std::string &make, const std::string &model, int year)
        : make(make), model(model), year(year) {}

    void start()
    {
        std::cout << make << " " << model << " " << year << " starting..." << std::endl;
    }

    void stop()
    {
        std::cout << make << " " << model << " " << year << " stopping..." << std::endl;
    }
};

class Car : public Vehicle
{
private:
    int num_doors;
    std::string fuel_type;

public:
    Car(const std::string &make, const std::string &model, int year, int num_doors, const std::string &fuel_type)
        : Vehicle(make, model, year), num_doors(num_doors), fuel_type(fuel_type) {}

    void additionalInfo()
    {
        std::cout << "Car Details: " << num_doors << " doors, Fuel type: " << fuel_type << std::endl;
    }
};

class Motorcycle : public Vehicle
{
private:
    int top_speed;
    std::string engine_type;

public:
    Motorcycle(const std::string &make, const std::string &model, int year, int top_speed, const std::string &engine_type)
        : Vehicle(make, model, year), top_speed(top_speed), engine_type(engine_type) {}

    void additionalInfo()
    {
        std::cout << "Motorcycle Details: Top Speed: " << top_speed << ", Engine Type: " << engine_type << std::endl;
    }
};

class Truck : public Vehicle
{
private:
    std::string load_capacity;
    std::string transmission_type;

public:
    Truck(const std::string &make, const std::string &model, int year, const std::string &load_capacity, const std::string &transmission_type)
        : Vehicle(make, model, year), load_capacity(load_capacity), transmission_type(transmission_type) {}

    void additionalInfo()
    {
        std::cout << "Truck Details: Load Capacity: " << load_capacity << ", Transmission Type: " << transmission_type << std::endl;
    }
};

int main()
{
    Car car("Toyota", "Corolla", 2023, 4, "Gasoline");
    car.start();
    car.additionalInfo();
    car.stop();
    std::cout << std::endl;

    Motorcycle motorcycle("Harley-Davidson", "Sportster", 2023, 150, "V-Twin");
    motorcycle.start();
    motorcycle.additionalInfo();
    motorcycle.stop();
    std::cout << std::endl;

    Truck truck("Ford", "F-150", 2023, "2000 lbs", "Automatic");
    truck.start();
    truck.additionalInfo();
    truck.stop();

    return 0;
}
