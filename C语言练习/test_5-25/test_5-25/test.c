#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//int a = 10;//������4���ֽڵĿռ�
//	////printf("%p\n", &a);
//	//int*p=&a;//p��һ������-ָ�����
//	////printf("%p\n", p);
//	//*p=20;//*-�����ò�����or��ӷ��ʲ�����
//	//printf("a=%d\n", a);
//	//double d = 3.14;
//	//double* pd = &d;
//	//printf("%d\n", sizeof(pd));//32λ-4 or 64λ-8
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	//printf("%lf\n", *pd);
//	printf("%d\n", sizeof(char*));//32λ-4 or 64λ-8
//	printf("%d\n", sizeof(short*));//32λ-4 or 64λ-8
//	printf("%d\n", sizeof(int*));//32λ-4 or 64λ-8
//	printf("%d\n", sizeof(double*));//32λ-4 or 64λ-8
//	return 0;
//}
//����һ���ṹ������
struct Book
{
	char name[20];//C���Գ������
	short price;//55
};
int main()
{
	//���ýṹ������-����һ�������͵Ľṹ����� 
	struct Book b1 = {"C���Գ������",55};
	struct Book* pb = &b1;
	strcpy(b1.name, "c++");//strcpy--string copy -�ַ�������-�⺯��-string.h
	printf("%s\n", b1.name);
	//����pb��ӡ�������ͼ۸�
	//.	�ṹ�����.��Ա
	//->�ṹ��ָ��->��Ա
	//printf("%s\n", pb->name);
	//printf("%d\n", pb->price);
	//printf("%s\n",(*pb).name);
	//printf("%d\n", (*pb).price);
	//printf("������%s\n", b1.name);
	//printf("�۸�%dԪ\n", b1.price);
	//b1.price = 15;
	//printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);
	return 0;
}