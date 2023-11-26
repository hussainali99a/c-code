#include<iostream>
#include<string>
using namespace std;
class Vehicle{
    public:
    string make;
    string model;
    int year;
    public:
    void start(){
        cout<<model<<" "<<make<<" "<<year<<" "<<"starting....."<<endl;
    }
    void stop(){
        cout<<model<<" "<<make<<" "<<year<<" "<<"stopping......"<<endl;
    }
};
class Car:public Vehicle{
    public:
    int num_doors;
    string fuel_type;
    
    void additional_info(){
        cout<<"car details:"<<num_doors<<"doors fuel type:"<<fuel_type<<endl;
    }
};
class Motorcycle:public Vehicle{
    public:
    int top_speed;
    string engine_type;

    void additionalInfo(){
        cout<<"car details:top speed"<<top_speed<<"engine type:"<<engine_type;
    }
};
class Truck:public Vehicle{
    public:
    string load_capacity;
    string transmission_type;

    void additionalInfo(){
        cout<<"truck details: load capacity:"<<load_capacity<<"transmission_type:"<<transmission_type<<endl;
    }
};
int main(){
    Car car;
    car.make = "toyota";
    car.model = "corolla";
    car.year = 2023;
    car.num_doors = 4;
    car.fuel_type = "gasoline";
    car.start();
    car.additional_info();
    car.stop();

    cout<<endl;

    Motorcycle motorcycle;
    motorcycle.make = "royal enfield";
    motorcycle.model = "classic 350";
    motorcycle.year = 2018;
    motorcycle.engine_type = "v_twin";
    motorcycle.top_speed = 150;
    motorcycle.start();
    motorcycle.additionalInfo();
    motorcycle.stop();

    cout<<endl;
    
    Truck truck;
    truck.make = "Ford";
    truck.model = "F-150";
    truck.year = 2023;
    truck.load_capacity = "5000 lbs";
    truck.transmission_type = "automatic";
    truck.start();
    truck.additionalInfo();
    truck.stop();

    return 0;
}