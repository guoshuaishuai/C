#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	创建一个数组-存放整数-10个
//	int arr[10] = { 1, 2, 3 };//err不完全初始化，剩下的元素初始化默认是0
//	char arr2[5] = {'a','b'};
//	char arr22[5] = { 'a', 98 };//这里98是ASCII码值，对应的是b。arr4[5]=arr2[5]
//	char arr3[5] = "ab";//ok  arr3[5]=arr2[5]
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));//7 计算arr4所占空间的大小  7个元素-char 7*1=7
//	printf("%d\n", strlen(arr4));//6  strlen求字符串的长度-'\0'之前的字符个数
//	arr4[]=[a b c d e f \0]
//	int n = 5;
//	char ch[n];//err 数组大小必须是常量
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
//	int sz = sizeof(arr)/sizeof(arr[0]);//sizeof计算的是占用的字节
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
//	//int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 } };//列不能省略
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
//打印地址
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
//冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		//每一趟冒泡排序
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
//	//对去arr进行排序，升序
//	bubble_sort(arr,sz);//冒泡排序函数
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址&arr[0]
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
	printf("%p\n", &arr);//00F3FB98-数组的地址！！！！
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//1.sizeof(数组名)-数组名表示整个数组，sizeof（数组名）计算的是整个数组的大小，单位是字节
	//2.&数组名，数组名代表整个数组，&数组名-取出的是整个数组的地址 
	printf("%p\n", arr);//00F3FB98
	printf("%p\n", &arr[0]);//00F3FB98
	printf("%d\n", *arr);//1
}