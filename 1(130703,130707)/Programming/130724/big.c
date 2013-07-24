#include <stdio.h>

int main()
{
	int a,b=5;
	
	printf("a:");
	scanf("%d",&a);
	
	if(a>b)
	{
		printf("a(%d)는 b(%d)보다 큽니다.",a,b);
	}
	else if(a==b)
	{
		printf("a(%d)는 b(%d)와 같습니다.",a,b);
	}
	else
	{
		printf("a(%d)는 b(%d)보다 작습니다.",a,b);
	} 

	return 0;
}
