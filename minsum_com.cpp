#include<iostream>
using namespace std;
int main(){
    int a[] = {39,33,54,51,70,80};
    int b[] = {10,20,30,40,50,60};
    int min_a = a[0];
    int min_b = b[0];
    for(int i = 0;i<6;i++){
        if(a[i]<min_a){
            min_a = a[i];
        }
        else if(b[i]<min_b){
            min_b = b[i];
        }
    }
    int sum = min_a + min_b;
    cout<<sum;
    return 0;
}