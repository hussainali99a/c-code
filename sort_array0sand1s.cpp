#include<iostream>
#include<vector>
using namespace std;
// 1 1 0 0 1 0 1 0
// 0 0 0 0 1 1 1 1
// zeroes count = 4 at end we get four.
// i = 7; 
// dry run for traversing by two loops
void sortZeroesAndOnes(vector<int>&v){

//     int zeroes_count = 0;
//     for(int ele:v){
//         if(ele==0){
//             zeroes_count++;
//         }
//     }
//     for(int i =0;i<v.size();i++){
//         if(i<zeroes_count){
//             v[i] = 0;
//         }
//         else{
//             v[i] = 1;
//         }
//     }
    int left_ptr=0;
    int right_ptr = v.size()-1;
    while(left_ptr<right_ptr){
        if(v[left_ptr]==1&&v[right_ptr]==0){
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
            

        }
        if(v[left_ptr]==0){
            left_ptr++;
        }
        if(v[right_ptr]==1){
            right_ptr--;
        }
    }
    return;
 }

int main(){
    // two pointers question
    //sort an array consisting only os and 1s
    int n ;
    cin>>n;
    vector<int> v;
    for(int i =0;i<n;i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }
    sortZeroesAndOnes(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}