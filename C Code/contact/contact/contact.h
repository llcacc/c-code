#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#define USER_MAX 1000
#define NAME_MAX 20
#define ADDRE_MAX 20
#define TELE_MAX 12



//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������
//�������Ա����䡢�绰��סַ
typedef struct people
{
	char name[NAME_MAX];
	char sex[5];
	short age;
	char tele[TELE_MAX];
	char address[ADDRE_MAX];
	
}people;

typedef struct contact
{
	people*	PeoInfo;
	int size;
	int capacity;
}contact;
void addition(contact *con);
void initcontact(contact*con);
void display(contact*con);
void chackcapcity(contact* con);
void search_by_name(contact *con);
void delete_num(contact *con);
void modify_con(contact*con);
void empty_con(contact*con);
void quit_con(contact* con);
void SaveToFile(contact *con);
void landing_con(contact*con);
void DestroyContact(contact *con);
void sort_by_name(contact*con);
