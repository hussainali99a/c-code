#include<iostream>
using namespace std;
// int largest_ElementIndex(int arr[],int size){
//     int max = arr[0];
//     // int max = INT64_MIN;
//     int maxindex = -1;
//     for(int i = 0;i<size;i++){
//         if(arr[i]>max){
//             max = arr[i];
//             maxindex = i;
//         }
//     }
//     return maxindex;

int second_largest(int arr[],int size){
    int max = INT16_MIN;
    int second_max = INT16_MIN;

    for(int i = 0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int j = 0;j<size;j++){
        if(arr[j]>second_max&&arr[j]!=max){
            second_max = arr[j];
        }

    }
    return second_max;
}

int main(){
    int arr[] ={2,3,5,6,7,1,7};
    int size = 7;
    cout<<second_largest(arr,7);
    // int largestelementindex = largest_ElementIndex(arr,7);
    // cout << arr[largestelementindex] << endl;
    // //arr[largestelementindex] = -1;
    // int largestelement = arr[largestelementindex];
    // for(int i = 0;i<7;i++){
    //     if(arr[i]==largestelement){
    //         arr[i] = -1;
    //     }
    // }

    // int secondlargest = largest_ElementIndex(arr,6);
    // cout<<arr[secondlargest]<<endl;


// int second_max = arr[0];
// int largeeleindex = largest_ElementIndex(arr,7);

// int max = arr[largeeleindex];
// for(int i = 0;i<7;i++){
//     if(arr[i]>second_max &&arr[i]!=max){
//         second_max = arr[i];
//     }
// }
// cout<<second_max<<endl;
    return 0;
}