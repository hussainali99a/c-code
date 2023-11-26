#include<iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i = 0;i<6;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    int max = arr[0];
    int min = arr[0];
    for(int i = 0;i<6;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        else if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<endl;
    int sum = max + min;
    cout<<sum<<endl;
    return 0;
}