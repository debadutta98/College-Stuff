#include<stdio.h>
void main()
{
	int n=9;
	int i,j,k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j==i || j==(n+1-i))
			{
				printf("%d",k);
			}
			else {
				printf(" ");
			}
		}
		k++;
		printf("\n");
	}
}