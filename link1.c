#include<stdlib.h>
#include<stdio.h>

struct node
{
  int data;
  struct node *next;
};
typedef struct node *Node;

Node getnode()
{
  Node x;
  x=(Node) malloc (sizeof(Node));
  if(x!=NULL)
    return x;
  else
    {
      printf("Memory is not allocated");
      exit(0);
    }
}

Node insert_front(Node first,int item)
{
  Node temp;
  temp=getnode();
  temp->data=item;
  temp->next=first;
  first=temp;
  return first;
}

Node insert_end(Node first,int item)
{
  Node temp,x;
  x=getnode();
  x->data=item;
  x->next=NULL;
  if(first==NULL)
     return x;
  temp=first;
  while(temp->next!=NULL)
     temp=temp->next;
  temp->next=x;
  return first;
}


void display(Node first)
{
  Node temp;
  if(first==NULL)
    {
      printf("list is empty\n");
    }
  else
    {
      temp=first;
      printf("Element in the list: ");
      while(temp!=NULL)
        {
          printf("%d ",temp->data);
          temp=temp->next;
         }
      printf("\n");
     }
}

int main()
{
  Node first=NULL;
  int a,value;
  while(1)
	{
		printf("1.insert at the front\n");
		printf("2.insert at end\n");
		printf("3.display\n");
		printf("4.exit\n");
		scanf("%d",&a);
   		switch(a)
       		{
         case 1: printf("Enter the element to be inserted: ");
                 scanf("%d",&value);
                 first=insert_front(first,value);
                 break;
         case 2: printf("Enter the element to be inserted: ");
                 scanf("%d",&value);
                 first=insert_end(first,value);
                 break;
         
         case 3: display(first);
                 break;
         case 4: exit(0);
         default: printf("Invalid choice\n");
       }
    }
  return 0;
}
