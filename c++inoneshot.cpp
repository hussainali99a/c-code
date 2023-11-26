#include<iostream>
 // starting any program with hashtag we call the pre processor directives
// # include is telling our pre processor to include iostream file 
//  iostream file is header file it is pre written code that is header file enables to use basic input output functions.
using namespace std;
// to use standard form of input output 
int main(){ 
    // int main is function , function  is nothing , its a block of code performing specific task .
    //   int main is starting point of any c++ program .
//  code is writtten inside it only

    // cout<<"hello world"<<endl;
    // to print any thing use cout , with insertion operator.
    // printf("my name is mustafa qasim ali\n");
    //  printf is also used to print output
    //  followed by two slashes are comment .

//  varibles:-
/* variables are container which store data.
variables are named storage that contains some value this value can be varied can be changed 
variables have some unique name to identify it .
while declaring variables we also have to describe it data type for example int , char , float .
identifiers are name given to package method and variables 

BASIC MEMORY UNITS:-
1. bit :- most basic / smallest unit of data that a  computer can store or process 
two types of bit that is 0 and 1 .
everything is converted in 0 and 1 for examples we have to stored mustafa qasim ali so it is stored in 0 and 1 .
0 represent current is not flowing in circuit while 1 represent circuit is fllowing or
0 represent passive signal and 1 represent active signal


2. byte :- 1 byte = 8bits
3. kilo bytes :- 1 kilobyte = 1024 bytes
4. megabytes = 1 megabyte = 1024 kilobytes
5.gegabyte :- 1 gegabyte = 1024 megabytes




DATATYPES IN C++:-
tells the type of data stored in variable .
how much memory will be use by the variables
what is the range of values that can be  put in variable 

3 types of data types 
1.primary :- primary data types are built in data type .
2. derived :- derived from primary data types 
3. user defined :- define by the user


PRIMARY DATATYPES :- 
1. int datatype :- to store  integer  data types , store four bytes means 32 bits .
 range :- -@^31 to (2^32)- 1  for postive 
(2^31)-1 for negative first bit go to tell whether it is +ve or -ve .

2. character datatype:- to store character 
char sign:- 'a'
use one single byte in memory 

3. boolean datatype:- to store two value  true or false 

4. float :- to store decimal numbers . 
float r :- 6.78;
uses four bytes of memory 
it also have precision upto 7 decimal places 

more than 7 precision value use double 
precision value become 15 and use 8 bytes .



 */

// int apples = 5;
// float r = 6.88;
// char car = 'a';
// cout<<apples<<endl;
// cout<<sizeof(apples)<<endl;
// cout<<car<<endl;
// cout<<sizeof(car)<<endl;

//  use cin to take input from user 
// cin with extraction operator 
// part of iostream header file.

// int apples ;
// cin>>apples ;
// cout<<"my name is mustafa qasim ali . currently i am pursuing b-tech from sagar institute of science and technology."<<endl;


// int x , y ;
// cout<<"enter the num 1:"<<endl;
// cin>>x;
// cout << "enter the num 2:" << endl;
// cin >> y;

// cout<<"the sum of two number is:"<<x+y<<endl;


// OPERATOR IN C++

// using post increement operator 
// int a = 8;
// cout<<a+1<<endl;

// a++;
// ++a;


// cout<<a+1;

// int a =  4 , b = 2;

// cout<<"sum:"<<a+b<<endl; //6
// cout<<"difference:"<<a-b<<endl;// 2
// cout<<"product:"<<a*b<<endl;// 8
// cout<<"division:"<<a/b<<endl;// 2
// cout<<"remainder:"<<a%b<<endl;// 0


// cout<<" using post increment and decreement:"<<endl;

// cout<<"post increement:"<<a++<<endl; // 4
// cout<<"post decreement:"<<a--<<endl; //5
// cout<<"pre increment:"<<++a<<endl;//5
// cout<<"pre decreement:"<<--a<<endl;//3


// note :- in post increement it first print the original value of variable that is assign to it 
//  in pre increement it first add one than print value;
// same in decreement also
// cout<<a++;


// int a = 5 , b = 7;
//  cout<<(a>b)<<endl;
//  cout<<(a<b)<<endl;
//  cout<<(a==b)<<endl;
//  cout<<(a!=b)<<endl;
 
// int a = 13;
// cout<<a+5<<endl;; count till 13 than add 5 ;
// cout<<(a+=5)<<endl; it will count 5 from 13;


// CODITION STATEMENT :- 

// int score;
// cout<<"enter your score"<<endl;
// cin>>score;


// if (score>80&&score<=100)
// {
//     /* code */cout<<"well done ";
// }
// else if (score>50&&score<=80)
// {
//     /* code */cout<<"you passed";
// }
// // else{
// //     cout<<"poor performance you have to work hard";
// // }

// // int cp , sp , profit , loss ;

// // cout<<"enter the cost price:"<<endl;
// // cin>>cp;
// // cout << "enter the selling  price:" << endl;
// // cin >> sp;

// // if (cp>sp)
// // {
// //     /* code */ loss = cp - sp ;
// //     cout<<"you are in loss"<<endl<<loss;
// // }
// // else{
// //     profit = sp - cp ;
// //     cout<<"you are in profit:"<<endl<<profit;
// // }


// int x , y , z ;
// cout<<"enter the num1:"<<endl;
// cin>>x;
// cout << "enter the num2:" << endl;
// cin >> y;
// cout << "enter the num3:" << endl;
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

//  NESTED IF-ELSE:-

int x , y , z;
cout<<"enter the num1:"<<endl;
cin>>x;
cout << "enter the num2:" << endl;
cin >> y;
cout << "enter the num3:" << endl;
cin >> z;



    if (x>y)
    {
        /* code */if(x>z){
            cout<<"num1 is greater ";
        }
        else{
            cout<<"num 3 is greater";
        }
    }
    else{
        if(y>z){
            cout<<"num 2 is greater";
        }
        else{
            cout<<"num3 is greater";
        }
    }

    // // ASCII :- american standard code for information interchange;
    //     A char variable holds a 1 - byte integer.However, instead of interpreting the value of the char as an integer, the value of a char variable is typically interpreted as an ASCII character.
    // A character is enclosed between single quotes(such as 'a', 'b', etc)
    //  ARRAY:-An array is used to store a collection of data, but it may be useful to think of an array as a collection of variables that are all of the same type. //    .
    // int a[5];
    // int a[5]={11,45,67,89,90,19};
    // The number of values between braces { } must not exceed the number of the elements declared within the square brackets [ ].
    // If you omit the size of the array, an array just big enough to hold the initialization is created
    // example :- int b[] = {11, 45, 62, 70, 88};
    // Each element, or member, of the array has an index, which pinpoints the element's specific position.
    return 0; // telling programm to end .
}