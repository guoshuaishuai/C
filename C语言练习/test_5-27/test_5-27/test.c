#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
//int main()
//{
//	//int ch = 0;
//	//EOF-end of file�ļ�������־---��������-1
//	//while ((ch=getchar())!=EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);//�������벢�����password����
//	//��������ʣ��һ��"\n"
//	//��ȡһ��'\n'
//	getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret=='Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//	��ʼ��	�ж�	����	
//	for ( i = 1; i<=10; i++)
//	{
//		if (i == 5)
//			//break;//1234
//			continue;//1234678910  continue����������ѭ������Ĵ��룡����
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;//��ʼ��
//	while (i<=10)//�ж�
//	{
//		if (i == 5)
//			continue;//��ѭ����
//		printf("%d", i);
//		i++;//����
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	//10��ѭ��
//	//10�δ�ӡ
//	//10��Ԫ��
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	//10��hehe
//	return 0;
//}
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");//2��hehe
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = 0; j = 0; i++, j++)//j=0 0��ѭ����j=1 ��ѭ����
//	{
//		j++;
//	}
//	return 0;
//}
//int main()
//{
//	//1-10
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}
//��n! 
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);//100���������
//	for ( i = 1; i <= n; i++)
//	{
//		ret = ret *i;
//	}
//	printf("%d!=%d\n",n, ret);
//	return 0;
//}
//10�Ľ׳����
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1+2+6=9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//����ret 
//		for ( i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		//n�Ľ׳� 
//		sum = sum + ret;
//	}
//	//ret=1*1=1
//	//ret=1*1*2=2
//	//ret=1*1*2*3=6
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1+2+6=9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret*n;
//		//n�Ľ׳� 
//		sum = sum + ret;
//	}
//	//ret=1*1=1
//	//ret=1*1*2=2
//	//ret=1*1*2*3=6
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//дһ�����룬��arr���飨����ģ��ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	//for (i = 0; i < sz; i++)
//	//{
//	//	if (k==arr[i])
//	//	{
//	//		printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//	//		break;
//	//	}
//	//}
//	//if (i == sz)
//	//	printf("�Ҳ���\n");
//	//return 0;
//	//�۰����
//	int left = 0;//���±�
//	int right = sz - 1;//���±�
//	while (left<=right)
//	{
//		int mid =(left+right)/2;
//		if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
#include<stdlib.h>
//int main()
//{
//	//char arr[]="abc";
//	//[a b c \0]
//	// 0 1 2 3
//	//4-2
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��Ϣһ��
//		system("cls");//-ִ��ϵͳ�����һ������-cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//��������
int main()
{
	int i = 0;
	char password[20] = {0};
	for ( i = 0; i < 3; i++)
	{
		printf("���������룺>");
		scanf("%s", password);
		if (strcmp(password , "123456")==0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ�ÿ⺯��-strcmp
		{
			printf("��¼�ɹ���");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i==3)
	{
		printf("����������������˳�����");
	}
	return 0;
}