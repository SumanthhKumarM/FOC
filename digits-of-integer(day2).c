#include <stdio.h>
#define MAX 100
void printdigit(int N)
{

int arr[MAX];
int i=0;
int j,r;
while (N!=0)
{
	r=N%10;
	arr[i]=r;
	i++;
	N=N/10;
}
for (j=i-1;j>-1;j--)
{
	printf("%d ",arr[j]);
}
}
int main()
{
	int N;
        printf("enter a no:");
        scanf("%d",&N);
	printdigit(N);
	return 0;
}
