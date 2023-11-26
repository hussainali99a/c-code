// //binary search  program
// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int left, int right, int search)
// {
//     while (left <= right)
//     {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == search)
//         {
//             return mid;
//         }
//         else if (arr[mid] < search)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }

//     return -1;
// }

// int main()
// {
//     int n, search;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of the array in sorted order: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "Enter the element to be searched: ";
//     cin >> search;
//     int index = binarySearch(arr, 0, n - 1, search);
//     if (index == -1)
//     {
//         cout << search << " not found in the array" << endl;
//     }
//     else
//     {
//         cout << search << " found at index " << index << endl;
//     }
//     return 0;
// }

// insertion sort :-

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i, j, key;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements: ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }

//     cout << "Sorted array in ascending order: ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// selection sort:-

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i, j, min_idx;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements: ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     for (i = 0; i < n - 1; i++)
//     {
//         min_idx = i;
//         for (j = i + 1; j < n; j++)
//         {
//             if (arr[j] < arr[min_idx])
//             {
//                 min_idx = j;
//             }
//         }
//         int temp = arr[min_idx];
//         arr[min_idx] = arr[i];
//         arr[i] = temp;
//     }

//     cout << "Sorted array in ascending order: ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// quick sort:-

// #include <iostream>
// using namespace std;
// void swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }
// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high];
//     int i = (low - 1);
//     for (int j = low; j <= high - 1; j++)
//     {
//         if (arr[j] <= pivot)
//         {
//             i++;
//             swap(&arr[i], &arr[j]);
//         }
//     }
//     swap(&arr[i + 1], &arr[high]);
//     return (i + 1);
// }
// void quicksort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int pi = partition(arr, low, high);
//         quicksort(arr, low, pi - 1);
//         quicksort(arr, pi + 1, high);
//     }
// }
// int main()
// {
//     int n, i;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements: ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     quicksort(arr, 0, n - 1);
//     cout << "Sorted array in ascending order: ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


//merge sort algorithm:-

// #include <iostream>
// using namespace std;

// void merge(int arr[], int l, int m, int r)
// {
//     int i, j, k;
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     int L[n1], R[n2];
//     for (i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];
//     i = 0;
//     j = 0;
//     k = l;
//     while (i < n1 && j < n2)
//     {
//         if (L[i] <= R[j])
//         {
//             arr[k] = L[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < n1)
//     {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }
//     while (j < n2)
//     {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergesort(int arr[], int l, int r)
// {
//     if (l < r)
//     {
//         int m = l + (r - l) / 2;
//         mergesort(arr, l, m);
//         mergesort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

// int main()
// {
//     int n, i;
//     cout << "Enter the number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements: ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     mergesort(arr, 0, n - 1);
//     cout << "Sorted array in ascending order: ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


#include<iostream>
using namespace std;
int main(){
    int n,arr[n] ;

    cout<<"enter the number of elements in array: ";
    cin>>n;
    cout<<"enter the elements of array: "<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int search ;
    cout<<"enter the element to be searched: ";
    cin>>search;
    for(int i = 0;i<n;i++){
        if(arr[i]==search){
            cout<<search<<"found at"<<endl;
        }
    }
    

    return 0;
}
