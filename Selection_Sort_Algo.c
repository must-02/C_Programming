#include <stdio.h>
#include <stdlib.h>

int selection_sort(int deneme_dizisi[], int boyut)
{
	int i, j, en_kucuk, temp;
	printf("\nSiralanacak dizi:\n");
	for(i = 0; i < boyut; i++)
	{
		printf("%d ", deneme_dizisi[i]);
	}
	
	for(i = 0; i < boyut - 1; i++)
	{
		en_kucuk = i;
		
		for(j = i + 1; j < boyut; j++)
		{
			if(deneme_dizisi[en_kucuk] > deneme_dizisi[j])
			{
				en_kucuk = j;
			}
		}
		
		temp = deneme_dizisi[i];
		deneme_dizisi[i] = deneme_dizisi[en_kucuk];
		deneme_dizisi[en_kucuk] = temp;
	}
	
	printf("\nSiralanmis dizi:\n");
	for(i = 0; i < boyut; i++)
	{
		printf("%d ", deneme_dizisi[i]);
	}
}
int main()
{	
	int array_size, i;
    printf("Siralanacak dizinin eleman sayisi: ");
    scanf("%d", &array_size);

    int *array = (int*) malloc(sizeof(int) * array_size);
    if (array == NULL) {
        return 0;
    }

    printf("\n");
    for (i = 0; i < array_size; i++) {
        printf("Dizinin %d. elemanini girin: ", i + 1);
        scanf("%d", array + i);
    }

    selection_sort(array, array_size);
    free(array);
	/*int i, boyut, dizi[boyut];
	printf("siralanacak dizinin eleman sayisini girin..");
	scanf("%d", &boyut);
	
	for(i = 0; i < boyut; i ++)
	{
		printf("\ndizinin %d. elemanini girin..", i + 1);
		scanf("%d", &dizi[i]);
	}
	
	selection_sort(dizi, boyut);

	return 0;*/
		  //Temporary(geçici) bunu þöyle kullanacaðýz --> 2 sayiyi yer deðiþtirirken bir tanesini bunda tutacaðýz.
		  //Duvar pasý gibi bir þey.
	/*int i, j, temp, en_kucuk, deneme_dizisi[] = {64, 25, 12, 22, 11, 9};
	
	printf("Siralanacak dizi:\n");
	for(i = 0; i < boyut; i++)
	{
		printf("%d ", deneme_dizisi[i]);
	}
	
	for(i = 0; i < boyut - 1; i++)
	{
		en_kucuk = i;
		
		for(j = i + 1; j < boyut; j++)
		{
			if(deneme_dizisi[en_kucuk] > deneme_dizisi[j])
			{
				en_kucuk = j;
			}
		}
		
		temp = deneme_dizisi[i];
		deneme_dizisi[i] = deneme_dizisi[en_kucuk];
		deneme_dizisi[en_kucuk] = temp;
	}
	
	printf("\nSiralanmis dizi:\n");
	for(i = 0; i < boyut/2; i++)
	{
		int tmp = deneme_dizisi[i];
		deneme_dizisi[i] = deneme_dizisi[boyut - i - 1];
		deneme_dizisi[boyut - i - 1] = tmp;
	}
	for(i = 0; i < boyut; i++)
	{
		printf("%d ", deneme_dizisi[i]);
	}*/
}
