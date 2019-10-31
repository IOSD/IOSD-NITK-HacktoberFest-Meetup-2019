#include <stdio.h>
int a[5];
int top=-1;
void push(int x)
{
	if(top==4)
	{
		printf("Overflow codition");
	}
	else
	{
		a[++top]=x;
	}
}
void pop()
{   if(top==-1)
    printf("Pop can't be done due to underflow condition");
    else
	top--;
}
void printstack()
{
	int i;
	for(i=0;i<5;i++)
	printf("%d\n",a[i]);
}
int main()
{   
	push(3);
	push(5);
	push(7);
	pop();
	push(2);
	push(8);
	push(3);printstack();
}
