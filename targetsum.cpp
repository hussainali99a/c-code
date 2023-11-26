#include<iostream>
using namespace std;
int main(){
    //basic problem solving in array:-
    // pattern :target sum
    // pair of two
    // int arr[5] = {3,4,6,7,1};
    // int count = 0;
    // int target_sum;
    // int first = arr[0];
    // cout<<"enter the target sum"<<endl;
    // cin>>target_sum;
    // for(int i = 0;i<5;i++){
    //     for(int j = i+1;j<5;j++)
    //     if(arr[j] + arr[i] == target_sum){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;


// traget sum :
//  count the number if triplets whose sum is equal to the given value x:

//     int arr[] = {3,1,2,4,0,6};
//     int targetsum ;
//     cout<<"enter the targetsum:"<<endl;
//     cin>>targetsum;
//     int count = 0;
//     for(int i = 0;i<5;i++){
//         for(int j = i+1;j<5;j++){
//             for(int k = j+1;k<5;k++){
//                 if(arr[i]+arr[j]+arr[k]==targetsum){
//                     count++;
//                 }
//             }
//         }
//     }
// cout<<count<<endl;

// array manipulation:-
// this means you have an array where all element re repeated expect one that we call unique element
// [2,3,1,3,2,4,1] here 3,2,1 are repeated twice but 4 once so 4 is a unique element

int arr[]={2,3,1,3,2,4,4,5,1};
int size = 9;
for(int i = 0;i<size;i++){
    for(int j = i+1;j<size;j++){
        if(arr[i] == arr[j]){
            arr[i] = -1;//arr[i] = arr[j] = -1;
        }
    }
}
// finding unique element :-
for(int i = 0;i<size;i++){
    if(arr[i]>0){
        cout<<arr[i]<<endl;
    }
}






    return 0;
}