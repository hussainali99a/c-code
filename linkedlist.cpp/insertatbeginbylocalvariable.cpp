// head as global variable
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

node*  Insert(node* head,int x)
{
    node *temp = (node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    // head = temp;
    // if(head !=NULL){
    //     temp->next = head;
    head = temp;
    return head;
    // }
}
void print(node* head)
{
  
    cout << "list is:  ";
    while (head != NULL)
    {
        cout << head->data;
        head = head->next;
    }
    cout << endl;
}
int main()
{

    node* head = NULL; // empty list;
    int n, x;
    cout << "how many numbers?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "enter the number" << endl;
        cin >> x;
        head = Insert(head,x);
        print(head);
    }

    return 0;
}