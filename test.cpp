#include<stdio.h>
void main()
{
	int count=0;
	int number,flag=0;
	scanf("%d",&number);
	while(number>0)
	{
		if(number==1)
		{
			flag=1;
			break;
		}
		else if(number%2==0)
		{
			count++;
			number/=2;
		}
		else
		{
			number=3*number+1;
		}
	}
	if(flag==1)
		printf("%d",count);
	else
		printf("sorry");
}
