#include<stdio.h>

int i,contey=0;

//FONKSÝYON ÝLE SÝRADAN ARAMA ALGORÝTMASÝ
int sirali_arama(int array[],int dizi_boyutu, int aranan)
{
	for(i=0; i < dizi_boyutu; i++)
	{
		if(array[i] == aranan)
		{
			printf("aranan sayi dizide %d. yerdedir.\n",i+1);
			return 1;
		}
	}
	return 0;
}

int main()
{
	int dizi_boyutu;
	printf("aranilacak olan dizinin boyutunu gir..");
	scanf("%d", &dizi_boyutu);
	
	int aranacak_sayi, deneme_dizisi[dizi_boyutu], kontey;
	
	int i;
	for(i = 0; i < dizi_boyutu; i++)
	{
		printf("dizinin %d. sayisini gir..",i+1);
		scanf("%d", &deneme_dizisi[i]);
	}
	
	printf("dizi olusturuldu..");
	for(kontey = 0; kontey < dizi_boyutu; kontey++)
	{
		printf("%d  ", deneme_dizisi[kontey]);
	}
	
	printf("\naranacak sayiyi gir:");
	scanf("%d",&aranacak_sayi);
	
	if(sirali_arama(deneme_dizisi, dizi_boyutu, aranacak_sayi) == 1)
	{
		printf("aranan sayi dizide vardir.\n");
	}
	else
	{
		printf("aranan sayi dizide yoktur.\n");
	}

	//FOR ÝLE SÝRADAN ARAMA ALGORÝTMASÝ
//	for(i = 0 ; i < sizeof(deneme_dizisi) / sizeof(deneme_dizisi[0]) ; i++)
//	{
//		if(deneme_dizisi[i] == aranacak_sayi)
//		{
//			printf("aranan sayi dizide %d. yerdedir.\n",i+1);
//			contey = 1;
//		}
//	}

	//WHÝLE ÝLE SÝRADAN ARAMA ALGORÝTMASÝ
//	while(i < sizeof(deneme_dizisi) / sizeof(deneme_dizisi[0]))
//	{
//		if(deneme_dizisi[i] == aranacak_sayi)
//		{
//			printf("aranan sayi dizide %d. yerdedir\n",i+1);
//			contey = 1;
//		}
//		i++;
//	}
	
	//DO-WHÝLE ÝLE SÝRADAN ARAMA ALGORÝTMASÝ
//	do
//	{
//		if(deneme_dizisi[i] == aranacak_sayi)
//		{
//			printf("aranan sayi dizide %d. yerdedir.\n",i+1);
//			contey = 1;
//		}
//		i++;
//	} while(i < sizeof(deneme_dizisi) / sizeof(deneme_dizisi[0]));	

//	if(contey == 0)
//	{
//		printf("aranan sayi dizide mevcut degil.");
//	}
}
