#include<stdio.h>

int main(){
int m=0;
int j=1;
int i,n,k;

while(1)
{m=0;
j=1;
printf("\nenter :");
	scanf("%d",&n);
	printf("\n");

if(n==1)
{printf("%d",j);}
else
{	k=m+j;
	for (i=0;i<n;i++)
	{
		printf("%d--",k);
		k=m+j;
		m=j;
		j=k;
	}

}
}
return 1;

}

