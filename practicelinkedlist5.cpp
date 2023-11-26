//reversing linked list by recursion
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
    if(head==NULL||head->next==NULL){
        return head;
    }

    //recursive case
    node* new_head=reverselinkedlist(head->next);
    head->next->next = head;
    head->next = NULL; //head is now pointing to last node in reverse list
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
    cout << endl;
    l1.head = reverselinkedlist(l1.head);
    l1.display(); 
    return 0;
}