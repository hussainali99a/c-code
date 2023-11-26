#include<iostream>
using namespace std;
int main(){
    int i , j=0 , num;
    cout<<"enter the number to be checked"<<endl;
    cin>>num;

    //check for prime number 
    for (int i = 1; i <=num; i++)
    {
        /* code */if ((num%i)==0)
        {
            /* code */j++;
        }
        
    }
     
     if(j==2){
        cout<<num<<"is a prime"<<endl;
     }
     else{
        cout<<num<<"is not a prime"<<endl;
     }
    return 0;
}