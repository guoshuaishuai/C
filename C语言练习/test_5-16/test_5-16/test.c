//����һ����stdio.h���ļ�
//std-��׼ standard input output
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){ 
	//δ�����ı�ʶ
	//����   ȫ�ֱ���������������������
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
//	//�����������ĺͣ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;  //C�����﷨�涨����������Ҫ�ڵ�ǰ��������ǰ��
//	//��������-ʹ�����뺯��scanf
//	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
//	
//	sum = num1 + num2; 
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int a = 20;
//int main(){
//	int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-���ײ������
//	//���ֲ�������ȫ�ֱ�����ͬʱ���ֲ��������ȡ�
//	printf("%d\n",a);
//	return 0;
//}
//int num2 = 20;//ȫ�ֱ���-�����ڴ���飨{}��֮��ı���
//int main()
//{
//	int num1 = 10;//�ֲ���������֮ 
//	return 0;
//}
//int main()
//int�����͵���˼ mainǰ���int��ʾmain�������÷���һ������ֵ
//������-��������-main�������ҽ���һ��  
//�⺯��-C���Ա����ṩ�ĺ��������˵Ķ���-���к���
//#include
//char �ַ�����
//int main()
//{
	//char ch = 'A';//�ڴ�
	//printf("%c\n",ch);//%C--��ӡ�ַ���ʽ������
	////20
	//int age = 20;
	//printf("%d\n",age);//%d--��ӡ����ʮ��������
	//long num = 100;
	//printf("%d\n", num);
	//float f = 0.5;
	//printf("%f\n", f);
	//double d = 3.14;//˫����
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
	//����=20
//	short age = 20;//���ڴ�����2���ֽڣ��������20
//	float weight = 95.6;//��Ϊ95.6��double���͵����ݣ�ת��Ϊfloat�ͱ������Լ���f,���ڴ�����4���ֽڴ��С��
//	return 0;
//}
//{
//	printf("hello world\n"	);
//	printf("hello world\n");
//	printf("hello world\n");
//	printf("hello ����\n");
//	printf("hello world\n");
//	printf("hello world\n");
//	return 0;//����������
//}
//void main(){}  ����д����ʱ
//%d-��ӡ���� %c-��ӡ�ַ�   %f-��ӡС��-��������  %p-�Ե�ַ����ʽ��ӡ  %x-��ӡ16��������  %o-��������