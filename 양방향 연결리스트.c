#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//malloc = memory + allocate;
typedef struct station
{
	char name[20];
	struct station *prev;
	struct station *next;
}station;

station *first, *last, *add;

void init()
{
	first = (station*)malloc(sizeof(station));
	last = (station*)malloc(sizeof(station));
	
	strcpy(first->name,"����");
	strcpy(last->name,"�λ�");
	
	first->next = last;
	last->next = NULL;
	
	first->prev = NULL;
	last->prev = first;
}

void add_station(station *add)
{
	add = (station*)malloc(sizeof(station));
	add->next = last;
	add->prev = last->prev;
	last->prev->next = add;
	last->prev = add;
	printf("�� �̸��� �Է��ϼ��� : ");
	scanf("%s",add->name);
}

void del_station()
{
	char name[20];
	printf("������ ���̸� �Է��ϼ��� : ");
	scanf("%s",&name); 
	station *del; 
	del = first;
	while(del != NULL)
	{
		if (strcmp(del->name,name) == 0)
		{
			free(del);
		}
		del = del->next;
	}
}

void search_station (char *name)
{
	
}

void print()
{
	station *print; 
	print = first;
	while(print != NULL)
	{
		if (print != NULL)
		{
			printf("%s <-> ",print->name);
		}
		else
		{
			printf("%s",print->name);
		}
		print = print->next;
	}
}

void main()
{
	int choose;
	char station[20];
	while(choose != 0)
	{
		printf("0. ���� \n1. �߰�\n2. ����\n3. �˻�\n4. ��ü�뼱\n");
		printf("�޴����� : ");
		scanf("%d",&choose);
		switch(choose)
		{
			case 1 : 
				add_station(add);
				break;
			case 2 : 
				del_staton();
				break;
			case 3 : 
				printf("�˻��� �� �Է�");
				scanf("%s",station);
				search_station(station);
				break;
			case 4 : 
				print();
				break;
		}
		
	}
}

