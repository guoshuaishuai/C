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
	//blue = 6;err,�������޸�ö�ٳ���
	printf("%d\n", color);
	return 0;
}