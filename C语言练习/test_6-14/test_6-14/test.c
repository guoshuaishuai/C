#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	����һ������-�������-10��
//	int arr[10] = { 1, 2, 3 };//err����ȫ��ʼ����ʣ�µ�Ԫ�س�ʼ��Ĭ����0
//	char arr2[5] = {'a','b'};
//	char arr22[5] = { 'a', 98 };//����98��ASCII��ֵ����Ӧ����b��arr4[5]=arr2[5]
//	char arr3[5] = "ab";//ok  arr3[5]=arr2[5]
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7 ����arr4��ռ�ռ�Ĵ�С  7��Ԫ��-char 7*1=7
//	printf("%d\n", strlen(arr4));//6  strlen���ַ����ĳ���-'\0'֮ǰ���ַ�����
//	arr4[]=[a b c d e f \0]
//	int n = 5;
//	char ch[n];//err �����С�����ǳ���
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//}
//int main()
//{
//	//char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//for ( i = 0; i <(int) strlen(arr); i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr)/sizeof(arr[0]);//sizeof�������ռ�õ��ֽ�
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		printf("arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	//int arr[3][4] = { { 1, 2, 3, }, { 4, 5 } };
//	//int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };//�в���ʡ��
//	//printf("%d\n", arr);
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i = 0;
//	for ( i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//��ӡ��ַ
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	//1 2 3 0
//	//4 5 0 0
//	//0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//ð������
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for ( j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] >arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag==1)
//			break;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��ȥarr������������
//	bubble_sort(arr,sz);//ð��������
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("%p\n", arr);//00F3FB98
	printf("%p\n", &arr[0]);//00F3FB98
	printf("%p\n", &arr);//00F3FB98-����ĵ�ַ��������
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(������)-��������ʾ�������飬sizeof�������������������������Ĵ�С����λ���ֽ�
	//2.&�������������������������飬&������-ȡ��������������ĵ�ַ 
	printf("%p\n", arr);//00F3FB98
	printf("%p\n", &arr[0]);//00F3FB98
	printf("%d\n", *arr);//1
}