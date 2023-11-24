#include <stdio.h>
#include <stdbool.h>
#define boyut 10

int bas = 0, kuyruk = 0, queue[boyut];//queue yapisini dizide gerçeklestirecegiz.
bool bosMu()
{
	if(kuyruk == 0)
	{
		printf("queue bostur.\n");
		return true;
	}
	else return false;
}

bool doluMu()
{
	if(kuyruk == 10)
	{
		printf("queue doludur.\n");
		return true;
	}
	else return false;
}

void diziyi_yazdir()
{
	int i = 0;
	for(; i < 10; i++)
	{
		printf("%d ", queue[i]);
	}
	printf("\n");
}

void push(int veri)
{
	if(doluMu()) printf("bu veri eklenemiyor --> %d\n", veri);
	
	else
	{
		printf("\nbu veri eklendi --> %d\n", veri);
		queue[kuyruk] = veri;
		kuyruk++;
		/*printf("\nbu veri eklendi --> %d\n", veri);
		queue[kuyruk] = veri;
		kuyruk++;  bu kisim sola kaydirilmayan bir queue yapisina ait.*/
	}
	printf("(ph)yeni dizi:\n");
	diziyi_yazdir();
}

void pop()
{
	int i = 0;
	if(bosMu()) printf("hic veri yok.\n");
	
	else
	{
		kuyruk--;
		printf("\nbu veri alindi --> %d\n", queue[bas]);
		for(; i < 10; i++)
		{
			queue[i] = queue[i + 1];
		}
		queue[9] = 0;
		
		/*printf("\nbu veri alindi --> %d\n", queue[bas]);
		queue[bas] = 0;
		bas++;  bu kisim sola kaydirilmayan bir queue yapisina ait.*/
	}
	printf("(pp)yeni dizi:\n");
	diziyi_yazdir();
}
int main()
{
	push(8);
	push(56);
	push(23);
	pop();
	push(90);
	push(45);
	push(1);
	pop();
	pop();
	push(37);
	push(84);
	push(30);
	push(3);
	push(71);
	push(61);
	push(12);
	pop();
	push(34);
	push(2);
	pop();
}
