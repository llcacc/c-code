#include"SeqList.h"

void ShowSeqList(SeqList* p)
{
	int i = 0;
	for (i = 0; i < p->size; i++)
	{
		printf("%d ", p->array[i]);
	}
	printf("\n");
}
int main()
{
	SeqList s;
	SeqListInit(&s);
			
	SeqListPushBack(&s, 0);						//β��
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 6);
	ShowSeqList(&s);
	//SeqListRemoveAll(&s, 2);  // �Ƴ�˳���������ֵΪdata��Ԫ�� 
	//ShowSeqList(&s);
	//printf("β��0 1 2 3 4 5 6\n");
	//ShowSeqList(&s);
	//SeqListPopback(&s);							//βɾһλ
	//printf("βɾ\n");
	//ShowSeqList(&s);
	//SeqListPushFront(&s, 9);					//ͷ�� 9
	//printf("ͷ�� 9\n");
	//ShowSeqList(&s);
	//SeqListPopFront(&s);
	//printf("ͷɾ\n");
	//ShowSeqList(&s);
	//SeqListInsert(&s, 2, 10);					//�ڵ��±�Ϊn��λ�ò���data
	/*ShowSeqList(&s);*/
	//SeqListDelete(&s, 0);							//ɾ����n���±����
	//ShowSeqList(&s);
	//int find = SeqListFind(&s, 1);
	//if (find >= 0)
	//	printf("1���±�Ϊ%d\n", find);
	//else
	//	printf("û�ҵ�\n");
	//SeqListRemove(&s, 1);					//�Ƴ�һ����һ�γ��ֵ���
	//printf("�Ƴ�˳����е�һ��ֵΪ1��Ԫ��\n");
	//ShowSeqList(&s);
	//printf("��ЧԪ�ظ���Ϊ%d\n",SeqListSize(&s));
	//printf("����Ϊ%d\n", SeqListCapacity(&s));
	//int ret = SeqListEmpty(&s);
	//if (0 == ret)
	//{
	//	printf("Ϊ��\n");
	//}
	//else
	//{
	//	printf("��Ϊ��\n");
	//}
	//printf("��һ��Ԫ��Ϊ%d\n", SeqListFront(&s));
	//printf("���һ��Ԫ��Ϊ%d\n", SeqListBack(&s));
	SeqListDestroy(&s);
	return 0;
}