#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��N�Ľ׳�
int fac1(int n)
{
	int i = 0;
	int ret = 1;
	for ( i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int fac2(int n)//�ݹ鷽��
{
	if (n <= 1)
		return 1;
	else
		return n*fac2(n - 1);
}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n );
//	ret = fac2(n);//ѭ���ķ�ʽ
//	printf("%d!=%d\n", n, ret);
//	return 0;
//}
//��n��쳲�������
//쳲���������	1 1 2 3 5 8 13 21,,,
int count = 0;
int fib1(int n)//�ݹ鲻�Ǻܺõ��㷨
{
	if (n==3)//���Ե�3��쳲��������ļ������
	{
		count++;
	}
	if (n <= 2)
		return 1;
	else
		return fib1(n - 1) + fib1(n - 2);
}
int fib2(int n)
{
	int a = 1;
	int b = 1; 
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//50
//49 48
//48 47 47 46
//,,,,,,
int main()
{
	int n = 0;
	int ret1 = 0;
	int ret2 = 0;
	scanf("%d", &n);
	//TDD-������������-������ô�ã�������ô����
	//ret1 = fib1(n);
	ret2 = fib2(n);
	//printf("1����%d��쳲�������Ϊ%d\n", n, ret1);
	printf("2����%d��쳲�������Ϊ%d\n", n, ret2);
	//printf("count=%d\n", count);
	return 0;
}