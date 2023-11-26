#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int data){
        val = data;
        next =NULL;
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
node* reverseK(node* &head,int k){
    node* prevptr = NULL;
    node* currptr = head;
    int counter = 0;// counting first k nodes
    while(currptr!=NULL&&counter<k){//reversing first k nodes
        node* nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }
    //currptr will give us k+1th node
    if(currptr!=NULL){
    node* new_head=reverseK(currptr,k);
    head->next = new_head;
    }
    return prevptr;//prevptr will give the new-HEAD OF CONNECTED LINKED LIST

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
    cout << endl;
    l1.head=reverseK(l1.head,3);
    l1.display();

    return 0;
}