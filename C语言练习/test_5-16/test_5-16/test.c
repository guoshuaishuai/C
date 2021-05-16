//包含一个叫stdio.h的文件
//std-标准 standard input output
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){ 
	//未声明的标识
	//声明   全局变量的作用域是整个工程
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}
//int global = 2020;
//void test(){
//	printf("test()---%d\n", global);
//}
//int main(){
//	test(); 
//	printf("%d\n", global);
//	return 0;
//}
//int main(){
//	//计算两个数的和；
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;  //C语言语法规定，变量定义要在当前代码块的最前面
//	//输入数据-使用输入函数scanf
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	
//	sum = num1 + num2; 
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int a = 20;
//int main(){
//	int a = 10;
//	//局部变量和全局变量的名字建议不要相同-容易产生误会
//	//当局部变量和全局变量相同时。局部变量优先。
//	printf("%d\n",a);
//	return 0;
//}
//int num2 = 20;//全局变量-定义在代码块（{}）之外的变量
//int main()
//{
//	int num1 = 10;//局部变量，反之 
//	return 0;
//}
//int main()
//int是整型的意思 main前面的int表示main函数调用返回一个整型值
//主函数-程序的入口-main函数有且仅有一个  
//库函数-C语言本身提供的函数，别人的东西-打招呼，
//#include
//char 字符类型
//int main()
//{
	//char ch = 'A';//内存
	//printf("%c\n",ch);//%C--打印字符格式的数据
	////20
	//int age = 20;
	//printf("%d\n",age);//%d--打印整型十进制数据
	//long num = 100;
	//printf("%d\n", num);
	//float f = 0.5;
	//printf("%f\n", f);
	//double d = 3.14;//双精度
	//printf("%lf\n", d);
	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof(long));//4 or 8
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));
	//short int age = 20;//2 16 2^16-1=65535
	//int age;//4
	//年龄=20
//	short age = 20;//向内存申请2个字节，用来存放20
//	float weight = 95.6;//因为95.6是double类型的数据，转换为float型报错，所以加上f,向内存申请4个字节存放小数
//	return 0;
//}
//{
//	printf("hello world\n"	);
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello 比特\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	return 0;//返回整数，
//}
//void main(){}  这种写法过时
//%d-打印整型 %c-打印字符   %f-打印小数-浮点数字  %p-以地址的形式打印  %x-打印16进制数字  %o-。。。。