// logical set of code which perform a specific task
// input we pass is known as parameters
// increases reusability of code
// DRY principle(don't repeat yourself) 
// easy to read
// types of function:-
// user-defined function
// standard library function

// how to declare function
// return_type function_name(par1,par2){
//  code
// }
#include<iostream>
using namespace std;
int add(int n1,int n2){
    int sum = n1+n2;
    return sum;
}
int add(int n1,int n2 , int n3){
    int sum = n1+n2 +n3;
    return sum;
}
float add(float n1,float n2){
    float sum = n1 + n2;
    return sum;
}
int main(){
    // int ans = add(3,4);
    // cout<<ans;
    float a = 3.4;
    float b = 5.4;    
    cout<<add(3,4)<<endl;
    cout<<add(3,4,5)<<endl;
    cout<<add(a,b)<<endl;
    return 0;
}
