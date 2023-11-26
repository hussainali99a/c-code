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
class linkedlist
{
public:
    node *head;
    linkedlist()
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
// assuming k is always less than length of linked list
void removekthnodefromend(node* &head,int k){
    node* ptr1=head;
    node* ptr2=head;

    //move ptr2 by k steps ahead
    int count = k;
    while(count--){
        ptr2 = ptr2->next;
    }
    if(ptr2==NULL){// k is equal to length of linked list
    // we have to delte head node
    node* temp = head;
    head = temp->next;
    free(temp);
    return;
    }
    // ptr2 k steps ahead of ptr1

    // ptr2  is at null ,ptr1 will be at node to be deleted 
    while(ptr2->next!=NULL){
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    //ptr1 pointing before kth node from end
    node* temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);

}
int main(){
    linkedlist ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.insert(6);
    ll1.display();
    cout<<endl;
    removekthnodefromend(ll1.head,5);
    ll1.display();
    cout << endl;
    return 0;
}