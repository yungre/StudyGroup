#include <stdio.h>

int main()
{
	int input, day, hour, minute, second;
	
	printf("초:");
	scanf("%d",&input);
	
	day=input/86400;
	hour=input%86400/3600;
	minute=input%3600/60;
	second=input%60;
	
	printf("%d초는 변환하면 다음과 같습니다.\n",input);
	printf("- %d일 %d시간 %d분 %d초",day,hour,minute,second);
	return 0;
}
