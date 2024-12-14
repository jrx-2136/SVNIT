#include <stdio.h>

//PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE, NEGATIVE, AND ZERO ELEMENTS.

void main()
{
	int a[10],i,positive=0,negative=0,zero=0;
	for(i=0;i<10;i++)
	{
		printf("enter the value\n");
		scanf("%d",&a[i]);
        if(a[i]<0)
        {
        	negative+=1;
		}
		else if(a[i]==0)
		{
			zero=zero+=1;
		}
		else
		{
			positive+=1;
		}
    }
    printf("no. of negative elements are %d\n",negative);
    printf("no. of zero elements are %d\n",zero);
    printf("no. of positive elements are %d\n",positive);
}
