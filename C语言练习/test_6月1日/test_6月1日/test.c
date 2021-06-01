#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//打印1000-2000的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1、能被4整除并且不能被100整除是闰年
//		//2、能被400整除是闰年
//	
//		//if (year%4==0 && year%100!=0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if (year%400==0)
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		if (((year%4==0)&& (year%100!=0))|| (year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//打印100-200的素数
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt-开平方的数学库函数
//	for ( i = 101; i <=200; i+=2)//偶数一定不是素数
//	{
//		//判断i是否为素数
//		//素数判断规则：
//		//1、试除法-产生2->i-1的数字
//		int j = 0;
//		for ( j = 2; j <sqrt(i); j++)
//		{
//			if (i%j==0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//素数求解的n种方法
//1到100中所有整数含有多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for ( i = 1; i < 100; i++)
//	{
//		if (i%10==9)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//		if (i/10==9)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	//9,19,29,,,,99-10
//	//90,91,92,,,99-10
//	printf("\ncount=%d ", count);
//	return 0;
//}
//计算1/1-1/2+1/3-1/4+1/5.....+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for ( i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	//1/1+1/2+1/3....
//	//1+0+0+0=1
//	printf("%fl\n", sum);
//	return 0;
//}
//求10个整数的最大值
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	//int max = 0;//最大值
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz ; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max); 
//	return 0;
//}
//在屏幕上输出9*9乘法口诀表
//1*1=1 
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//，，，，
//9*1=9 9*2=18 ，，，
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <=9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for ( j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//猜数字游戏
//1，电脑会生成一个随机数
//2，猜数字
#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("**********************************\n");
//	printf("***   1.play    0.exit	    ***\n");
//	printf("**********************************\n");
//}
//void game()
//{
//	printf("猜数字\n");
//	//1,生成1-100随机数
//	int ret = 0;
//	int guss = 0;//接受猜的数字
//	//srand(2);
//	//拿时间戳设置随机数的生成起始点
//	// time_t time(time_timer)
//
//	ret=rand()%100+1;//生成1-100随机数
//	//printf("%d\n", ret);
//	//2，猜数字
//	while (1)
//	{
//		printf("请猜数字：>");
//		scanf("%d",&guss);
//		if (guss>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guss<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你！猜对了！\n");
//			break;
//		}
//	}
//}
////RAND_MAX 0 - 32767
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//放在主函数只设置一次就好
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		default:	
//			printf("选择错误\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		case 1:
//			game();//猜数字游戏
//			break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	printf("hello bit!\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}
#include<Windows.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s-t 60
//	//system()-执行系统命令
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑再1分钟内关机，如果输入：我是猪，就取消关机\n请输入：>");
//	scanf("%s", &input);
//	if (strcmp(input,"我是猪")==0)//比较两个字符串
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
int main()
{
	char input[20] = { 0 };
	//shutdown -s-t 60
	//system()-执行系统命令
	system("shutdown -s -t 60");
	while (1)//非0是真
	{
		printf("请注意，你的电脑再1分钟内关机，如果输入：我是猪，就取消关机\n请输入：>");
		scanf("%s", &input);
		if (strcmp(input, "我是猪") == 0)//比较两个字符串
		{
			system("shutdown -a");
			break;
		}
	}
	return 0;
}

