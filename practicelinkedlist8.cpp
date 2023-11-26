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
int getlen(node* head){
    node* temp = head;
    int length = 0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }
    return length;

}
node*  moveHeadbyk(node* head,int k){
    node* ptr= head;
    while(k--){
        ptr = ptr->next;
    }
    return ptr;
}
node* getIntersection(node* head1,node* head2){
    //step 1:calculating length of both linked list
    int l1 = getlen(head1);
    int l2 = getlen(head2);
    //step 2 :find difference k btw linked list and move longer linked list pointer by k steps
    node* ptr1;
    node* ptr2;
    if(l1>l2){//ll1 is longer
        int k = l1-l2;
        ptr1 = moveHeadbyk(head1,k);
        ptr2 = head2;
    }
    else{//ll2 is longer
        int k = l2-l1;
        ptr1 =  head1;
        ptr2 = moveHeadbyk(head2,k);

    }
    //step 3: compare ptr1 and ptr2 nodes
    while(ptr1){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return NULL;
   

}
int main(){
    linkedlist ll1;
    ll1.insert(1);
    ll1.insert(2);
    ll1.insert(3);
    ll1.insert(4);
    ll1.insert(5);
    ll1.display();
    cout<<endl;
    // 1->2->3->4->5->NULL
    
    linkedlist ll2;
    ll2.insert(6);
    ll2.insert(7);
    ll2.head->next->next = ll1.head->next->next->next;
    ll2.display();
    cout<<endl;
    //6->7->4->5;
    node* Intersection = getIntersection(ll1.head,ll2.head);
     if(Intersection){
        cout<<Intersection->val<<endl;
     }
     else{
        cout<<"-1"<<endl;
     }

    return 0;
}