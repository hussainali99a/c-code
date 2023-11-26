#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int data)
    {
        val = data;
        next = NULL;
    }
};

void InsertAtHead(node* &head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}
void InsertAtEnd(node* &head,int val){
    node* new_node = new node(val);
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    //temp has reached last node;
    temp->next = new_node;


}
void InsertAtPosition(node* &head,int val,int pos){
    if(pos==0){
        InsertAtHead(head,val);
        return;
    }
    node* new_node = new node(val);
    node* temp = head;
    int cur_pos= 0;
    while(cur_pos!=pos-1){
        temp=temp->next;
        cur_pos++;
    }

    //temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void Update(node* &head,int k,int val){
    node* temp = head;
    int curr_pos = 0;
    while(curr_pos!=k){
        temp=temp->next;
        curr_pos++;
    }
    //temp will be pointing to kth node
    temp->val=val;
}
void DeleteAtHead(node* &head){
    node* temp = head;//node to be deleted
    head = head->next;
    free(temp);//free up the space;
}
void DeleteAtEnd(node* &head){
    node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last=second_last->next;
    }
    //now second  last point to second last node
    node* temp=second_last->next; // node to be deleted
    second_last->next=NULL;
    free(temp);
}
void DeleteAtPosition(node* head,int pos){
    if(pos==0){
        DeleteAtHead(head);
        return;
    }
    int curr_pos=0;
    node* prev = head;
    while(curr_pos!=pos-1){
        prev = prev->next;
        curr_pos++;
    }
    // prev is pointing to node at pos-1
    node* temp = prev->next; //node to be deleted
    prev->next = prev->next->next;
    free(temp);

}
int main()
{
    // node* n = new node(1);
    // cout<<n->val<<" "<<n->next<<endl;
    node *head = NULL;
    InsertAtHead(head, 2);
    display(head);
    InsertAtHead(head, 1);
    display(head);
    InsertAtEnd(head,3);
    display(head);
    InsertAtPosition(head,4,1);
    display(head);
    Update(head,2,5);
    display(head);
    // DeleteAtHead(head);
    // display(head);
    // DeleteAtEnd(head);
    // display(head);
    DeleteAtPosition(head,1);
    display(head);
    return 0;
}