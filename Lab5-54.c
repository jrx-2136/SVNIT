#include <stdio.h>

//PROGRAM TO RED AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS

void main()
{
	int a[10],sum=0,i;
	for(i=0;i<10;i++)
	{
		printf("enter the value\n");
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("sum=%d",sum);
}
