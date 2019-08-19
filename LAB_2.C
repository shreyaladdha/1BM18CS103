#include<stdio.h>
#include<conio.h>
#include<process.h>
#define size 5

int top=-1,stack[size];
void push();
void pop();
void disp();

void push()
 {
	int item;
	if(top==size)
	{
		printf("stack overfull.\n");
	}
	else
	{
		printf("enter the value.\n");
		scanf("%d",&item);
		top--;
		stack[top]=item;
	}
 }
 void pop()
 {
	if(top==-1)
	printf("\nstack is empty");
	else
	{
		printf("\n deleted element is %d\n",stack[top]);
		top--;
	}
 }
 void disp()
 {
	int i;
	if(top==-1)
	printf("\nstack is empty");
	else
	{
		printf("stack:\n");
		for(i=top;i>=0;i--)
		printf("%d\n",stack[i]);

	}
 }
 void main()
{
	int n;
	clrscr();
	while(1)
	{
		printf("1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:disp();
				break;
			case 4:exit(0);
			default:printf("wrong choice");
		}
	}
	getch();
}

