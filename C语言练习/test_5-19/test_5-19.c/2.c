#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��Ŀ������
//˫Ŀ������
//��Ŀ������
int main()
{
	int arr[10] = { 0 };//10������Ԫ������
	//10*sizeof(int)=40
	int sz = 0;
	printf("%d\n", sizeof(arr));//40
	//��������Ԫ�صĸ���=�����ܴ�С/ÿ��Ԫ�صĴ�С
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("sz=%d\n", sz);
	//int a = 10;
	////sizeof()������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(a));//4���ֽ�
	//printf("%d\n", sizeof(int));
	//printf("%d\n", sizeof a);
	//printf("%d\n", sizeof (int ));
	return 0;
}
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//˫Ŀ��������������2��������
//	//c�����б�ʾ���   0-��  ��0--��
//	//int a = 0;
//
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	a = 20;//=��ֵ  ==�ж����
//	a = a + 10;
//	a += 10;
//	a = a - 20;
//	a -= 20;
//	a = a & 2;
//	a &= 2;
//	//���ϸ�ֵ��
//	//+= -= *= /= >>= <<= &= ^= |=
//	return 0;
//}
//int main()
//{
//	//2����λ����
//	//& ��λ��
//	//|��λ��
//	//^��λ���
//	//int a = 3;
//	//int b = 5;
//	//int c = a&b;
//	//011
//	//101
//	//001��λ��������Ϊ1
//	//int a = 3;
//	//int b = 5;
//	//int c = a|b;
//	//011
//	//101
//	//111--7
//	int a = 3;
//	int b = 5;
//	int c = a^b;//���Ǵη��������
//	//���ļ�����ɣ�
//	//��Ӧ�Ķ�����λ��ͬ����Ϊ0
//	//��Ӧ�Ķ�����Ϊ���죬��Ϊ1
//	//011
//	//101
//	//110---6
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	//�Ƶģ�2���ƣ�λ������
//	//<<����
//	//>>����
//	int a = 1;//����1ռ4���ֽ�-32bitλ
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
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//����һ�����10���������ֵ�����
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\t", arr[i]);
//		i++;
//	}
//	//printf("%d\n", arr[4]);//�±�ķ�ʽ����Ԫ��
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
//	////const-������
//	//const int num = 4;//const ���εĳ�����
//	//printf("%d\n", num);
//	//num = 8;
//	//printf("%d\n", num);
//	const int n = 10;//n�Ǳ����������г����ԣ���ΪnΪ������
//	int arr[10] = { 0 };
//
//	return 0;
//}
//#define MAX 10 //�����ֳ���������ı�ʶ������
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}
//4��ö�ٳ���-һһ�о� eg.�Ա��С�Ů�����ܣ� ��ԭɫ�������������ڣ�����������
//ö�ٹؼ���-enum
//enum sex
//{
//	male,
//	female,
//	secret
//};
//int main()
//{
//	enum sex s = female;	//male,female,secret--ö�ٳ���
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
//	//blue = 6;err,�������޸�ö�ٳ���
//	printf("%d\n", color);
//	return 0;
//}
//�ַ����� char
//�ַ������� 
//int main()
//{
//	//"hello bit";
//	//"abcde";
//	//"";//���ַ���
//	char arr1[]="abc";//����  "abc"-'a','b','c','\0'
//	char arr2[] = { 'a', 'b', 'c',0 };//   '\0'�ַ����Ľ�����־  '\0'-0   'a'-97 ���ݴ����������ڼ������
//	//ASCII ���� 
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' ,'0',0};
//	printf("%d\n", strlen(arr1));//strlen�ַ�������
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
//	//printf("c:\\test\\32\\test.c");//	\tˮƽ�Ʊ��
//	//printf("%c\n",'\'');//%C--��ӡһ���ַ�
//	printf("%s\n", "\"");
//	return 0;
//}
#include<string.h>
//int main()
//{
//	printf("%d\n", strlen("c:\test\328\test.c"));//\32--32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ� 
//	//32----10���ƣ�26��ΪASCII��ֵ����Ӧ���ַ� 
//	//printf("%c\n", '\132');//132--Z
//	printf("%c\n", '\x61');//\xdd 16���ƣ�61---97--a 
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);//1/0
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("�ؼ�������\n");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("����һ�д���%d\n",line);
//		line++;
//	}
//	if (line>=2000)
//		printf("�õ�offer\n");
//	return 0;
//}