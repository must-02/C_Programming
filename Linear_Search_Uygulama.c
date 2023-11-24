#include <stdio.h>

//5x5 lik matriste sirali arama algoritmasi uygulamasi
#define Max_Size 5

int sear_algo(int deneme_matrisi[][Max_Size], int matris_satiri, int matris_sutunu, int aranan_sayi)
{
	int i, j, kontey = 0;
	
	for(i = 0; i < matris_satiri; i++)
	{
		for(j = 0; j < matris_sutunu; j++)
		{
			if(deneme_matrisi[i][j] == aranan_sayi && kontey != 1)
			{
				printf("aranan sayi matriste %d. satirda %d. sutundadir.", i+1, j+1);
				kontey = 1;
				return 1;
			}
		}
	}
	return 0;
}


int main()
{
	int matris_satiri, matris_sutunu;
	printf("aranacak olan matrisi olusturunuz..\n");
	printf("matrisin satirini belirtin.."); scanf("%d", &matris_satiri);
	printf("\nmatrisin sutununu belirtin.."); scanf("%d", &matris_sutunu);
	
	if(matris_satiri > Max_Size || matris_sutunu > Max_Size)
	{
		printf("ERROR: Matris boyutlari %dx%d den buyuk olamaz.\n", Max_Size, Max_Size);
		return 1;
	}
	int deneme_matrisi[Max_Size][Max_Size], aranan_sayi;
	
	printf("\nmatrisin elemanlarini girin..");
	int i,j;
	for(i = 0; i < matris_satiri; i++)
	{
		for(j = 0; j < matris_sutunu; j++)
		{
			printf("\nmatrisin satir %d sutun %d elemaninini girin..", i+1, j+1);
			scanf("%d", &deneme_matrisi[i][j]);
		}
	}
	
	printf("aranacak matris olusturuldu..\n");
	
	for(i = 0; i < matris_satiri; i++)
	{
		printf("\n");
		for(j = 0; j < matris_sutunu; j++)
		{
			printf("%d ", deneme_matrisi[i][j]);
		}
	}
	
	printf("\naranan sayiyi girin.."); scanf("%d", &aranan_sayi);
	
	int result = sear_algo(deneme_matrisi, matris_satiri, matris_sutunu, aranan_sayi);
	if(result == 1)
	{
		printf("\nsayi matriste mevcuttur.");
	}
	else
	{
		printf("\nsayi matriste mevcut degildir.");
	}
	
}
