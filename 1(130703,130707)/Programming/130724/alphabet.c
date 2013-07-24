#include <stdio.h>

int main()
{
	char input;
	
	printf("알파벳:");
	scanf("%c",&input);
	
	if(input=='A')
	{
		printf("3획입니다"); 
	}
	else if(input=='S')
	{
		printf("1획입니다"); 
	}
	else if(input=='D')
	{
		printf("2획입니다");
	}
	else if(input=='F')
	{
		printf("3획입니다");
	}
	else
	{
		printf("잘 모르겠습니다");
	}
	return 0;
} 
