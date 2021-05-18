#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[5] = { 0 };//5个字符
	scanf("%s", arr);//输入的时候超过5个字符？不安全了
	printf("%s\n", arr);
	return 0;
}