#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch = 'w';
	char* pc=&ch;
	printf("%d\n", sizeof(pc));
	*pc ='a';
	printf("%c\n", ch);
	return 0;
}
//int main()
//{
//	int a = 10;//4个字节
//	int* p = &a;//取地址
//	//printf("%p\n", p);
//	//有一种变量是用来存放地址的-指针变量
//	*p=20;//*-解引用操作符
//	printf("a=%d\n", a); 
//	//printf("%p\n", &a);//0099F970十六进制
//
//	return 0;
//}
//1、static修饰局部变量
//局部变量的生命周期变长
//2、static 修饰全局变量  
//改变了变量的作用域-让静态的全局变量只能在自己所在的源文件内部使用，除了源文件就没法使用了
//3、static修饰函数
//也是改变了函数的作用域-不准确
//static 修饰函数改变了函数的链接属性
//外部链接属性->内部连接属性

//define 定义标识符常量
//#define Max 100
//#define可以定义宏-带参数
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	{
//		return y;
//	}
//}
//
////宏的定义方式
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	//int a = Max;
//	int a = 10;
//	int b = 20;
//	//函数
//	int max=Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//    printf("MAX=%d\n", max);
//	return 0;
//}
//声明外部函数
//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	//extern-声明外部符号的
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a是一个静态的局部变量 
//	a++;
//	printf("a=%d\n", a);//2,3,4,5,6
//
//}
//int main()
//{
//	int i = 0;
//	while (i<5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// int float 
//int main()
//{
//	//auto int a = 10;//局部变量-自动变量(省略auto）
//	//typedef-类型定义-类型重定义
//	//张三-小三
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	return 0;
//}
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]-下标引用操作符
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-函数调用操作符
//
//	return 0;
//}
//-2
//10000000000000000000000000000010-原码
//11111111111111111111111111111101-反码
//11111111111111111111111111111110-补码
//& * . -> 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a : b;//条件操作符--三木操作符
//	printf("max=%d\n", max);
///*	if (a > b)
//		max = a;
//	else
//		max = b;*/  
//	return 0;
//}
//int main()
//{
//	//假 0  非0 就是真
//	//&&-逻辑与
//	//||逻辑或
//	int a = 0;
//	int b = 0;
//	//int c=a&&b;//1
//	int c = a || b;//1
//	printf("%d\n", c);//1  0
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//double->int强制类型转换
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++ -11  10
//	//int b = ++a;//前置++，先++，再使用 -  11  11
//	//int b = a--;//9,10
//	int b = --a;//9,9
//	printf("a=%d b=%d\n", a,b);
//	return 0;
//}
//int main()
//{
//	int a = 0;//整型占用4个字节，32bit位
//	int b = ~a;//b是有符号的整型，
//	//~--按（2进制）位取反 
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码->符号位不变，其他位按位取反->反码->+1->补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110-反码
//	//10000000000000000000000000000001-原码-  -1
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6 };//6*4=24
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	//printf("%d\n", sizeof int );//erro
//	printf("%d\n", sizeof(arr));//24-计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max=Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值为：%d\n", num1);
//	else
//	{
//		printf("较大值为：%d\n", num2);
//	}
//	return 0;
//}
//int m = 20;
//int main()
//{
//	//字符串的结束标志：
//	//‘\0'-转义字符-ASII-0 
//	//0->数字0
//	//'0'->字符串0->ASII-48
//	int m = 10;
//	printf("m=%d\n", m);//m=10
//	//EOF-end of file -文件结束标志-  -1
//	return 0;
//}