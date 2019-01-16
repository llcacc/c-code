#include"SeqList.h"
void SeqListInit(SeqList* p)				//��ʼ��
{
	assert(p);
	p->array = (DataType*)malloc(sizeof(DataType) * 3);
	if (NULL == p->array)
	{
		assert(0);
		return;
	}
	else
	{
		p->capacity = 3;
		p->size = 0;
	}
}
void ChackCapacity(SeqList* p)				//�������
{
	int newcapacity = p->capacity * 2;
	if (p->size == p->capacity)
	{
		DataType *temp = (DataType*)malloc(sizeof(DataType)*newcapacity);
		if (NULL == temp)
		{
			assert(0);
			return;
		}
		else
		{
			memcpy(temp,p->array,p->size*sizeof(DataType));
			free(p->array);
			p->array = temp;
			p->capacity = newcapacity;
		}
	}
}
void SeqListPushBack(SeqList* p,DataType data)				//β��
{
	assert(p);
	ChackCapacity(p);
	p->array[p->size] = data;
	p->size++;
}
void SeqListPopback(SeqList* p)				//βɾ
{
	assert(p);
	if (0 == p->size)
	{
		return;
	}
	else
	{
		p->size--;
	}
}
void SeqListPushFront(SeqList* p,DataType Data)			//ͷ��
{
	assert(p);
	ChackCapacity(p);
	int i = 0;
	if (p->size != 0)
	{
		for (i = p->size - 1; i >= 0; i--)
		{
			p->array[i + 1] = p->array[i];
		}
		p->array[0] = Data;
		p->size++;
	}
	else
	{
		p->array[p->size] = Data;
		p->size++;
	}
}
void SeqListPopFront(SeqList* p)			//ͷɾ
{
	assert(p);
	int i = 0;
	if (0 == p->size)
	{
		return;
	}
	else
	{
		for (i = 1; i < p->size; i++)
		{
			p->array[i-1] = p->array[i];
		}
		p->size--;
	}
}
void SeqListInsert(SeqList* p,int pos,DataType data)		//��posλ�ò���һ����
{
	assert(p);
	if (pos >= 0 && pos <= p->size)
	{
		int i = 0;
		for (i = p->size; i > pos; i--)
		{
			p->array[i] = p->array[i - 1];
		}
		p->array[pos] = data;
		p->size++;
	}

}
void SeqListDelete(SeqList* p, int pos)					//ɾ��posλ�õ���
{
	assert(p);
	if (pos >= 0 && pos < p->size)
	{
		int i = 0;
		for (i = pos; i < p->size; i++)
		{
			p->array[i] = p->array[i+1];
		}
		p->size--;
	}
}
void SeqListDestroy(SeqList*p)
{
	assert(p);
	p->size = 0;
	p->capacity = 0;
	free(p->array);
	p->array = NULL;
}
int SeqListFind(SeqList* p, DataType data)
{
	assert(p);
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		if (data == p->array[i])
		{
			return i;
		}
	}
	return -1;
}
void SeqListRemove(SeqList* p, DataType data)//�Ƴ�˳����е�һ��ֵΪdata��Ԫ�� 
{
	assert(p);
	int i = 0;
	int pos = 0;
	for (i = 0; i < p->size; i++)
	{
		if (p->array[i] == data)
		{
			pos = i;
			for (i = pos; i < p->size; i++)
			{
				p->array[i] = p->array[i+1];
			}
			p->size--;
			break;
		}
			
	}	
}
int SeqListSize(SeqList *p)			//������ЧԪ�ظ���
{
	return p->size;
}
int SeqListCapacity(SeqList* p)			//�����ڴ�
{
	return p->capacity;
}
int SeqListEmpty(SeqList *p)		//�Ƿ�Ϊ��
{
	if (p->size == 0)
	{
		return 0; //0Ϊ��
	}
	else
		return 1;
}
DataType SeqListFront(SeqList *p)			//���ص�һ��Ԫ��
{
	return p->array[0];
}
DataType SeqListBack(SeqList* p)			//�������һ��Ԫ��
{
	return p->array[p->size-1];
}
void SeqListRemoveAll(SeqList* p, DataType data)		//�Ƴ�˳���������ֵΪdata��Ԫ�� 
{
	assert(p);
	int i = 0;
	int pos = 0;
	int count = 0;
	for (i = 0; i < p->size; i++)
	{
		if (p->array[i] == data)
			count++;
	}
	while (count)
	{
		for (i = pos; i < p->size; i++)
		{
			if (p->array[i] == data)
			{
				pos = i;
				for (i = pos; i < p->size; i++)
				{
					p->array[i] = p->array[i+1];
				}
				p->size--;
				break;
			}
		}
		
		count--;
	}
}