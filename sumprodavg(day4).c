#include<stdio.h>
#include<stdlib.h>
int main( int beren, char ** luthien)
{
	int i=0;
	double n=0;
	double sum=0;
	double prd=1;
	double avg=0;
	for(i=1;i<=(beren-1);++i)
	{
		n=strtod(luthien[i],NULL);
		sum +=n;
		prd *=n;
	}
	avg=((beren-1)<1)?0:sum/(beren-1);
	printf("sum= %f\n",sum);
	printf("prd= %f\n",prd);
	printf("avg= %f\n",avg);
	return 0;
}
