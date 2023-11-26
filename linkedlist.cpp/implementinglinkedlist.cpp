#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* next;
};
node *A = NULL;




int main(){
    // node *temp = new struct node();
  node *temp = (struct node*)malloc(sizeof(struct node));
  temp->data = 2;
  temp->next = NULL;
  A = temp;
  temp = new struct node();
  temp->data = 4;
  temp->next = NULL;
//   traversal of list
  node *temp1 = A;
  while(temp1->next != NULL){
    temp1 = temp1->next;
  }
  temp1->next = temp;
  temp = new struct node();
  temp->data = 6;
  temp->next = NULL;
  node *temp2 = A;
  while(temp2->next!=NULL){
    temp2 = temp->next;
  }
  temp2->next = temp;


    return 0;
} 