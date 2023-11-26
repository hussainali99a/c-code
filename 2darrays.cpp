#include<iostream>
using namespace std;
int main(){
    //multi dimensional array:- arrays of array
    
// datatype array_name[size1][size2].....[sizeN]
// syntax for 2d array:-
// datatype array_name[rows][col];
// int[4][3];
// rows =4,col = 3;
// accessing element in 2-d array:-
// we will use 2 index here one will be specifing row another will be column;
// a[i][j];
// i = row no.
// j = col no.
// element in 2-d array like
// if we have int arr[4][3]:-
// 4*3 = 12 
//12 elements are there
// methods to intiiaze 2-d array:-
// int arr[4][3] = {1,2,3,4,5,6};
// int arr[4][3] = {{1,2,3},
// {4,5,6}};
// taking 2-d array as input:-
//for(int i = 0;i<n;i++){
//  for(int j =0;j<m;j++){
    // cin>>arr[i][j];
// }
// }
// use of multi-dimensional array:-
// use to representing grids.
// faster access and simpler access
// predefined size is their





// printing and intilizing 2-d array:-
// int n,m ;
// cin>>n>>m;

// int array[n][m];
// for(int i = 0;i<n;i++){
//     for(int j =0;j<m;j++){
//         cin>>array[i][j];
//     }
// }
// for(int i = 0;i<n;i++){
//     for(int j =0;j<m;j++){
//         cout<<array[i][j]<<" ";
        
//     }
//     cout<<endl;
// }
    // int r1,c1;
    // cin>>r1>>c1;
    // int A[r1][c1];
    // for(int i = 0;i<r1;i++){
    //     for(int j =0;j<c1;j++){
    //         cin>>A[i][j];
    //     }
    // }

    // int r2,c2;
    // cin>>r2>>c2;

    // int B[r2][c2];
    // for(int i = 0;i<r2;i++){
    //     for(int j=0;j<c2;j++){
    //         cin>>B[i][j];
    //     }
    // }

    // if(c1!=r2){
    //     cout<<"matrix multiplication not possible for this input"<<endl;
    // }

    // int C[r1][c2];

    // for(int i =0;i<r1;i++){
    //     for(int j = 0;j<c2;j++){
    //         int value;
    //         for(int k = 0;k<r2;k++){
    //             value+=A[i][k]*B[k][j];
    //         }
    //         C[i][j] = value;
    //     }
    // }
    // for(int i = 0;i<r1;i++){
    //     for(int j=0;j<c2;j++){
    //         cout<<C[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int n ,m;
    cin>>m>>n;
    int array[n][m];
    for(int i = 0;i<n;i++){
       for(int j = 0;j<m;j++){
        cin>>array[i][j];
       }
    }
    int transpose[m][n];
    for(int i = 0;i<m;i++){
        for(int j =0;j<n;j++){
            transpose[i][j] = array[j][i];
        }
    }
    for(int i =0;i>m;i++){
        for(int j = 0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }cout<<endl;
    }
    return 0;


}