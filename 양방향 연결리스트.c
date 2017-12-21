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
	
	strcpy(first->name,"서울");
	strcpy(last->name,"부산");
	
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
	printf("역 이름을 입력하세요 : ");
	scanf("%s",add->name);
}

void del_station()
{
	char name[20];
	printf("삭제할 역이름 입력하세요 : ");
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
		printf("0. 종료 \n1. 추가\n2. 삭제\n3. 검색\n4. 전체노선\n");
		printf("메뉴선택 : ");
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
				printf("검색할 역 입력");
				scanf("%s",station);
				search_station(station);
				break;
			case 4 : 
				print();
				break;
		}
		
	}
}

