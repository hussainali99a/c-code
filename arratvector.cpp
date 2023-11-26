#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vectors:- vectors are dynamic arrays .
    // dynamic array means we can resize it when we want to insert or delete element
    //  contiguous memory allocation

    // BASIC OPERATION IN VECTORS:-
    // 1.declaration
    // first we have to include a header file <vector>
    // syntax:-vector<datatype> vector_name;
    // we can also give size if we want 
    // vector<datatype> vector_name(size)
    // 2. size :
    // v.size --> length
    // 3. resize
    // v.resize(new size)
    // 4. cpacity 
    // v.capacity() give the space in the memory allocated to vector
    // imp = capacity>=size
    // capcity accordingly increases 
    // capcity increases in power of 2 
    // capcity increasing when we adding element in vectors
    // also dependent in compiler
    
    // 5.add element:-
    // v.pushback(element)
    // end element of vector ke baad ye element add karde
    // suppose my v is 1 2 3 4 5
    // now i do v.pushback(6)
    // result will be 1 2 3 4 5 6


    //  v.insert(pos,element)  it is used to element at particular position
    // pos is related to start position ,or position of first element
    // pos of first element can find through v.begin()

    // v.insert(v.begin()+2,5)
    // v.begin is used to identify first pos and we plus 2 to insert elment at 2 pos


    // 6.delete:
    // v.pop_back() last element will be removed 
    //at any specified pos
    // v.erase(position)
    // pos related ro first postion or end pos of vector
    // v.end()-2 to delete second last element 
    // vector = 2 3 4 5
    // vector.erase(v.end()-2)
    // vector will be 2 3 5  4 is deleted
// ---------------------------------------------------------------------------------------------


    vector<int> v;
    cout<<"size"<<v.size()<<endl;
    cout<<"capacity"<<v.capacity()<<endl;
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