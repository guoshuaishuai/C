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
//	int a = 10;//4���ֽ�
//	int* p = &a;//ȡ��ַ
//	//printf("%p\n", p);
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//	*p=20;//*-�����ò�����
//	printf("a=%d\n", a); 
//	//printf("%p\n", &a);//0099F970ʮ������
//
//	return 0;
//}
//1��static���ξֲ�����
//�ֲ��������������ڱ䳤
//2��static ����ȫ�ֱ���  
//�ı��˱�����������-�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ���û��ʹ����
//3��static���κ���
//Ҳ�Ǹı��˺�����������-��׼ȷ
//static ���κ����ı��˺�������������
//�ⲿ��������->�ڲ���������

//define �����ʶ������
//#define Max 100
//#define���Զ����-������
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
////��Ķ��巽ʽ
//#define MAX(X,Y)(X>Y?X:Y)
//int main()
//{
//	//int a = Max;
//	int a = 10;
//	int b = 20;
//	//����
//	int max=Max(a, b);
//	printf("max=%d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//    printf("MAX=%d\n", max);
//	return 0;
//}
//�����ⲿ����
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
//	//extern-�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val=%d\n", g_val);
//	return 0;
//}
//void test()
//{
//	static int a = 1;//a��һ����̬�ľֲ����� 
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
//	//auto int a = 10;//�ֲ�����-�Զ�����(ʡ��auto��
//	//typedef-���Ͷ���-�����ض���
//	//����-С��
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
//	//arr[4];//[]-�±����ò�����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//()-�������ò�����
//
//	return 0;
//}
//-2
//10000000000000000000000000000010-ԭ��
//11111111111111111111111111111101-����
//11111111111111111111111111111110-����
//& * . -> 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = a > b ? a : b;//����������--��ľ������
//	printf("max=%d\n", max);
///*	if (a > b)
//		max = a;
//	else
//		max = b;*/  
//	return 0;
//}
//int main()
//{
//	//�� 0  ��0 ������
//	//&&-�߼���
//	//||�߼���
//	int a = 0;
//	int b = 0;
//	//int c=a&&b;//1
//	int c = a || b;//1
//	printf("%d\n", c);//1  0
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;//double->intǿ������ת��
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++ -11  10
//	//int b = ++a;//ǰ��++����++����ʹ�� -  11  11
//	//int b = a--;//9,10
//	int b = --a;//9,9
//	printf("a=%d b=%d\n", a,b);
//	return 0;
//}
//int main()
//{
//	int a = 0;//����ռ��4���ֽڣ�32bitλ
//	int b = ~a;//b���з��ŵ����ͣ�
//	//~--����2���ƣ�λȡ�� 
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ��->����λ���䣬����λ��λȡ��->����->+1->����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//	//11111111111111111111111111111111-����
//	//11111111111111111111111111111110-����
//	//10000000000000000000000000000001-ԭ��-  -1
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
//	printf("%d\n", sizeof(arr));//24-���������С����λ���ֽ�
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
//		printf("�ϴ�ֵΪ��%d\n", num1);
//	else
//	{
//		printf("�ϴ�ֵΪ��%d\n", num2);
//	}
//	return 0;
//}
//int m = 20;
//int main()
//{
//	//�ַ����Ľ�����־��
//	//��\0'-ת���ַ�-ASII-0 
//	//0->����0
//	//'0'->�ַ���0->ASII-48
//	int m = 10;
//	printf("m=%d\n", m);//m=10
//	//EOF-end of file -�ļ�������־-  -1
//	return 0;
//}