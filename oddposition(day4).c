#include<stdio.h>
int main()
{
	int arr[]={1,2,4,6,7};
	int length= sizeof(arr)/sizeof(arr[0]);
	printf("elements of given array present on odd position");
	
	for(int i=0;i<length;i=i+2)
	{
	printf("%d\n"),arr[i];
	}
	return 0;
}
