//given the head of a linked list , delete every alternate element from the list starting from the second element
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
            temp=temp->next;
        }
        temp->next = new_node;
    }
    void display(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

void DeleteAlternateNodes(node* &head){
    node* curr_node = head;
    while(curr_node!=NULL&&curr_node->next!=NULL){
        node* temp = curr_node->next;
        curr_node->next = curr_node->next->next;
        free(temp);
        curr_node=curr_node->next;
    }
}
int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    l1.display();
    DeleteAlternateNodes(l1.head);
    l1.display();

    return 0;
}