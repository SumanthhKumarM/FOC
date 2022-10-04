#include <stdio.h>
int main()
{
	int num,sum=0,n;
	float avg;
	printf ("enter term of n number: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("number %d: ",i);
		scanf("%d", &num);
		sum= sum+num;
	}
	avg=sum/n;
	printf("\n the sum of n numbers: %d",sum);
	printf("\n the average of n numbers: %.2f\n",avg);
	return 0;
}
