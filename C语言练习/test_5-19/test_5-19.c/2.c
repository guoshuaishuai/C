#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	////const-常属性
//	//const int num = 4;//const 修饰的常变量
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	const int n = 10;//n是变量，但是有常属性，称为n为常变量
//	int arr[10] = { 0 };
//
//	return 0;
//}
//#define MAX 10 //第三种常量，定义的标识符常量
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//4、枚举常量-一一列举 eg.性别：男、女、保密， 三原色：，，，。星期：，，，，。
//枚举关键字-enum
//enum sex
//{
//	male,
//	female,
//	secret
//};
//int main()
//{
//	enum sex s = female;	//male,female,secret--枚举常量
//	printf("%d\n", male); //0
//	printf("%d\n", female);//1
//	printf("%d\n", secret);//2
//	return 0;
//}
enum Color
{
	red,
	yellow,
	blue
};
int main()
{
	enum Color color = blue;
	color = yellow;	
	//blue = 6;err,有误不能修改枚举常量
	printf("%d\n", color);
	return 0;
}