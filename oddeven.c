#include<stdio.h>
int main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	if(n%2==0){
		printf("Number is EVEN!");
	}
	else{
		printf("Number is ODD!");
	}
	return 0;
}
