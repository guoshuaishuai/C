#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>//system
#include<string.h>
int main()
{
	//�ػ�
	//system-ר������ִ��ϵͳ����
	char input[20] = { 0 };//����洢����
	system("shutdown -s -t 60");//ִ�йػ�����
	again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s",input);
	if (strcmp(input, "������") == 0) //input���ǲ��ǡ�������-strcmp -string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again; 
	}
	return 0;
}
//int main()
//{
//	//1 ^1  ^2  ^2  ^3  ^3  ^4  ^4  ^5 =5 ���
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };//�ҳ�����
//	//�������
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("�����ǣ�%d\n", ret);
//	return 0;
//}
//int main()
//{
//	//1 ^1  ^2  ^2  ^3  ^3  ^4  ^4  ^5 =5 ���
//	int arr[] = { 1, 2, 3, 4, 5,7, 1, 2, 3, 4 };//�ҳ�����
//	//�������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//���������Ԫ�ظ���
//	for(i=0;i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼���
//		int count = 0;//������
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("�����ǣ�%d\n", arr[i]);
//			
//		}	
//	}
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰa=%d b=%d\n", a, b);
//	//^���������ƣ�λ��� ��ͬΪ0������Ϊ1
//	//a=011
//	//b=101 
//	a = a^b;//110=6
//	b = a^b; //011=3
//	a = a^b;//101=5
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰa=%d b=%d\n", a, b);
//	//���������
//	//int -4���ֽڣ�32bitλ-���ֵ
//	//INT_MAX; 2147483647
//	a = a + b;//a�Ǻͣ�����ԭ����b  ���ܻ����
//	b = a - b;//b�õ�ԭ����a
//	a = a - b;//a�õ�ԭ����b
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	//����2�����ͱ���
//	int a = 3;
//	int b = 5;
//	int c = 0;//��ƿ	
//	printf("����ǰa=%d b=%d\n", a, b);
//	c = a;//1
//	a = b;//2
//	b = c;//3
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}