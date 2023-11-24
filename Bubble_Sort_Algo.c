#include <stdio.h>


int bubble_sort(int deneme_dizisi[], int boyut)
{
	int i, j, temp;
	
	for(i = 0; i < boyut - 1; i++)
	{
		for(j = 0; j < boyut - i - 1; j++)
		{
			if(deneme_dizisi[j] < deneme_dizisi[j + 1])
			{
				temp = deneme_dizisi[j];
				deneme_dizisi[j] = deneme_dizisi[j + 1];
				deneme_dizisi[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int i, j, boyut, deneme_dizisi[boyut];
	
	printf("dizinin eleman sayisini girin..");scanf("%d", &boyut);
	
	for(i = 0; i < boyut; i++)
	{
		printf("\ndizinin %d. elemanini girin..", i + 1);
		scanf("%d", &deneme_dizisi[i]);
	}
	
	
	printf("\nsiralanacak dizi:\n");
	
	for(i = 0; i < 5; i++)
	{
		printf("%d ", deneme_dizisi[i]);
	}
	
	bubble_sort(deneme_dizisi, boyut);
	
	printf("\nsiralanmis dizi:\n");
	
	for(j = 0; j < 5; j++)
	{
		printf("%d ", deneme_dizisi[j]);
	}
	
	
}
