#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ӡ1000-2000������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1���ܱ�4�������Ҳ��ܱ�100����������
//		//2���ܱ�400����������
//	
//		//if (year%4==0 && year%100!=0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year%400==0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		if (((year%4==0)&& (year%100!=0))|| (year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//��ӡ100-200������
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt-��ƽ������ѧ�⺯��
//	for ( i = 101; i <=200; i+=2)//ż��һ����������
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϹ���
//		//1���Գ���-����2->i-1������
//		int j = 0;
//		for ( j = 2; j <sqrt(i); j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//��������n�ַ���
//1��100�������������ж��ٸ�9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i < 100; i++)
//	{
//		if (i%10==9)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//		if (i/10==9)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	//9,19,29,,,,99-10
//	//90,91,92,,,99-10
//	printf("\ncount=%d ", count);
//	return 0;
//}
//����1/1-1/2+1/3-1/4+1/5.....+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for ( i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	//1/1+1/2+1/3....
//	//1+0+0+0=1
//	printf("%fl\n", sum);
//	return 0;
//}
//��10�����������ֵ
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	//int max = 0;//���ֵ
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz ; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max); 
//	return 0;
//}
//����Ļ�����9*9�˷��ھ���
//1*1=1 
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//��������
//9*1=9 9*2=18 ������
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <=9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��������Ϸ
//1�����Ի�����һ�������
//2��������
#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("***   1.play    0.exit	    ***\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	printf("������\n");
//	//1,����1-100�����
//	int ret = 0;
//	int guss = 0;//���ܲµ�����
//	//srand(2);
//	//��ʱ��������������������ʼ��
//	// time_t time(time_timer)
//
//	ret=rand()%100+1;//����1-100�����
//	//printf("%d\n", ret);
//	//2��������
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d",&guss);
//		if (guss>ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guss<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣡�¶��ˣ�\n");
//			break;
//		}
//	}
//}
////RAND_MAX 0 - 32767
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//����������ֻ����һ�ξͺ�
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		default:	
//			printf("ѡ�����\n");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			game();//��������Ϸ
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	printf("hello bit!\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hehe\n");
//	return 0;
//}
#include<Windows.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s-t 60
//	//system()-ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n�����룺>");
//	scanf("%s", &input);
//	if (strcmp(input,"������")==0)//�Ƚ������ַ���
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
int main()
{
	char input[20] = { 0 };
	//shutdown -s-t 60
	//system()-ִ��ϵͳ����
	system("shutdown -s -t 60");
	while (1)//��0����
	{
		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n�����룺>");
		scanf("%s", &input);
		if (strcmp(input, "������") == 0)//�Ƚ������ַ���
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}

