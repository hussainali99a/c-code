#include<iostream>
using namespace std;
class node
{   
    public:
    int val;
    node *next;
    node(int data){
        val = data;
        next = NULL;
    }
}; 
class linkedlist{
    public:
    node* head;
    linkedlist(){
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

bool checkequallinkedlist(node* head1,node* head2){
    node* ptr1 = head1;
    node* ptr2 = head2;
    while(ptr1!=NULL&&ptr2!=NULL){
        if(ptr1->val!=ptr2->val){
            return false;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        //at this point either ptr1 is null or pt2 is null

    }
    return (ptr1==NULL && ptr2==NULL);

}
int main()
{
 
    linkedlist ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);


    linkedlist ll2;
    ll2.insert(1);
    ll2.insert(2);
    ll2.insert(3);
    


    cout<<endl;
    ll1.display();
    cout<<endl;

    ll2.display();
    cout<<endl;
    cout<<checkequallinkedlist(ll1.head,ll2.head)<<endl;
    return 0;
}