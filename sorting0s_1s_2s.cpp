#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int left_ptr= 0;
    int right_ptr = n-1;
    int mid_ptr = 0;
    while(mid_ptr<right_ptr){
        if(arr[mid_ptr]==0&&arr[left_ptr==1]||arr[left_ptr]==2){
            arr[left_ptr++]= 0;
        }
        if(arr[mid_ptr]==1||arr[mid_ptr]==2){
            arr[right_ptr++] = 2;
        }
        if(arr[left_ptr]==0){
            left_ptr++;
        }
        if(arr[right_ptr]==2){
            right_ptr++;
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}