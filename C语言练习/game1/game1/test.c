#define  _CRT_SECURE_NO_WARNINGS 1
//����������
#include<stdio.h>
#include"game.h"
void menu()
{
	printf("********************************\n");
	printf("******** 1.play	0.exit *********\n");
	printf("********************************\n");
}
//��Ϸ�������㷨ʵ��
void game()
{
	char ret = 0;
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	initboard(board,ROW, COL);
	//��ӡ����
	displayboard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		playermove(board,ROW,COL);
		displayboard(board, ROW, COL);//��ӡ����
		//�ж�����Ƿ�Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		computermove(board,ROW,COL);
		displayboard(board, ROW, COL);//��ӡ����
		//�жϵ����Ƿ�Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   
//   |   |   
 
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}