//given the head of a singly linked list and print the reversed list.
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

void reverseprint(node* head){
    //base condition
    if(head==NULL){
        return;
    }
    //recursive case
    reverseprint(head->next);
    cout<<head->val<<" ";
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
    reverseprint(l1.head);

    return 0;
}