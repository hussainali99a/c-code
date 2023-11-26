#include <stdio.h>
#include<stdlib.h>
#define SIZE 4
int top = -1;
int inp_array[SIZE];
int choice;

void push();
void pop();
void show();


int main ()
{
 
  while (1)
    {
     
      printf("operation on stack:\n");
      printf("\n1.push\n2.pop\n3.show\n4.end\n");
      printf("enter the choice:\n");
      scanf("%d", &choice);
      switch(choice)
      {
   case 1:
       push();
       break;
   case 2:
       pop();
       break;
   case 3:
       show();
       break;
   case 4:
       exit (0);
   default:
       printf ("invalid option");
  }

    }
   
}


void push()
{
   
  if(top ==  SIZE-1)
  {
      printf ("overflow!!");
    }
  else
    {
    int item;
    printf("enter element\n");
    scanf("%d",&item);
    top = top + 1;
     
    inp_array[top] = item;
     printf ("item added successfully");
    }

}

void pop()
{
   
  if(top==-1){
      printf("underflow!!\n");
    }
  else
    {

      //item = inp_array[top];
      top = top - 1;
      printf("deleted successfully");
    }
}

void show()
{
   
    if(top ==-1){
        printf("no element");
    }
    else{
    for (int i = top; i >= 0; --i)
    {
        printf("%d\n",inp_array[i]);
    }
}
}