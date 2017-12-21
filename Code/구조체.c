#include<stdio.h>
#include<time.h>
void A_random(int *a)
{
	printf("A = ");
	int i;
	for (i=0;i<10;i++)
	{
		a[i] = rand() % 99 + 1;
		printf("%d ",a[i]);
	}
	printf("\n");
}

void B_copy(int *a,int *b)
{
	printf("B = ");
	int i;
	for (i=0;i<10;i++)
	{
		b[i]=a[i];
		printf("%d ", b[i]);
	}
	printf("\n");
}

void C_AB(int *a,int *b,int *c)
{
	printf("C = ");
	int i;
	for (i=0;i<10;i++)
	{
		c[i]=a[i]+b[i];
		printf("%d ",c[i]);
	}
	printf("\n");
}

int main()
{
	srand((unsigned)time(NULL));
	
	int A[10];
	int B[10];
	int C[10];
	
	A_random(A);
	B_copy(A,B);
	C_AB(A,B,C);
}

/*

*/

