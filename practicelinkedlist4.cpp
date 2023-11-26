//given the head of a singly linked list,reverse the list and return the reversed list
#include<iostream>
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
class LinkedList
{
public:
    node *head;
    LinkedList()
    {
        head = NULL;
    }
    void insert(int val)
    {
        node *new_node = new node(val);
        if (head == NULL)
        {
            head = new_node;
            return;
        }
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << "NULL";
    }
};
node* reverselinkedlist(node* &head){
    node* prev = NULL;
    node* current = head;
   
    //current->next = prev;
    //move all 3 ptrs by one step ahead
    while(current!=NULL){
        node *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    //when this loop ends,prev pointer will be pointing to last node which is new head
    node* new_head = prev;
    return new_head;
}
int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.display();
    cout<<endl;
    l1.head=reverselinkedlist(l1.head);
    l1.display();
    return 0;
}