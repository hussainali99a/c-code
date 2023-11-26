// #include<iostream>
// using namespace std;
// int main(){
//     int ages[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cin >> ages[i];
//     }
//     // your code goes here
//     double min = ages[0];
//     for (int i = 0; i < 5; i++)
//     {
//         if (ages[i] < min)
//         {
//             min = ages[i];
//         }
//     }
//     double dis;
//     dis = 50 - (50*min/100);
//     cout<<dis;
//     // cout<<min;
// return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    // basic problem solving in array:-
    //  pattern :target sum
    int arr[5] = {3, 4, 6, 7, 1};
    int count = 0;
    int target_sum;
    int first = arr[0];
    cout << "enter the target sum" << endl;
    cin >> target_sum;
    for (int i = 1; i < 5; i++)
    {
        for (int j = i = 1; j < 5; j++)
            if (arr[j] + arr[i] == target_sum)
            {
                count++;
            }
    }
    cout << count << endl;
    return 0;
}