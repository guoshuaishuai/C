#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
//int main()
//{
//	//int ch = 0;
//	//EOF-end of file文件结束标志---本质上是-1
//	//while ((ch=getchar())!=EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);//输入密码并存放在password数组
//	//缓冲区还剩余一个"\n"
//	//读取一下'\n'
//	getchar();
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	ret = getchar();//Y/N
//	if (ret=='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
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
//	//	初始化	判断	调整	
//	for ( i = 1; i<=10; i++)
//	{
//		if (i == 5)
//			//break;//1234
//			continue;//1234678910  continue会跳过本次循环后面的代码！！！
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;//初始化
//	while (i<=10)//判断
//	{
//		if (i == 5)
//			continue;//死循环！
//		printf("%d", i);
//		i++;//调整
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	//10次循环
//	//10次打印
//	//10个元素
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
//	//10个hehe
//	return 0;
//}
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");//2个hehe
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = 0; j = 0; i++, j++)//j=0 0次循环；j=1 死循环！
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
//求n! 
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);//100不考虑溢出
//	for ( i = 1; i <= n; i++)
//	{
//		ret = ret *i;
//	}
//	printf("%d!=%d\n",n, ret);
//	return 0;
//}
//10的阶乘相加
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	//1+2+6=9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//重置ret 
//		for ( i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		//n的阶乘 
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
//		//n的阶乘 
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
//	//写一个代码，在arr数组（有序的）找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	//for (i = 0; i < sz; i++)
//	//{
//	//	if (k==arr[i])
//	//	{
//	//		printf("找到了，下标是：%d\n", i);
//	//		break;
//	//	}
//	//}
//	//if (i == sz)
//	//	printf("找不到\n");
//	//return 0;
//	//折半查找
//	int left = 0;//左下标
//	int right = sz - 1;//右下标
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
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
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
//		Sleep(1000);//休息一秒
//		system("cls");//-执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//输入密码
int main()
{
	int i = 0;
	char password[20] = {0};
	for ( i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		if (strcmp(password , "123456")==0)//==不能用来比较两个字符串是否相等，应该使用库函数-strcmp
		{
			printf("登录成功！");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i==3)
	{
		printf("三次密码均错误，请退出程序");
	}
	return 0;
}