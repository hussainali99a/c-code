#include<iostream>
using namespace std;
class calculator{
    public:
    int add(int num1,int num2){
        int sum = num1+num2;
        return sum;
    }
    int add(int num1 , int num2,int num3){
        int sum = num1 + num2 + num3;
        return sum;
    }
    float add(float num1,float num2){
        int sum = num1 + num2;
        return sum;
    }
};
int main(){
   calculator cal;
   float a = 2.3;
   float b = 4.5;

   cout<<cal.add(2,3)<<endl;
   cout<<cal.add(2,3,4)<<endl;
   cout<<cal.add(a,b)<<endl;
    
    return 0;
}