#include <stdio.h>  
int main()  
{  
    int i,n,sum=0;  
    printf("Enter any number: ");  
    scanf("%d",&n);  
    for(i=2;i<=n;i+=2)  
    {  
        sum+=i*i*i;  
    }  
    printf("Summation of cube of even numbers 2*2*2+4*4*4+...+%d*%d*%d=%d",n,n,n, sum);  
    return 0;  
}
