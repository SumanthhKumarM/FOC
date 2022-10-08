#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
int a,b,result;
char opr;
if(argc !=4)
    {
	printf("invalid arguments\n");
	return -1;
	}	
	a=atoi(argv[1]);
	b=atoi(argv[3]);
	opr=argv[2][0];
	switch(opr)
	{
	
	case 1:
	     result=a+b;
	     break;
	case 2:
		result=a-b;
		break;
	case 3:
		result=a*b;
		break;
	default:
		result=0;
		break;
	}
	if(opr=='+'||opr=='-'||opr=='*')
	
	printf("result: %d %c %d= %d\n",a,opr,b,result);
	else
	printf("undefined operator\n");
	return 0;
}
