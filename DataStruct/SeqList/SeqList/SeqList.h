#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
typedef int DataType;


typedef struct SeqList
{
	DataType* array;
	int size;
	int capacity;
}SeqList;


void SeqListPushBack(SeqList* p, DataType data);//β��
void SeqListInit(SeqList* p);//��ʼ��
void SeqListPopback(SeqList* p);//βɾ
void SeqListPushFront(SeqList* p, DataType Data);//ͷ��
void SeqListPopFront(SeqList* p);//ͷɾ
void SeqListInsert(SeqList* p, int pos, DataType data);//�����
void SeqListDestroy(SeqList*p);//����˳���
void SeqListDelete(SeqList* p, int pos);//����ɾ
int SeqListFind(SeqList* p, DataType data);//����data���±�
void SeqListRemove(SeqList* p, DataType data);//�Ƴ�˳����е�һ��ֵΪdata��Ԫ��
void SeqListRemoveAll(SeqList* p, DataType data);// �Ƴ�˳���������ֵΪdata��Ԫ�� 
 
int SeqListSize(SeqList* p);// ��ȡ˳�����ЧԪ�ظ���

int SeqListCapacity(SeqList* p);// ��ȡ˳�������� 
 
int SeqListEmpty(SeqList *p);// ���˳����Ƿ�Ϊ��

DataType SeqListFront(SeqList *p);// ��ȡ˳����е�һ��Ԫ�� 


DataType SeqListBack(SeqList* p);// ��ȡ˳��������һ��Ԫ�� 