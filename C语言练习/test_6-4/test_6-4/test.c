#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//		//strcpy-string copy - ×Ö·û´®¿½±´
//		//strlen-string length -×Ö·û´®µÄ³¤¶ÈÓÐ¹Ø
//		return 0;
//}
// memset-memory set
int main()
{
	char arr[] = { "hello world" };
	memset(arr, '*', 5);
	printf("%s\n", arr);
	//***** world
	return 0;
}