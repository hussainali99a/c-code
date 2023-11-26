//given the head of a sorted linked list delete all duplicates such that each element appears only once.
//return the linked list sorted as well
#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;

    node(int data){
        val = data;
        next = NULL;
    }
};
class LinkedList{
    public:
    node* head;
    LinkedList(){
        head = NULL;
    }
    void insert(int val){
        node* new_node = new node(val);
        if(head==NULL){
            head = new_node;
            return;
        }
        node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }
};

void deleleduplicatenodes(node* &head){
    node* curr_node = head;
    while(curr_node!=NULL){
        while(curr_node->next!=NULL&&curr_node->val==curr_node->next->val){
            //delete curr->next
            node* temp = curr_node->next;//node to be deleted
            curr_node->next = curr_node->next->next;
            free(temp);
        }
        //this loop end when cuurnt node and next values are different 
        //or linked list ends
        curr_node = curr_node->next;
    }
}
int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(2);
    l1.insert(3);
    l1.insert(3);
    l1.insert(3);
    l1.insert(4);
    l1.display();
    cout<<endl;
    deleleduplicatenodes(l1.head);
    l1.display();

    return 0;
} 