#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else
//	{
//		if (age >= 18 && age<28)
//		{
//				printf("����\n");
//			}
//			else if (age>=28 && age<50)
//			{
//				printf("׳��\n");
//			}
//			else if (age>=50 && age<90)
//			{
//				printf("����\n");
//			}
//			else
//			{
//				printf("�ϲ���\n");
//			}
//	}*/
//	else if (age>=18 && age<28)
//	{
//		printf("����\n");
//	}
//	else if (age>=28 && age<50)
//	{
//		printf("׳��\n");
//	}
//	else if (age>=50 && age<90)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("�ϲ���\n");
//	}
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		printf("����\n");
//	}
//	int a = 0;
//	int b = 2;
//	if (a==1)
//		if (b == 2)
//			printf("hehe\n");
//		else//������ģ�δƥ���if����ƥ�䣡����
//			printf("haha\n");
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	if (num==5)//=��ֵ   ==�ж����
//	{
//		printf("�Ǻ�\n");
//	}
//	���1-100������
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
//	switch (day)//�������ͱ��ʽ
//	{
//	case 1:
//		if (day == 1)
//			printf("hehe\n");
//		break;
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;//����Ƿ������˳���������
//	//case 1://case:�������ͳ������ʽ
//	//	printf("����1\n");
//	//	break;
//	//case 2:
//	//	printf("����2\n");
//	//	break;
//	//case 3:
//	//	printf("����3\n");
//	//	break;
//	//case 4:
//	//	printf("����4\n");
//	//	break;
//	//case 5:
//	//	printf("����5\n");
//	//	break;
//	//case 6:
//	//	printf("����6\n");
//	//	break;
//	//case 7:
//	//	printf("������\n");
//	//	break;
//	}
//	//if (1 == day)
//	//	printf("����1\n");
//	//else if (2 == day)
//	//	printf("����2\n");
//	//else if (3 == day)
//	//	printf("����3\n");
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
//		switch (n)//switch����Ƕ��ʹ��
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