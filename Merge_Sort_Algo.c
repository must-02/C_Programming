#include <stdio.h>

void merge(int sol_dizi[], int sag_dizi[], int deneme_dizisi[], int boyut)
{
	
	int sol_dizi_boyutu = boyut / 2;
	int sag_dizi_boyutu = boyut - sol_dizi_boyutu;
	
	int sg = 0;
	int i =0;
	int sl =0;
	
	while(sl < sol_dizi_boyutu && sg < sag_dizi_boyutu)
	{
		if(sol_dizi[sl] < sag_dizi[sg])
		{
			deneme_dizisi[i] = sol_dizi[sl];
			i++;
			sl++;
		}
		else
		{
			deneme_dizisi[i] = sag_dizi[sg];
			i++;
			sg++;
		}
	}
	
	while(sl < sol_dizi_boyutu)
	{
		deneme_dizisi[i] = sol_dizi[sl];
		i++;
		sl++;
	}
	while(sg < sag_dizi_boyutu)
	{
		deneme_dizisi[i] = sag_dizi[sg];
		i++;
		sg++;
	}
}

void mergeSort(int deneme_dizisi[], int boyut)
{
	int i = 0;
	int j=0;
	int sol_dizi_boyutu = boyut / 2;
	int sag_dizi_boyutu = boyut - sol_dizi_boyutu;
	
	if(boyut <= 1) return;
	
	int dizi_ortasi = boyut / 2;
	int sol_dizi[dizi_ortasi], sag_dizi[boyut - dizi_ortasi];
	
	
	for(; i < boyut; i++)
	{
		if(i < dizi_ortasi)
		{
			sol_dizi[i] = deneme_dizisi[i];
		}
		else
		{
			sag_dizi[j] = deneme_dizisi[i];
			j++;
		}
	}
	
	mergeSort(sol_dizi, sol_dizi_boyutu);
	mergeSort(sag_dizi, sag_dizi_boyutu);
	merge(sol_dizi, sag_dizi, deneme_dizisi, boyut);
}



int main()
{
	int i, deneme_dizisi[] = {8, 2, 5, 3, 4, 7, 56, 68, 6, 1,9,0,45,23};
	int boyut = sizeof(deneme_dizisi) / sizeof(deneme_dizisi[0]);
	printf("siralanacak dizi:\n");
	for(i = 0; i < boyut; i++)
	{
		printf("%d ", deneme_dizisi[i]);
	}
	
	mergeSort(deneme_dizisi, boyut);
	printf("\nsiralanmis dizi:\n");
	for(i = 0; i<boyut; i++ )
	{
		printf("%d ", deneme_dizisi[i]);
	}	
}
