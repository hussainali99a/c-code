//head as global variable
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head;
void Insert(int x){
    node* temp = (node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    // head = temp;
    // if(head !=NULL){
    //     temp->next = head;
        head = temp;
    // }
}
void print(){
    struct node* temp=head;
    cout<<"list is:  ";
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
    cout<<endl; 
}
int main(){
   
    head = NULL;//empty list;
    int n,x;
    cout<<"how many numbers?"<<endl;
    cin>>n;
    for(int i = 0;i<n;i++){
        cout<<"enter the number"<<endl;
        cin>>x;
        Insert(x);
        print();
    }


    return 0;
}