// rotate the given array'a' by k steps,where k is non -ve.
// k can be grater than n as well where n is the size of array 'a'
// [1,2,3,4,5] rotating in k steps k =2;
// [5,1,2,3,4] step 1
// [4,5,1,2,3] step 2
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int k = 24;
    // k can be greater than n thats why we are doing k%n
    k=k%size;

int ansarray[5]; // used extra memory means used another array
int j = 0;
// inserting last k element in ansarray
for(int i = size-k;i<size;i++){
    ansarray[j++] = arr[i];
}
// inserting first n-k element
for(int i =0;i<=k;i++){
    ansarray[j++] = arr[i];
}
for(int i = 0;i<size;i++){
    cout<<ansarray[i]<<" ";
}
cout<<endl;


//by reversing an array
// vector<int> v={1,2,3,4,5};
// int k = 2;
// k =k%v.size();


// reverse(v.begin(),v.end());
// reverse(v.begin(),v.begin()+k);
// reverse(v.begin()+k,v.end());

// for(int a:v){
//     cout<<a<<" ";
// }
// cout<<endl;

    return 0;
}