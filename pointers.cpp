/*POINTER:-Every variable is a memory location,
 which has its address defined.
That address can be accessed using the ampersand (&) operator
(also called the address-of operator),
 which denotes an address in memory.
 A pointer is a variable, with the address of another
 variable as its value.
In C++, pointers help make certain tasks easier to perform.
Other tasks, such as dynamic memory allocation,
 cannot be performed without using pointers.

All pointers share the same data type -
a long hexadecimal number that represents a memory address.
 pointer is a variable, and like any other variable,
  it must be declared before you can work with it.
  with astriek sign ;
  There are two operators for pointers:
Address-of operator (&): returns the memory address of its operand.
Contents-of (or dereference) operator (*): returns the value of the variable located at the address specified by its operand.

For example:
int var = 50;
    int  *p;
    p = &var;

    cout << var << endl;
    // Outputs 50 (the value of var)

    cout << p << endl;
    // Outputs 0x29fee8 (var's memory location)

    cout << *p << endl;
    /* Outputs 50 (the value of the variable
     stored in the pointer p) */


#include<iostream>
using namespace std;
int main(){
    int score = 5 ;
    int *scoreptr;
    scoreptr = &score;
    cout<<scoreptr<<endl;
    return 0;
}