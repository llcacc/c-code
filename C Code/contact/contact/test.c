#define _CRT_SECURE_NO_WARNINGS 1

//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
//�������Ա����䡢�绰��סַ
//
//�ṩ������
//1.	�����ϵ����Ϣ
//2.	ɾ��ָ����ϵ����Ϣ
//3.	����ָ����ϵ����Ϣ
//4.	�޸�ָ����ϵ����Ϣ
//5.	��ʾ������ϵ����Ϣ
//6.	���������ϵ��
//7.	����������������ϵ��
//8. ������ϵ�˵��ļ�
//9. ������ϵ��
#include<stdio.h>
#include"contact.h"
void menu()
{
	printf("*******************************************\n");
	printf("*****1.��� 2.ɾ�� 3.���� 4.�޸� 5.��ʾ****\n");
	printf("*****6.��� 7.���� 8.���� 9.���� 0.�˳�****\n");
	printf("*******************************************\n");
}
enum
{
	quit,			//�˳�	
	add,			//���
	dele,			//ɾ��
	search,			//����
	modify,			//�޸�
	show,			//��ʾ
	empty,			//���
	sort,			//����
	save,			//����
	landing,		//����

};
int main()
{
	int input = 0;
	contact con;
	initcontact(&con);
	do{
		menu();
		printf("��ѡ����\n");
		scanf("%d", &input);
		switch (input)
		{
		case quit:
			DestroyContact(&con);
			break;
		case add:
			addition(&con);
			break;
		case dele:
			delete_num(&con);
			break;
		case modify:
			modify_con(&con);
			break;
		case search:
			search_by_name(&con);
			break;
		case show:
			display(&con);
			break;
		case empty:
			empty_con(&con);
			break;
		case sort:
			sort_by_name(&con);
			break;
		case save:
			SaveToFile(&con);
			break;
		case landing:
			landing_con(&con);
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
