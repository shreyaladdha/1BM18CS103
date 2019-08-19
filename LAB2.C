#include<stdio.h>
#include<conio.h>
#define size 5
void push(int stack[],int *top)
{       int item=0;
	if(*top==size)
	printf("Stack overfull\n");
	else
	{
		printf("enter the value\n");
		scanf("%d",&item);
		(*top)++;
		stack[*top]=item;
	}
}
void pop(int stack[],int *top)
{
	if(*top==-1)
	printf("Stack underflow\n");
	else
	{
		printf("The item popped is: %d\n",stack[*top]);
		(*top)--;
	}
}
void disp(int stack[],int *top)
{
	int i;
	if(*top==-1)
	printf("stack empty");
	else
	{
	printf("stack is:\n");
	for(i=(*top);i>=0;i--)
	printf("%d\n",stack[i]);
	}
}
void main()
{
	int a;
	int stack[25], top=-1;
	clrscr();
	while(1)
	{
	printf("1.PUSH\n");
	printf("2.POP\n");
	printf("3.DISPLAY\n");
	printf("4.EXIT\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		{
			push(stack,&top);
			break;
		}
		case 2:
		{
			pop( stack,& top);
			break;
		}
		case 3:
		{
			disp(stack,&top);
			break;
		}

		case 4:
		{
			exit();
			break;
		}
		default:
		{
		printf("wrong choice");
		break;
		}
	}
	}
getch();
}



