#include<iostream>
#include<vector>
using namespace std;
int main(){
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

    vector<int> v;
    cout << "size" << v.size() << endl;
    cout << "capacity" << v.capacity() << endl;
    v.push_back(1);

    cout << "size" << v.size() << endl;
    cout << "capacity" << v.capacity() << endl;
    v.push_back(2);

    cout << "size" << v.size() << endl;
    cout << "capacity" << v.capacity() << endl;
    v.push_back(3);

    cout << "size" << v.size() << endl;
    cout << "capacity" << v.capacity() << endl;
    v.push_back(4);

    v.resize(5);
    cout << "size" << v.size() << endl;
    cout << "capacity" << v.capacity() << endl;

    v.resize(10);
    cout << "size" << v.size() << endl;
    cout << "capacity" << v.capacity() << endl;

    v.pop_back();
    v.pop_back();

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    return 0;
}

