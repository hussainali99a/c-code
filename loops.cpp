#include<iostream>
using namespace std;
int main(){
    /*loops are used to do repetative task
    
    there are three types of loop:-
    while loop while some condition is true executes it ;
    
    for loop
    do while loop
    */
//    while loop example:-
//    int i = 0;
//    while (i<=5)
//    {
//     /* code */cout<<i<<endl;
//     i++;
//    }
   
    // for (int i = 1; i <=5; i++)
    // {
    //     /* code */cout<<"hello world"<<endl;
    // }
    // int i = 0;
    // while(i<=100){
    //     cout<<i<<endl;
    //     i++;
    // }
    // q:-
    // int n ; 
    // cout<<"enter the number"<<endl;
    // cin>>n;

    // int i = 1;//loop variable
    // int sum = 0;
    // while (i<=n)
    // {
    //     /* code */sum+=i;
        
    //     i++;
    // }
    // cout<<sum;
    // FOR LOOP
    // Syntax:-for(init-statement,condition,final expression){
        // code
    // }
    // init-statement :- starting point of the loop
    // condition = stopping point
    // final expression = loop variable updation
// //   example :-  for (int  i = 1; i <= 5; i++)
//     {
//         /* code */cout<<i<<endl;
//     }
//     int n ;
//     cin>>n;
//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         /* code */sum+=i;
        
//     }
    
// cout<<sum;


// int n ;
// cin>>n;
// for (int i = 1; i <=n; i++)
// {
//     /* code */if(i==10){
//         break;
//     }
//     cout<<i<<endl;
// }

// int i = 5;
// while(true){
//     if(i%7==0){
//         cout<<i<<endl;
//         break;
//     }
//     i+=5;
// }

// DO WHILE:-
// int i = 1;
// do{
//     cout<<i<<endl;
//     i++;
// }while(i<=10);

// int n ;
// int i = 0;
// int sum = 0;
// cin>>n;
// do{
//     sum+=i;
//     i++;
// }while(i<=n);

// cout<<sum;

for (int i = 1; i <= 50; i++)
{
    /* code */if(i%3==0){
        continue;
    }
    cout<<i<<endl;
}


    return 0;
}