#include<iostream>
#include<vector>
using namespace std;
void sortedSquaredArray(vector<int>&v){
    vector<int> ans;
    int left_ptr=0;
    int right_ptr = v.size()-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ans.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }

    }
    
    for(int i = ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }cout<<endl;

}
int main(){
    //  max absolute value we will find at first or end vecause array is sorted.
int n ;
cin>>n;
vector<int> v;
for(int i =0;i<n;i++){
    int ele;cin>>ele;
    v.push_back(ele);
}  
sortedSquaredArray(v);

  

    return 0;
}