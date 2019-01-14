#define _CRT_SECURE_NO_WARNINGS 1

//通讯录可以用来存储1000个人的信息，每个人的信息包括：
//姓名、性别、年龄、电话、住址
//
//提供方法：
//1.	添加联系人信息
//2.	删除指定联系人信息
//3.	查找指定联系人信息
//4.	修改指定联系人信息
//5.	显示所有联系人信息
//6.	清空所有联系人
//7.	以名字排序所有联系人
//8. 保存联系人到文件
//9. 加载联系人
#include<stdio.h>
#include"contact.h"
void menu()
{
	printf("*******************************************\n");
	printf("*****1.添加 2.删除 3.查找 4.修改 5.显示****\n");
	printf("*****6.清空 7.排序 8.保存 9.加载 0.退出****\n");
	printf("*******************************************\n");
}
enum
{
	quit,			//退出	
	add,			//添加
	dele,			//删除
	search,			//查找
	modify,			//修改
	show,			//显示
	empty,			//清空
	sort,			//排序
	save,			//保存
	landing,		//加载

};
int main()
{
	int input = 0;
	contact con;
	initcontact(&con);
	do{
		menu();
		printf("请选择功能\n");
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
			printf("请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
