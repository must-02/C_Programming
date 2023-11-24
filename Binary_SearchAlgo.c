#include <stdio.h>
#define dizi_boyutu 10
//Binary Search Algorithm denemesi gibi bir þey

int bin_sear(int deneme_dizisi[], int ilk_index, int son_index, int aranan_sayi);
/*{
	//bu iterasyonlu bir örnek yani döngü ile yapýlmýþ
	while(ilk_index <= son_index)
	{
		int orta_index = (ilk_index + son_index) / 2;

		if(deneme_dizisi[orta_index] == aranan_sayi)
		{
			printf("aranan sayi %d. bolmededir\n", orta_index + 1);
			return -1;
		}

		if(deneme_dizisi[orta_index] < aranan_sayi)
		{
			ilk_index = orta_index + 1;
		}
		else
		{
			son_index = orta_index - 1;
		}
	}
	
	//Bu recursiveli bir örnek yani fonk. kendini çaðýracak.
	if(son_index >= ilk_index)
	{
		int orta_index = (ilk_index + son_index) / 2;
		
		if(deneme_dizisi[orta_index] == aranan_sayi)
		{
			return orta_index;
		}
		
		if(deneme_dizisi[orta_index] > aranan_sayi)
		{
			return bin_sear(deneme_dizisi, ilk_index, orta_index - 1, aranan_sayi);
		}
		
		return bin_sear(deneme_dizisi, orta_index + 1, son_index, aranan_sayi);
	}
	return 2;
}*/
int main()
{
	/*int boyut, deneme_dizisi[boyut], aranan_sayi;
	printf("dizinin eleman sayisini girin..");
	scanf("%d", &boyut);
	
	printf("\n %d boyutlu dizinin elemanlarini girin..\n\n", boyut);
	
	int i;
	for(i = 0; i < boyut; i++)
	{
		printf("\ndizinin %d. elemanini girin..", i+1);
		scanf("%d", &deneme_dizisi[i]);
	}*/
	
	int aranan_sayi, i, dizi[dizi_boyutu] = {2,4,6,8,10,12,14,16,18,20};
	
	printf("\naranacak sayiyi girin..");
	scanf("%d", &aranan_sayi);
	
	printf("\nAranacak dizi:\n");
	for(i = 0; i < dizi_boyutu; i++) printf(" %d", dizi[i]);
	
	printf("\n");
	for(i = 0; i < (dizi_boyutu -1)*4; i++) printf("-");
	printf("\n");
	
	//int dizi_boyutu = sizeof(deneme_dizisi) / sizeof(deneme_dizisi[0]);
	
	/*int result = bin_sear(deneme_dizisi, 0, boyut - 1, aranan_sayi);
	
	(result != -1) ? printf("aranan sayi dizide %d. bolmededir.\n", result +1)
				   : printf("aranan sayi dizide mevcut degildir.\n");*/
	
	int result = bin_sear(dizi, 0, dizi_boyutu - 1, aranan_sayi);		   
	if(result != 2)
	{
		printf("\nbulundu, dizide %d. bolmede.", result + 1);
	}
	else printf("\ndizide yok");
}

int bin_sear(int deneme_dizisi[], int ilk_index, int son_index, int aranan_sayi)
{
	if(ilk_index <= son_index)
	{
		int orta_index = (ilk_index + son_index) / 2;
		
		if(deneme_dizisi[orta_index] == aranan_sayi)
		{
			return orta_index;
		}
		
		if(deneme_dizisi[orta_index] < aranan_sayi)
		{
			return bin_sear(deneme_dizisi, orta_index +1, son_index, aranan_sayi);
		}
		
		return bin_sear(deneme_dizisi, ilk_index, orta_index -1, aranan_sayi);
	}
	return 2;
}
