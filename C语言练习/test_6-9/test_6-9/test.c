#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ",n % 10);
//}
//int main()//��ӡ 1 2 3 4
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	print(num);
//	return 0;
//}
//���ַ�������
#include<string.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
//�Ѵ��»�С
int main()
{
	char arr[] = "bit";
	//int len = strlen(arr);
	//printf("%d\n", len);
	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
	printf("len=%d\n", len);

	return 0;
}