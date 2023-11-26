#include<iostream>
using namespace std;
int main(){
    // int n ;
    // cout<<"enter the size of array"<<endl;
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // int n ;
    // cout<<"enter  the size of array"<<endl;
    // cin>>n;
    // int arr[n];
    // for(int i = 0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";

    // }
    // cout<<endl;
    // for(int i = n-1;i>=0;i--){
    //     cout<<arr[i]<<" ";
    // }

    // sum of all elements in array;
    // int n ;
    // int sum = 0;
    // cout<<"enter the size of array:"<<endl;
    // cin>>n;
    // int  arr[n];
    // for(int i =0;i<n;i++){
    //     cin>>arr[i];
    // }cout<<endl;
    // for(int i = 0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    // for(int i = 0;i<n;i++){
    //     sum = sum + arr[i];
    // }cout<<endl;
    // cout<<sum;
    int arr[] = {2,4,6,9,1,10};
    int i = 0;
    int j = 5;
    while(i<j){
        if(arr[i]>arr[j]){
            arr[i] = arr[j];
            i++;
            j--;
        }
        else if(arr[i]<arr[j]){
            j--;
        }
    }
    return 0;
}