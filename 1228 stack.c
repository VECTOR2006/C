#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct del_print_add
{
	int scan;
	int scan_num;
	struct del_print_add *next;
}a;

a *first, *add;

void del()
{
	del = first;
	while(del != NULL)
	{
		if (del->next == NULL)
		{
			free(del);
		}
	}
}
void print()
{
	print = first;
	while(print != NULL)
	{
		if (print->next == NULL)
		{
			printf("%d\n",print->scan);
		}
	}
}
void plus()
{
	a add = (a*)malloc(sizeof(a));
	add->next=NULL;
	add->scan_num=1;
	scanf("%d",&add->scan);
}
void job()
{
	int b;
	a scan = (a*)malloc(sizeof(*a));
	printf("1.삭제\n2.출력\n3.추가");
	scanf("%d",&b);
	switch(b)
	{
		case 1 :
			del();
			break;
		case 2 :
			print();
			break;
		case 3 :
			plus();
			break;
	}
	//mPhg X while(1) 
}

void main()
{
		job();
}
