#include<stdio.h>
#include<stdlib.h>
#define max 5
void add();
void delet();
void disply();
int q[max],front =-1,rear=-1,i=0,item;
int main()
{
	int choice;
	do
	{
		printf("enter the choice");
		scanf("%d",&choice);
    switch(choice)
    {
       case 1:
    	{
    		add();
    		break;
		}
		case 2:
		{
			delet();
			break;
		}
		case 3:
		{
			disply();
			break;
		}
		case 4:
		{
			exit(0);
			break;
		}
		default:
		{
			printf("\nenter the correct choice\n");
		}
   }
   }
   while(choice!=4); 	
   return 0;
}
void add()
{
	if(rear>=max-1)
	{
		printf("Overflow!\n");
	}
	else
	{
		printf("enter the data\n");
		scanf("%d",&item);
		rear++;
		q[rear]=item;
	}
	if(front==-1)
	{
		front++;
	}
}
void delet()
{
	item=q[front];
	if(front==-1)
	{
		printf("underflow\n");
	}
	else if(front==rear)
		front=rear=-1;
	else{
		front++;
		printf("deleted item from queue is %d\n",item);
	}
}
void disply()
{
	if(rear>=0)
	{
		printf("the elements in queue are\n");
		for(int i=0;i<=rear;i++)
		{
		printf("%d ",q[i]);
		}
		printf("press next choice\n");	
	}
	else
	{
		printf("the queue is empty\n");
	}	
}
