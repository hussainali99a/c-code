#include<iostream>
using namespace std;
struct node{
    struct node *prev;
    int info;
    struct node *next;
};
struct node *start = NULL;
int main(){
    struct node *temp;
    int n;
    cout<<"enter the no.of nodes you want to enter in doubly linkeg list:"<<endl;
    cin>>n;
    
    int item;
    cout<<"enter the element for node 1:"<<endl;
    cin>>item;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->info = item;
    temp->next = NULL;
    
    start = temp;
    

    for(int i = 2;i<=n;i++){
        cout<<"enter the element of node "<<i<<endl;
        cin>>item;
        struct node *lnode ,*p;
        lnode = (struct node*)malloc(sizeof(struct node));
        lnode->info = item;
        lnode->next = NULL;
        p->next = lnode;
        lnode->prev = p;
       
    }

    struct node *p;
    if(start ==NULL){
        cout<<"list is empty";
        
    }
    
    p=start;
    while(p!=NULL){
        cout<<p->info;
        p = p->next;
    }
    

    return  0;
}