#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct station
{
	char name[20];
	struct station *next;
}station;

void main()
{

	station *first = (station*)malloc(sizeof(station));
	first->next = NULL;
	strcpy(first->name, "����");
	
	station *second = (station*)malloc(sizeof(station));
	second->next = NULL;
	strcpy(second->name, "����");
	first->next = second;
	
	station *third = (station*)malloc(sizeof(station));
	third->next = NULL;
	strcpy(third->name, "�Ͻ��׸���");
	second->next = third;
	
	station *print = first;
	while(print != NULL)
	{
		if (print->next != NULL)
		{
			printf("%s -> ",print->name);
		}
		else
		{
			printf("%s",print->name);
		}
		print = print->next;
	}
}
