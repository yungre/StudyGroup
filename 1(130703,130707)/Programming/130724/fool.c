#include <stdio.h>

int main()
{
	int egg;
	int milk;
	
	printf("계란:");
	scanf("%d",&egg);
	
	milk=1; 
	
	if(egg>0)
	{
		milk=6;
	}
	
	printf("프로그래머는 우유를 %d개 사왔습니다.",milk);
	return 0;
}
