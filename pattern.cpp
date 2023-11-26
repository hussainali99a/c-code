#include<iostream>
using namespace std;
int main(){
    //question 1:-rectangular pattern
    // int n , m ;
    // cin>>n>>m;
    // for (int i = 1; i <=n; i++)
    // {
    //     /* code */for (int j =1 ; j <= m; j++)
    //     {
    //         /* code */cout<<"*";
    //     }
    //  cout<<endl;   
    // }

    // Question 2:-hollow rectangle:-

    // int n , m ;
    // cin>>n>>m;

    // for (int i = 1; i <=n; i++) //for rows
    // {
    //     /* code */for (int j = 1; j <= m; j++)
    //     {
    //         /* code */if(i==1||j==1||j==m||i==n){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl; 
    // }

    // QUESTION 3:- triangular pattern 1

    // int n ;
    // cin>>n;

    // for (int i = 1; i <=n; i++)
    // {
    //     /* code */for (int j = 1; j <=i; j++)
    //     {
    //         /* code */cout<<"*";
    //     }
    //     cout<<endl;
    // }
    

    // Question 4:-triangular patten 2 (inverted of first one)

    // int n ;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     /* code */for (int j = 1; j <=(n-i+1); j++)
    //     {
    //         /* code */cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // question no 5:- triangular pattern 3

    // int n ;
    // cin>>n;

    // for (int i = 1; i <= n; i++)
    // {
    //     /* code */for(int j = 1;j<=(n-i);j++){
    //         cout<<" ";
    //     }
    //     for(int z = 1;z<=i;z++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // question no 6:-
    // int n ;
    // cin>>n;
    // for(int i = 1;i<=n;i++){
    //     for(int j = 1;j<=(n-i);j++){
    //         cout<<" ";
    //     }
    //     for(int z = 1;z<=(2*i-1);z++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // question no 7:- numerical rectangle pattern 

    // int n ;
    // cin>>n;

    // for(int i = 1;i<=n;i++){
    //     for(int j = i;j<=n;j++){
    //         cout<<j;
    //     }
    //     for(int j =1;j<=(i-1);j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    
    // question no 8:- numerical rectangle pattern 2
    // int n ;
    // cin>>n;
    // for(int i =1;i<=n;i++){
    //     for(int j =1;j<=6;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;

    // }

    // question 9:- hollow numerical rectangle questions

// int n ;
// cin>>n;
// for(int i =1;i<=n;i++){
    // for(int j =1;j<=6;j++){
    //     if(i==1||i==n||j==1||j==6){
    //         cout<<j;
    //     }
    //     else{
    //         cout<<" ";
    //     }
    // }
    // cout<<endl;
// }

// question no 10:-numeriacl rectangular pattern 3

// int n , m;
// cin>>n>>m;

// for(int i =1;i<=n;i++){
    
//     for(int j = 1;j<=m;j++){
//         if((i+j)%2==0){
//             cout<<"1";
//         }
//         else{
//             cout<<"2";
//         }

//     }
//     cout<<endl;
// }


// question 11:- numerical triangle

// int n ;
// cin>>n;

// for(int i =1;i<=n;i++){
//     for(int j = 1;j<=i;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

// question 12:- triangular pattern 2
// int n ;
// cin>>n;
// for(int i =1;i<=n;i++){
//     for(int j = 1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     for(int z =1;z<=i;z++){
//         cout<<z;
//     }
//     for(int f = (i-1);f>=1;f--){
//         cout<<f;
//     }
//     cout<<endl;
// }

// question no 13:-hollow triangle 3

int n ;
cin>>n;
for(int i =1;i<=n;i++){
    for(int j =1;j<=(n-i);j++){
        cout<<" ";
    }
    for(int z =1;z<=(2*i-1);z++){
        if(i==1||i==n||z==(2*i-1)||z==1){
            cout<<i ;
        }
        else{
            cout<<" ";
        }
        
    }
    cout<<endl;
}
    
    
    return 0;
}