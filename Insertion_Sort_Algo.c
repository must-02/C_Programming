#include <stdio.h>

int insertion_sort(int deneme_dizisi[], int boyut)
{
	int i, h, temp, j;
	for(i = 1; i < boyut; i++)
	{
		temp = deneme_dizisi[i];
		h = i - 1;
		
		while(h >= 0 && deneme_dizisi[h] < temp)
		{
			deneme_dizisi[h + 1] = deneme_dizisi[h];
			h--; 
		}
		
		deneme_dizisi[h + 1] = temp;
	}
	
	printf("\nsiralanmis dizi:\n");
	for(j = 0; j < boyut; j++)
	{
		printf("%d ", deneme_dizisi[j]);
	}
}
int main()
{
	int i, boyut, deneme_dizisi[boyut];
	
	printf("dizinin eleman sayisini girin..");scanf("%d", &boyut);
	
	for(i = 0 ; i < boyut; i++)
	{
		printf("\ndizinin %d. elemanini girin..", i + 1);
		scanf("%d", &deneme_dizisi[i]);
	}
	
	printf("\nsiralanacak dizi:\n");
	for(i = 0; i < boyut; i++)
	{
		printf("%d ", deneme_dizisi[i]);
	}
	
	insertion_sort(deneme_dizisi, boyut);
}
