#include<stdio.h>

int main(){
	
	int a[5]={2,22,433,100,122};
	int largest=a[0],i;
	
	
	for(i=1;i<=4;i++)
	{
		if(a[i]>largest)
		{	largest=a[i];
		}
		
	}
	printf("largest element is %d",largest);
	
return 1;	
}
