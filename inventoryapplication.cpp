#include <iostream>
#include <string>

using namespace std;

const int MAX_PRODUCTS = 100;

class User
{
public:
    void setUsername(string username)
    {
        this->username = username;
    }

    void setPassword(string password)
    {
        this->password = password;
    }

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
    string name;
    string description;
    double price;
    int quantity;
};

class Inventory
{
public:
    void setUser(User user)
    {
        this->user = user;
    }

    bool authenticateUser(string password)
    {
        return user.authenticate(password);
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
        for (int i = 0; i < productCount; i++)
        {
            cout << "Product Name: " << products[i].name << endl;
            cout << "Quantity: " << products[i].quantity << endl;
        }
    }

    void searchProduct(string keyword)
    {
        cout << "Search Results for: " << keyword << endl;
        for (int i = 0; i < productCount; i++)
        {
            if (products[i].name.find(keyword) != string::npos || products[i].description.find(keyword) != string::npos)
            {
                cout << "Product Name: " << products[i].name << endl;
                cout << "Description: " << products[i].description << endl;
                cout << "Price: " << products[i].price << endl;
                cout << "Quantity: " << products[i].quantity << endl;
            }
        }
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
    User user;
    Product products[MAX_PRODUCTS];
    int productCount;
};

int main()
{
    Inventory inventory;
    User user;

    user.setUsername("admin");
    user.setPassword("1234567890");

    string password;
    cout << "Enter your password: ";
    cin >> password;

    if (inventory.authenticateUser(password))
    {
        cout << "Authentication successful! Welcome, " << user.getUsername() << "." << endl;

        while (true)
        {
            // ... rest of the inventory management system code as before
        }
    }
    else
    {
        cout << "Authentication failed. Exiting the program." << endl;
        return 1;
    }

    return 0;
}
