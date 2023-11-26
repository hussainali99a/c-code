// #include<iostream>
// using namespace std;
// // int add(int num1,int num2){
// //     int sum = num1 + num2;
// //     return sum;
// // }
// int main(){
// //    int a , b ;
// //    cin>>a>>b;

// // cout<< add(a , b );
// // int x1, x2, x3;
// //  cout<<"enter the number1:"<<endl;
// //  cin>>x1;
// //  cout << "enter the number2:" << endl;
// //  cin >> x2;
// //  cout << "enter the number3:" << endl;
// //  cin >> x3;

// //  if (x1>x2&&x1>x3)
// //  {
// //     /* code */cout<<x1;}
 
// //  else if(x3>x1&&x3>x2){
// //     cout<<x3;
// //  }
// // else{
// //     cout<<x2;
// // }
//  // for (int i = 1; i <=100; i++)
//  // {
//  //     // /* code */if(i%2==0){
//  //     //     cout<<i<<endl;
//  //     // }
//  //     if (i%2!=0)
//  //     {
//  //         /* code */
//  //         cout<<i<<endl;
//  //     }

//  // }

// int totalseats = 50;
// int passenger;
// cin>>passenger;
// int seatremaining = totalseats - passenger;
// int seatsleft = seatremaining % passenger;
// cout<<seatsleft;

//  return 0;
// }



// finding maximum among three numbers :-

#include<iostream>
using namespace std;
int main(){
    // int x, y , z;
    // cout<<"enter the num1:";
    // cin>>x;
    // cout << "enter the num2:";
    // cin >> y;
    // cout << "enter the num3:";
    // cin >> z;

    // if (x>y&&x>z)
    // {
    //     /* code */cout<<"num1 is greater";
    // }
    // else if(y>x&&y>z){
    //     cout<<"num2 is greater";
    // }
    // else{
    //     cout<<"num3 is greater";
    // }
    // int i , num , j=0;
    // cout<<"enter the number to be checked";
    // cin>>num;

    // for (int i = 1; i <= num; i++)
    // {
    //     /* code */if ((num%i)==0)
    //     {
    //         /* code */j++;
    //     }
        
    // }
    // if (j==2)
    // {
    //     /* code */cout<<num<<"is prime";
    // }
    // else{
    //     cout<<num<<"is not prime";
    // }
// -------------------------------------------------------
    // int main()
    // {
    //     int n;
    //     cin >> n;

    //     // your code goes here
    //     for (int i = n; i >= 1; i--)
    //     {
    //         if (i % 5 == 0)
    //         {
    //             cout << i << endl;
    //             cout << "Beep" << endl;
    //         }
    //         else
    //         {
    //             cout << i << endl;
    //         }
    //     }

        // SWAP THE NUMBERS PROGRAM:-
        int x, y, temp;
        cout << "enter the num 1:" << endl;
        cin >> x;
        cout << "enter the num 2 :" << endl;
        cin >> y;

        cout << "value of num1:" << x << endl;
        cout << "value of num2:" << y << endl;

        temp = x;
        x = y;
        y = temp;

        cout << "x is " << x << endl;
        cout << "y is " << y << endl;

        return 0;
    }
