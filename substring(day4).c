#include<stdio.h>
int main()
{
	char str[30]="hello world";
	char substr[30]="wor";
	int index =-1;
	for(int i=0;str[i] !='\0';i++)
	{
		index =-1;
		for (int j=0;substr[j] !='0';j++)
		{
		
		if(str[i+j] != substr[j])
	{
		index =-1;
		break;
	}
	index =i;
}
if(index != -1)
{
	break;
}
}
printf("index of first occurence: %d\n", index);
return 0;
}
