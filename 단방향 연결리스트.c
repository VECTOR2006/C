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
	strcpy(first->name, "서울");
	
	station *second = (station*)malloc(sizeof(station));
	second->next = NULL;
	strcpy(second->name, "뉴욕");
	first->next = second;
	
	station *third = (station*)malloc(sizeof(station));
	third->next = NULL;
	strcpy(third->name, "암스테르담");
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
