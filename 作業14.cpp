#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c;
	printf("請輸入三個邊長:");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a + b > c&&a + c > b&&b + c > a)
	{
		printf("可拼成三角形");
	}
	if (a + b <= c&&a + c <= b&&b + c <= a)
	{
		printf("不可拼成三角形");
	}
	
	system("pause");
	return 0;
}