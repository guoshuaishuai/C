#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int func(int a)
//{
//	int b;
//	switch (a)
//	{
//	case 1:b = 30;
//		break;
//	case 2:b = 20;
//	case 3:b = 16;
//	default:b = 0;
//	}
//	return b;
//}
//int main()
//{
//	printf("%d",func(1));
//	return 0;
//}
//�Ӵ�С���������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//213
//	//�㷨ʵ��  a�����ֵ  d�Ŵ�֮ c����Сֵ
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n",a,b,c);
//	return 0;
//}
//��ӡ3�ı�����1-100֮��
//int main()
//{
//	int i = 0;
//	for ( i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//�����Լ�� 
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int r = 0;
//	while (r=m%n)
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
