#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else
//	{
//		if (age >= 18 && age<28)
//		{
//				printf("青年\n");
//			}
//			else if (age>=28 && age<50)
//			{
//				printf("壮年\n");
//			}
//			else if (age>=50 && age<90)
//			{
//				printf("老年\n");
//			}
//			else
//			{
//				printf("老不死\n");
//			}
//	}*/
//	else if (age>=18 && age<28)
//	{
//		printf("青年\n");
//	}
//	else if (age>=28 && age<50)
//	{
//		printf("壮年\n");
//	}
//	else if (age>=50 && age<90)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老不死\n");
//	}
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		printf("成年\n");
//	}
//	int a = 0;
//	int b = 2;
//	if (a==1)
//		if (b == 2)
//			printf("hehe\n");
//		else//离最近的，未匹配的if进行匹配！！！
//			printf("haha\n");
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	if (num==5)//=赋值   ==判断相等
//	{
//		printf("呵呵\n");
//	}
//	输出1-100的奇数
//	int i = 1;
//	while (i<=100)
//	{
//		printf("%d\n",i);
//		i += 2;
//	}
//	int i = 0;
//	while (i<=100)
//	{
//		if (i % 2 == 1)
//			printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//必须整型表达式
//	{
//	case 1:
//		if (day == 1)
//			printf("hehe\n");
//		break;
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;//处理非法情况，顺序可以随便放
//	//case 1://case:必须整型常量表达式
//	//	printf("星期1\n");
//	//	break;
//	//case 2:
//	//	printf("星期2\n");
//	//	break;
//	//case 3:
//	//	printf("星期3\n");
//	//	break;
//	//case 4:
//	//	printf("星期4\n");
//	//	break;
//	//case 5:
//	//	printf("星期5\n");
//	//	break;
//	//case 6:
//	//	printf("星期6\n");
//	//	break;
//	//case 7:
//	//	printf("星期天\n");
//	//	break;
//	}
//	//if (1 == day)
//	//	printf("星期1\n");
//	//else if (2 == day)
//	//	printf("星期2\n");
//	//else if (3 == day)
//	//	printf("星期3\n");
//	////...
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	default:
//		break;
//	case 1:m++;//n=1 m=3
//	case 2:n++;//n=2 m=3
//	case 3:
//		switch (n)//switch允许嵌套使用
//		{
//		case 1:n++;
//		case 2:m++; n++; break;//n=3 m=4
//		}
//	case 4:m++; break;//n=3 m=5
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}
//int main()
//{
//	//if (1)
//	//	printf("hehe\n");
//	int i = 0;
//	while (i<=10)
//	{
//		i++;
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d\n", i);
//		
//	}
//	return 0;
//}
int main()
{
	//int ch = getchar();
	//putchar(ch);
	//printf("%c\n", ch);
	int ch = 0;
	//ctrl+z 
	//EOF-end of file ->  -1
	while ((ch=getchar())!=EOF)
	{
		putchar(ch);
	}
	return 0;
}