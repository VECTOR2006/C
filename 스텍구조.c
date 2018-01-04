#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
	int val;
	struct stack *next;
}a;

a *fir, *add;

void setup()
{
	fir = (a*)malloc(sizeof(a));
	fir->next = NULL;
	fir->val = 0;
}

void del()
{
	a *del = fir->next;
	fir->next = del->next;
	free(del);
}
void print()
{
	a *print = fir->next;
	while(print->next != NULL)
	{
		printf("%d->",print->val);
		print = print->next;
	}
	printf("\n");
}
void plus(int value)
{
	add = (a*)malloc(sizeof(a));
	add->next = fir->next;
	fir->next = add;
	add->val = value;
}

void main()
{
	setup();
	int i;
	for ( i=0;i<5;i++)
	{
		plus(i);
	}
	print();
	
	del();
	print();
	del();
	print();
}
