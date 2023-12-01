/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[10] , n , key , j;
    cout<<"enter the size:"<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your inserted array is "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    for(int i = 1;i<n;i++){
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout<<endl;
    cout<<"sorted array is:"<<endl;
    
    for(int s = 0;s<n;s++){
        cout<<arr[s]<<" ";
    }
    
    
    return 0;
}
