#include <stdio.h>
#include <stdbool.h>
#define boyut 10


int ust = 0, yigin[boyut];//stack yapisini dizide gerçekleþtireceðiz.

bool bosMu()
{
	if(ust == 0)
	{
		printf("stack bostur.\n");
		return true;
	}
	else return false;
}

bool doluMu()
{
	if(ust == 10)
	{
		printf("stack doludur.\n");
		return true;
	}
	else return false;
}

void diziyi_yazdir()
{
	int i =0;
	
	for(;i < 10; i++)
	{
		printf("%d ", yigin[i]);
	}
	printf("\n\n");
}

void push(int veri)
{
	if(doluMu()) printf("bu veriyi ekleyemezsin --> %d\n", veri);
	else
	{
		printf("\n");
		printf("bu deger eklendi --> %d\n", veri);
		yigin[ust] = veri;
		ust++;
	}
	printf("(ph)yeni dizi:\n");
	diziyi_yazdir();
}

void pop()
{
	if(bosMu()) printf("hic veri yok.\n");
	else
	{
		printf("bu deger alindi --> %d\n", yigin[ust - 1]);
		ust--;
		yigin[ust] = 0;
	}
	printf("(pp)yeni dizi:\n");
	diziyi_yazdir();
}

void peek()
{
	if(bosMu()) printf("gosterilecek hic veri yok.\n");
	else printf("(pk)stack icindeki en ustteki eleman --> %d\n", yigin[ust - 1]);
}

void count()
{
	if(bosMu()) printf("0 tane veri var.\n");
	else printf("%d tane veri var.\n", ust);
}
int main()
{
	count();
	peek();
	push(4);
	push(8);
	push(15);
	count();
	peek();
	push(16);
	push(23);
	push(42);
	push(13);
	peek();
	push(97);
	push(6);
	push(14);
	count();
	push(25);
	push(40);
	pop();
	pop();
	peek();
	
}
