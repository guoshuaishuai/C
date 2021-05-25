#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//int a = 10;//申请了4个字节的空间
//	////printf("%p\n", &a);
//	//int*p=&a;//p是一个变量-指针变量
//	////printf("%p\n", p);
//	//*p=20;//*-解引用操作符or间接访问操作符
//	//printf("a=%d\n", a);
//	//double d = 3.14;
//	//double* pd = &d;
//	//printf("%d\n", sizeof(pd));//32位-4 or 64位-8
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//	printf("%d\n", sizeof(char*));//32位-4 or 64位-8
//	printf("%d\n", sizeof(short*));//32位-4 or 64位-8
//	printf("%d\n", sizeof(int*));//32位-4 or 64位-8
//	printf("%d\n", sizeof(double*));//32位-4 or 64位-8
//	return 0;
//}
//创建一个结构体类型
struct Book
{
	char name[20];//C语言程序设计
	short price;//55
};
int main()
{
	//利用结构体类型-创建一个该类型的结构体变量 
	struct Book b1 = {"C语言程序设计",55};
	struct Book* pb = &b1;
	strcpy(b1.name, "c++");//strcpy--string copy -字符串拷贝-库函数-string.h
	printf("%s\n", b1.name);
	//利用pb打印出书名和价格
	//.	结构体变量.成员
	//->结构体指针->成员
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("%s\n",(*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("书名：%s\n", b1.name);
	//printf("价格：%d元\n", b1.price);
	//b1.price = 15;
	//printf("修改后的价格：%d元\n", b1.price);
	return 0;
}