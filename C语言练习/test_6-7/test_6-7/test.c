#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int get_max(int x,int y)
//{
//	if (x>y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//void swap(int x,int y)//void��ʾû�з���ֵ���Զ��庯��
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}//������ɽ���
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa= *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	//swap(a, b);
//	swap2(&a, &b);
//	/*int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//paָ�����
//	*pa=20;//�����ò���
//	printf("a=%d\n", a);  
//	return 0;
//}
//����������1��������������0��
#include<math.h>
//int is_prime(int n)
//{
//	int m = 0;
//	//for ( m = 2; m < n; m++)//2~n-1
//	for (m = 2; m <= sqrt(n);m++)
//	{
//		if (n%m == 0)
//			return 0;
//		//else
//		//	return 1;���ǲ��Եģ�̫����,����9
//	}
//	return 1;
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i =0;
//	for ( i = 100; i <=200; i++)
//	{
//		//�ж�i�Ƿ�������
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for ( year = 2000; year <= 3000; year++)
//	{
//		//�ж��Ƿ�������
//		if (1==is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//					arr��������һ��ָ��
//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ���±�
//		if (arr[mid]<k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//���ֲ���-��������������Ҿ������
//	//����ҵ��˷��أ���������±꣬�Ҳ����ķ���-1
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 17;
//	//					arr���ݹ�ȥ������Ԫ�صĵ�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret =binary_search(arr, k,sz);
//	if (ret==-1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n", ret);
//	}
//	return 0;
//}
//void add(int* p)//��һ��������ı亯���ⲿ�ı���ʱ---����ַ
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num=%d\n", num);//1
//	add(&num);
//	printf("num=%d\n", num);//2
//	add(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//4321?printf���ص��Ǵ�ӡ���ַ��ĸ���
//	return 0;
//}
int main()
{
	int a = 10;
	int b = 20;
	//��������
	int sum = 0;
	sum = add(a, b);
	printf("%d\n", sum);
	return 0;
}