#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,5,6,7,8};
    int count = 0;
    int county = 0;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<size;i++){
        if(arr[i]%2==0){
            count++;
        }
        if(i%2!=0){
            county++;
        }
    }
    cout<<"even numbers:"<<count<<endl;
    cout<<"odd numbers:"<<county<<endl;
    return 0;
}