#include<stdio.h>
#include<math.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=0;j<abs(3-i);j++)
		{
			printf(" ");
		}
		for(int k=0;k<5-2*abs(i-3);k++)
		{
			printf("*");
		}
		if(i!=5)
		printf("\n");
	}
	return 0;
}
