// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i = 0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int j = 0;j<n;j++){
//         if(arr[j]==42){
//             break;
//         }
//         else{
//             cout<<arr[j]<<endl;
//         }
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i, r, k;
//     cin >> i >> r >> k;
//     int count = 0;
//     for (int j = i; j <= r; j++)
//     {
//         if (j % k == 0)
//         {
//             count = count + 1;
//         }
//     }
//     cout << count;
//     return 0;
// }
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     cin>>s;
//     int len = s.length();
//     for(int i = len;i>0;i--){
//         if(s[i]<='a' && s[i]<='z'){
//             cout<<s[i];
//         }
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int l,n,w,h;
//     cin>>l>>n;
//     for(int i = 1;i<=n;i++){
//         cin>>w>>h;
    
//     if(w<l||h<l){
//         cout<<"UPLOAD ANOTHER";
//     }
//     else if(w==h){
//         cout<<"ACCEPTED";
//     }
//     else{
//         cout<<"CROP IT";
//     }
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int n, m;
    int arr[n][m];
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> m;
        cin >> arr[n][m];
    }
    for(int i = 1;i<=t;i++){
        cout<<arr[n][m]<<" ";
    }
    return 0;
}