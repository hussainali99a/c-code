#include<iostream>
using namespace std;
class inventory{
  private:
  char name[20];
  char description[20];
  int price;
  int quantity;
  public:
  void dispalyproduct(char &name,char &description,int price,int quantity){
    cout<<"name:"<<name<<endl;
    cout<<"description:"<<description<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"quantity"<<quantity<<endl;
  }
  void addproduct(char &name, char &description, int price, int quantity){
    cout<<"enter name:"<<endl;
    cin>>name;
    cout << "enter description:" << endl;
    cin >> description;
    cout << "enter price:" << endl;
    cin >> price;
    cout << "enter quantity:" << endl;
    cin >> quantity;
  }
  void summary(){
    cout<<"product name:"<<name<<endl<<"product quantity:"<<quantity<<endl;
    

  }
  
};
int main(){

    return 0;
}
