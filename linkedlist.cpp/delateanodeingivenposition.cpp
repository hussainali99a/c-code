#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* head;//global variable
void Insert(int data){ 
    node* temp = new node();
    temp->data = data;
    node* p;
    p=head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = temp;
    temp->next = NULL;

}//insert at end of the list
void print(){
     struct node *temp = head;
     cout << "list is:  ";
     while (temp != NULL)
     {
        cout << temp->data;
        temp = temp->next;

     }
     cout << endl;
}//print all elements in the list
void Delete(int n ){//delete node at positin n
    struct node* temp1 = head;
    if(n==1){
        head = temp1->next;//head now points to second node
        free(temp1);
        return ;
    }
    for(int i =0;i<n-2;i++){
        temp1 = temp1->next;
        //temp1 points to n-1 node
    }
    struct node* temp2 = temp1->next;
    temp1->next = temp2->next;//(n+1)th node
    free(temp2);//delete node
}
int main(){
    head = NULL;
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); //list 2,4,6,5
    print();
    int n;
    cout<<"enter the position:"<<endl;
    cin>>n;
    Delete(n);
    print();
     return 0;
}