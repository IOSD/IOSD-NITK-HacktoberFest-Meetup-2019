#include<stdio.h>
main()
{
	int i,max,n;
	printf("enter the total number = ");
	scanf("%d",&n);
	int num[n];
	for(i=0;i<n;++i)
	{
		scanf("%d",&num[i]);
	}
    max=num[0];
	for(i=1;i<n;++i)
	{
		if(num[i]>max)
		max=num[i];
	}
	printf("%d is max",max);
}
