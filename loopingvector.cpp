#include<iostream>
#include<vector>
using namespace std;
int main(){

    // vector<int> v;
    // // for loop:-
    // for(int i = 0;i<5;i++){
    //     int element;
    //     cin>>element;
    //     v.push_back(element);
    // }
    // for (int i = 0; i <v.size(); i++)
    // {
    //     /* code */cout<<v[i]<<" ";
    // }
    // cout<<endl;

    // // cout<<v.size()<<endl<<v.capacity()<<endl;
    // v.insert(v.begin() + 2, 6);

    // // for each
    // for(int ele:v){
    //     cout<<ele<<" ";
    // }
    // cout<<endl;

    // v.erase(v.end()-2);

    // // while loop
    // int i =0;
    // while (i<v.size()){
    //     cout<<v[i++]<<" ";

    // }


// **find the last occurance of an element x in a given array

// vector<int> v(6);
// for (int i = 0; i <6; i++)
// {
//     /* code */cin>>v[i];
// }
// cout<<"enter x:";
// int x ;
// cin>>x;
// int occur;
// for(int i =0;i<v.size();i++){
//     if(v[i]==x){
//         occur = i;
//     }
// }


// cout<<occur<<endl;

// vector<int> v(6);
// for(int i = 0;i<6;i++){
//     cin>>v[i];
// }

// cout<<"enter x:";
// int x; 
// cin>>x;

// int occur = -1;
// for(int i = v.size()-1;i>=0;i--){
//     if(v[i]==x){
//         occur = i;
//         break;

//     }
// }
// cout<<occur<<endl;


// **count the number of occurance of a particular elemnt x ;

    

    // vector<int> v(6);
    // for(int i = 0;i<6;i++){
    //     cin>>v[i];
    // }

    // cout<<"enter x:"<<endl;
    // int x ;
    // cin>>x;

    // int count = 0;
    // for(int i = 0;i<v.size();i++){
    //     if(v[i]==x){
    //         count = count +1;
    //     }
    // }
    // cout<<count<<endl;

    //** count the number of element strictly greater than x;
    // vector<int> v(6);
    // for(int i = 0;i<5;i++){
    //     cin>>v[i];
    // }
    // int count = 0;
    // int x;
    // cout<<"enter the number"<<endl;
    // cin>>x;
    // for(int i =0;i<v.size();i++){
    //     if(v[i]>x){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;

    // check if the given array is sorted or not
    // array should be ascending order

    // int array[] = {1,2,7,4,5,6};
    // bool sortedflag = true;
    // for(int i =1;i<6;i++){
    //     if(array[i]<=array[i-1]){
    //         sortedflag = false;
    //     }
    // }
    // cout<<sortedflag<<endl;


int array[5];
// int sum_even = 0;
// int sum_odd=0;
int anssum = 0;
for(int i = 0;i<5;i++){
    cin>>array[i];
}
for(int i = 0;i<5;i++){
    if(i%2==0){
       anssum+=array[i];
    }
    else{
        anssum-=array[i];
}
}
cout<<anssum<<endl;


    return 0;
}