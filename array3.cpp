#include<iostream>
using namespace std;
int main(){
    // data structure which stores a collection of same types of  data
    // array have contiguous memory

    // index tell loction of every element
    // arrays are 0 index means first itmem index is 0
    // consecutive blocks of memory
    // types of array:-
    // 1.single dimension arrayor one dimension

    //2.multi dimensional array
    // it contains row and column
    // 2-d array ,3-d array
    // accessing element in single dimensional array:-
    // we can do this through index
    // from 0 to n (last index of array)
    // arr[0] = first element
    // arr[n] = nth element
    // operation on array:-
    // finding size of an array:-
    // we can use sizeof() operator
    // if array contain 4 elements then size will be equal to 
    // 4X4 = 20
    // data type of array is int so 4X4=20 will be size of array
    // len of array can be :-
    // we can divide whole array size by first element of array
    // 16/4 = 4 (4 is the size)
// ---------------------------------------------------------------------------------------------
    // int arr[] ={1,2,3,4,5};
    // cout<<sizeof(arr)<<endl;
    // cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    // int arr2[4];
    // cout<<arr2[0]<<endl;
    // cout << arr2[1] << endl;
    // cout << arr2[2] << endl;
    // cout << arr2[3] << endl;
    // // if we dont intialize array and print it , so it will give it will garbage value
    // -----------------------------------------------------------------------------------------------------
   
   
    // traversing through the array:-
// for loop:-
    // int array[] = {1,2,3,4};
    // int size = sizeof(array)/sizeof(array[0]); 
    // for(int idx = 0;idx<size;idx++){
    //     cout<<"array["<<idx<<"]:"<<array[idx]<<endl;
    // }


    // through for each loop:
    // for(datatype variable:array){
// code variable here will be element
    // }


    // for(int ele :array){
    //     cout<<ele<<endl;
    // }
    // // this traverse through eack element in array but i above for loop we have flexibility to traverse till pos we want


// while loop:-
// int index = 0;
// while(index<size){
//     cout<<array[index]<<endl;
//     index++;
// }
// ---------------------------------------------------------------------------------------------------------------------------------------


// /input in array
// char vowels[5];
// for(int i = 0;i<5;i++){
//     cin>>vowels[i];
    
// }
// for(int i =0;i<5;i++){
//     cout<<vowels[i]<<" ";
// }


// //  for each
// for(char &ele:vowels){
//     cin>>ele;
// }
// for(int i = 0;i<5;i++){
//     cout<<vowels[i]<<" ";
// }

// int i = 0;
// while(i<5){
//     cin>>vowels[i];
//     i++;
// }

// while(i<5){
//     cout<<vowels[i]<<" ";
//     i++;
// }
// -----------------------------------------------------------------------------------------------------


// calculate the sum of all the elemnt in an array:-
// int arr[5];
// int size = sizeof(arr)/sizeof(arr[0]);
// int sum = 0;
// cout<<"enter the element of array [5]:"<<endl;
// for(int i =0;i<size;i++){
//     cin>>arr[i];
// }
// cout<<"input array is:"<<endl;
// for(int i = 0;i<size;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// for(int i = 0;i<size;i++){
//     sum = sum + arr[i];
// }

// cout<<"sum of all the elment is:"<<sum<<endl;


// find the maximum value in the array:-

// int arr[] ={34,50000,9890,12,9};
// int max = arr[0];
// for(int i = 1;i<5;i++){
//     if(arr[i]>max){
//         max = arr[i];
//     }
// }
// cout<<max<<endl;


// linear search:-

//  search if a given elementis present int the array or not,if it is not present then return else return -1 in the index
// given array[3 9 12 11 7]
// find 11 if it is in the array;
int arr[] = {3,9,18,11,7};
int key = 3;
int ans = -1;

for(int i =0;i<5;i++){
    if(arr[i]==key){
        
        ans = i;
        break; // pura traverse karne ki zarurat nhi padegi
    }

}
cout<<ans<<endl;
    

int array[9] = {1};

cout<<array[0]<<endl;

cout<<array[1];
return 0;
}