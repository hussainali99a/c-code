#include<iostream>
using namespace std;
struct node{
    int info;
    struct node *link;
};
struct node *start;
int main(){
    int item ,n;
    cout<<"enter the number of nodes to be inserted in  a link list: "<<endl;
    cin>>n;
    cout<<"enter the item to be inserted in a list(l1):"<<endl;
    cin>>item;
    struct node *ptr,*fnnode;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        cout<<"empty";
    }
    else{
    ptr->info = item;
    ptr->link = start;
    start = ptr;

    for(int i = 2;i<=n;i++){
        fnnode = (struct node*)malloc(sizeof(struct node));
        if(fnnode==NULL){
            cout<<"empty";
            break;
        }
        else{
            cout<<"enter the item to be inserted in a list(l1) :"<<endl;
            cin>>item;
            fnnode->info = item;
            fnnode->link = NULL;
            ptr->link = fnnode;
            ptr = ptr->link;

        }
    }
}
    struct node *temp;
    if(ptr == NULL){
        cout<<"no data found"<<endl;
    }
    else{
        temp = ptr;
        while(ptr!=NULL){
            cout<<ptr->info<<" ";
            ptr = ptr->link;
        }
    }
    
    return 0;
}