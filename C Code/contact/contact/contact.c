#include"contact.h"

void initcontact(contact*con)
{
	assert(con);
	con->PeoInfo = (people*)malloc(3*sizeof(people));
	if (con->PeoInfo == NULL)
	{
		perror("initcontact::malloc");
		exit(EXIT_FAILURE);
	}
	con->size = 0;
	con->capacity = 3;
}
int chackcapacity(contact* con)
{
	assert(con);
	if ((con->size) == (con->capacity))
	{
		people *t = (people*)realloc(con->PeoInfo, sizeof(people)*(con->capacity + 2));
			if (t == NULL)
			{
				return 0;
			}
			else
			{
				con->PeoInfo = t;
				con->capacity += 2;
				printf("增容成功\n");
				return 1;
			}
	}
	return 1;
}
void addition(contact *con)
{
	assert(con);
	if (chackcapacity(con) == 0)
	{
		printf("增容失败\n");
		return;
	}
	printf("请输入姓名\n");
	scanf("%s", &con->PeoInfo[con->size].name);
	printf("请输入性别\n");
	scanf("%s", &con->PeoInfo[con->size].sex);
	printf("请输入年龄\n");
	scanf("%d", &con->PeoInfo[con->size].age);
	printf("请输入电话\n");
	scanf("%s", &con->PeoInfo[con->size].tele);
	printf("请输入住址\n");
	scanf("%s", &con->PeoInfo[con->size].address);
	con->size++;
	
}
void display(contact* con)
{
	assert(con);
	int i = 0;
	printf("%10s\t%5s\t%5s\t%15s\t%12s\n", "姓名", "年龄", "性别", "地址", "电话");
	for (i = 0; i < con->size; i++)
	{
		printf("%10s\t%5s\t%5d\t%15s\t%12s\n", con->PeoInfo[i].name, con->PeoInfo[i].sex, con->PeoInfo[i].age, con->PeoInfo[i].tele, con->PeoInfo[i].address);
	}
}
void DestroyContact(contact *con)
{
	assert(con);
	con->capacity = 0;
	con->size = 0;
	free(con->PeoInfo);
	con = NULL;
	printf("成功退出\n");
}
int search(contact *con,char* p)
{
	assert(con);
	int i = 0;
	for (i = 0; i < con->size; i++)
	{
		if (strcmp(con->PeoInfo[i].name, p) == 0)
		{
			return i;
		}
	}
	return -1;
}
void search_by_name(contact *con)
{
	assert(con);
	char input[NAME_MAX] = {0};
	int i = 0;
	printf("请输入要查询的姓名\n");
	scanf("%s", input);
	int t = search(con, input);
	if ( t!= -1)
	{
		printf("%10s\t%5s\t%5s\t%15s\t%12s\n", "姓名", "年龄", "性别", "地址", "电话");
		printf("%10s\t%5s\t%5d\t%15s\t%12s\n", con->PeoInfo[t].name, con->PeoInfo[t].sex, con->PeoInfo[t].age, con->PeoInfo[t].tele, con->PeoInfo[t].address);
	}
	else
	{
		printf("没找到\n");
	}
	/*for (i = 0; i < con->size; i++)
	{
		if (strcmp(con->PeoInfo[i].name, input) == 0)
		{
			printf("姓名\t性别\t年龄\t电话\t住址\t\n");
			printf("%s\t%s\t%d\t%s\t%s\t\n", con->PeoInfo[i].name, con->PeoInfo[i].sex, con->PeoInfo[i].age, con->PeoInfo[i].tele, con->PeoInfo[i].address);
			return;
		}
	}*/
}
void delete_num(contact *con)
{
	assert(con);
	char input[NAME_MAX] = {0};
	int i = 0;
	int t = 0;//接收查找后的下标
	printf("请输入你要删除人的姓名\n");
	scanf("%s", input);
	t = search(con, input);
	if (t == -1)
	{
		printf("没有这个人\n");
	}
	else
	{
		if (t == con->size)
		{
			con->size--;
		}
		else
		{
			for (i = 0; i < (con->size); i++)
			{
				con->PeoInfo[t] = con->PeoInfo[t + 1];
			}
			con->size--;
			printf("删除成功\n");
		}
	}
}
void modify_con(contact*con)
{
	assert(con);
	char input[NAME_MAX] = { 0 };
	printf("请输入要修改的姓名\n");
	scanf("%s", input);
	int t = search(con, input);
	if (t != -1)
	{
		printf("请输入新的姓名\n");
		scanf("%s", &con->PeoInfo[t].name);
		printf("请输入新的性别\n");
		scanf("%s", &con->PeoInfo[t].sex);
		printf("请输入新的年龄\n");
		scanf("%d", &con->PeoInfo[t].age);
		printf("请输入新的地址\n");
		scanf("%s", &con->PeoInfo[t].address);
		printf("请输入新的电话\n");
		scanf("%s", &con->PeoInfo[t].tele);
		printf("修改成功\n");
	}
	else
	{
		printf("没有这个人\n");
	}
}
void empty_con(contact*con)
{
	assert(con);
	con->size = 0;
	con->capacity = 3;
	printf("清除成功\n");
}
void SaveToFile(contact *con)
{
	assert(con);
	int i = 0;
	FILE * pf=fopen("contact.txt", "w");
	if (pf == NULL)
	{
		perror("SaveToFile::fopen");
		return;
	}
	else
	{
		fprintf(pf, "%10s\t%5s\t%5s\t%15s\t%12s\n", "姓名", "年龄", "性别", "地址", "电话");
		for (i = 0; i < con->size; i++)
		{
			fprintf(pf, "%10s\t%5s\t%5d\t%15s\t%12s\n", con->PeoInfo[i].name, con->PeoInfo[i].sex, con->PeoInfo[i].age, con->PeoInfo[i].tele,con->PeoInfo[i].address);
		}
	}
	fclose(pf);
	pf = NULL;
	FILE *p = fopen("contact.bat", "wb");
	if (p == NULL)
	{
		perror("SaveToFile::fopen");
		return;
	}
	else
	{
		int i = 0;
		for (i = 0; i < con->size; i++)
		{
			fwrite(&con->PeoInfo[i], sizeof(people), 1, p);
		}
	}
	fclose(p);
	p = NULL;
	printf("保存成功\n");
}
void landing_con(contact*con)
{
	assert(con);
	FILE *pf = fopen("contact.bat", "rb");
	people tmp = { 0 };
	int i = 0;
	int c = 0;
	if (pf == NULL)
	{
		perror("landing_con::fopen");
		return;
	}
	else
	{
		while (fread(&tmp,sizeof(people),1,pf))
		{
			chackcapacity(con);
			con->PeoInfo[con->size] = tmp;
			con->size++;
		}
	}
	fclose(pf);
	pf = NULL;
	printf("加载完毕\n");
}
void sort_by_name(contact*con)
{
	assert(con);
	int i = 0;
	int j = 0;
	int n = con->size;
	people tmp;
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-i-1; j++)
		{
			if (strcmp(con->PeoInfo[j].name, con->PeoInfo[j + 1].name)>0)
			{
				tmp = con->PeoInfo[j];
				con->PeoInfo[j] = con->PeoInfo[j + 1];
				con->PeoInfo[j + 1] = tmp;
			}
		}
	}
	printf("排序完成\n");
}