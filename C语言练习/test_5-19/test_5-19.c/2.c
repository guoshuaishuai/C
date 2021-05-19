#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//单目操作符
//双目操作符
//三目操作符
int main()
{
	int arr[10] = { 0 };//10个整型元素数组
	//10*sizeof(int)=40
	int sz = 0;
	printf("%d\n", sizeof(arr));//40
	//计算数组元素的个数=数组总大小/每个元素的大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);
	//int a = 10;
	////sizeof()计算的是变量/类型所占空间的大小，单位是字节
	//printf("%d\n", sizeof(a));//4个字节
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof (int ));
	return 0;
}
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//双目操作符。有左右2个操作数
//	//c语言中表示真假   0-假  非0--真
//	//int a = 0;
//
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=赋值  ==判断相等
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//复合赋值符
//	//+= -= *= /= >>= <<= &= ^= |=
//	return 0;
//}
//int main()
//{
//	//2进制位操作
//	//& 按位与
//	//|按位或
//	//^按位异或
//	//int a = 3;
//	//int b = 5;
//	//int c = a&b;
//	//011
//	//101
//	//001按位与操作结果为1
//	//int a = 3;
//	//int b = 5;
//	//int c = a|b;
//	//011
//	//101
//	//111--7
//	int a = 3;
//	int b = 5;
//	int c = a^b;//不是次方，是异或
//	//异或的计算规律；
//	//对应的二进制位相同，则为0
//	//对应的二进制为相异，则为1
//	//011
//	//101
//	//110---6
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//移的（2进制）位操作符
//	//<<左移
//	//>>右移
//	int a = 1;//整型1占4个字节-32bit位
//	//00000000000000000000000000000001
//	int b = a << 2;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//定义一个存放10个整型数字的数组
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\t", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//下标的方式访问元素
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	//scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	sum = add(num1, num2);
//	sum = add(a, b);
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
//enum Color
//{
//	red,
//	yellow,
//	blue
//};
//int main()
//{
//	enum Color color = blue;
//	color = yellow;	
//	//blue = 6;err,有误不能修改枚举常量
//	printf("%d\n", color);
//	return 0;
//}
//字符类型 char
//字符串类型 
//int main()
//{
//	//"hello bit";
//	//"abcde";
//	//"";//空字符串
//	char arr1[]="abc";//数组  "abc"-'a','b','c','\0'
//	char arr2[] = { 'a', 'b', 'c',0 };//   '\0'字符串的结束标志  '\0'-0   'a'-97 数据存贮二进制在计算机里
//	//ASCII 编码 
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' ,'0',0};
//	printf("%d\n", strlen(arr1));//strlen字符串长度
//	printf("%d\n", strlen(arr2));
//	return 0; 
//}
//int main()
//{
//	printf("abc\n");
//	return 0;
//}
//int main()
//{
//	//printf("c:\\test\\32\\test.c");//	\t水平制表符
//	//printf("%c\n",'\'');//%C--打印一个字符
//	printf("%s\n", "\"");
//	return 0;
//}
#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));//\32--32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符 
//	//32----10进制，26作为ASCII码值，对应的字符 
//	//printf("%c\n", '\132');//132--Z
//	printf("%c\n", '\x61');//\xdd 16进制，61---97--a 
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("回家卖红薯\n");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("敲入一行代码%d\n",line);
//		line++;
//	}
//	if (line>=2000)
//		printf("好的offer\n");
//	return 0;
//}