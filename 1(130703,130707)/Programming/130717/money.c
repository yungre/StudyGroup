#include <stdio.h>

int main()
{
	int input;
	int money10000;
	int money5000;
	int money1000;
	int money500;
	int money100;
	int money50;
	int money10;
	int money5;
	int money1;
	
	printf("금액:");
	scanf("%d",&input);
	
	money10000=input/10000;
	money5000=input%10000/5000;
	money1000=input%5000/1000;
	money500=input%1000/500;
	money100=input%500/100;
	money50=input%100/50;
	money10=input%50/10;
	money5=input%10/5;
	money1=input%5;
	
	printf("만원권 : %d장\n",money10000);
	printf("오천원권 : %d장\n",money5000);
	printf("천원권 : %d장\n",money1000);
	printf("오백원 : %d개\n",money500);
	printf("백원 : %d개\n",money100);
	printf("오십원 : %d개\n",money50);
	printf("십원 : %d개\n",money10);
	printf("오원 : %d개\n",money5);
	printf("일원 : %d개",money1);
	return 0;
}
