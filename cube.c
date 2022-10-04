#include<stdio.h>
int main()
{
	int n,i,z,j,k;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		j=i*i*i;
		printf("%d ",j);
	}
		z=n*n;
		k=(n+1)*(n+1);
		int p=(z*k)/4;
		printf("\n%d",p);
	return 0;
}
