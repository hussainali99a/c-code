Iventory management program:-
#include <iostream>
#include <string>

using namespace std;

const int MAX_PRODUCTS = 100;

class User
{
public:
    User(string username, string password) : username(username), password(password) {}

    bool authenticate(string inputPassword)
    {
        return inputPassword == password;
    }

    string getUsername()
    {
        return username;
    }

private:
    string username;
    string password;
};

class Product
{
public:
    Product() : name(""), description(""), price(0.0), quantity(0) {}

    string name;
    string description;
    double price;
    int quantity;
};

class Inventory
{
public:
    Inventory() : user(nullptr), productCount(0) {}

    void addUser(string username, string password)
    {
        user = new User(username, password);
    }

    bool authenticateUser(string username, string password)
    {
        if (user != nullptr && user->authenticate(password))
        {
            return true;
        }
        return false;
    }

    void addProduct(string name, string description, double price, int quantity)
    {
        if (productCount < MAX_PRODUCTS)
        {
            products[productCount].name = name;
            products[productCount].description = description;
            products[productCount].price = price;
            products[productCount].quantity = quantity;
            productCount++;
        }
        else
        {
            cout << "Inventory is full. Cannot add more products." << endl;
        }
    }

    void updateProduct(int index, string description, double price, int quantity)
    {
        if (index >= 0 && index < productCount)
        {
            products[index].description = description;
            products[index].price = price;
            products[index].quantity = quantity;
        }
    }

    void removeProduct(int index)
    {
        if (index >= 0 && index < productCount)
        {
            for (int i = index; i < productCount - 1; i++)
            {
                products[i] = products[i + 1];
            }
            productCount--;
        }
    }

    void printSummaryReport()
    {
        cout << "Inventory Summary Report" << endl;
        cout << "---------------------------------" << endl;
        cout << setw(20) << "Product Name" << setw(20) << "Quantity" << endl;
        cout << "---------------------------------" << endl;
        for (int i = 0; i < productCount; i++)
        {
            cout << setw(20) << products[i].name << setw(20) << products[i].quantity << endl;
        }
        cout << "---------------------------------" << endl;
    }

    void searchProduct(string keyword)
    {
        cout << "Search Results for: " << keyword << endl;
        cout << "---------------------------------" << endl;
        cout << setw(20) << "Product Name" << setw(20) << "Description" << setw(10) << "Price" << setw(10) << "Quantity" << endl;
        cout << "---------------------------------" << endl;
        for (int i = 0; i < productCount; i++)
        {
            if (products[i].name.find(keyword) != string::npos ||
                products[i].description.find(keyword) != string::npos)
            {
                cout << setw(20) << products[i].name << setw(20) << products[i].description << setw(10) << products[i].price << setw(10) << products[i].quantity << endl;
            }
        }
        cout << "---------------------------------" << endl;
    }

    void validateData()
    {
        for (int i = 0; i < productCount; i++)
        {
            if (products[i].price < 0 || products[i].quantity < 0)
            {
                cout << "Invalid data found for product: " << products[i].name << endl;
            }
        }
    }

private:
    User *user;
    Product products[MAX_PRODUCTS];
    int productCount;
};

int main()
{
    Inventory inventory;

    inventory.addUser("admin", "password123");

    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (inventory.authenticateUser(username, password))
    {
        cout << "Authentication successful!" << endl;

        while (true)
        {
            cout << "\nInventory Management System Menu:" << endl;
            cout << "1. Add Product" << endl;
            cout << "2. Update Product" << endl;
            cout << "3. Remove Product" << endl;
            cout << "4. Search Product" << endl;
            cout << "5. Validate Data" << endl;
            cout << "6. Generate Summary Report" << endl;
            cout << "7. Exit" << endl;

            int choice;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice)
            {
            case 1:
            {
                string name, description;
                double price;
                int quantity;
                cout << "Enter product name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter product description: ";
                getline(cin, description);
                cout << "Enter product price: ";
                cin >> price;
                cout << "Enter product quantity: ";
                cin >> quantity;
                inventory.addProduct(name, description, price, quantity);
                break;
            }
            case 2:
            {
                int index;
                cout << "Enter the index of the product to update: ";
                cin >> index;
                string description;
                double price;
                int quantity;
                cout << "Enter new description: ";
                cin.ignore();
                getline(cin, description);
                cout << "Enter new price: ";
                cin >> price;
                cout << "Enter new quantity: ";
                cin >> quantity;
                inventory.updateProduct(index, description, price, quantity);
                break;
            }
            case 3:
            {
                int index;
                cout << "Enter the index of the product to remove: ";
                cin >> index;
                inventory.removeProduct(index);
                break;
            }
            case 4:
            {
                string keyword;
                cout << "Enter search keyword: ";
                cin.ignore();
                getline(cin, keyword);
                inventory.searchProduct(keyword);
                break;
            }
            case 5:
                inventory.validateData();
                break;
            case 6:
                inventory.printSummaryReport();
                break;
            case 7:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
    else
    {
        cout << "Authentication failed. Exiting the program." << endl;
        return 1;
    }

    return 0;
}
