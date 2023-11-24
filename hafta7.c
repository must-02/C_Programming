//Hafta7 Kuyruk Algoritmasý Sýnýf Uygulamasý
//Soru iþaretli yerleri doldurun
#include <stdio.h>
#include<stdbool.h>

// dizi kaydýrmasý YOK
#define boyut 10 
   int head = 0;
   int uzunluk= 0;//uzunlukla tail ayný görevi görebilir snrm %95 ihtimal veriyorum :)
   int tail = 0;
   int dizi [boyut];
 
   bool doluMu(){
            if(tail == 10)//??
			{
                return true;
            }
            return false;
        }

  bool bosMu(){
            if(tail == 0)//??
                return true;
            return false;
        }
        
  void listele(){
	int i;
	printf (" \n");
	for (i=0; i < boyut; i++) printf (" %d ",dizi[i]);
	printf (" \n");
	}

 void ekle(int deger){
            if(doluMu()){
                printf ("Kuyruk kapasitesi dolu!\n");
            }else{
                dizi[tail] = deger;
                tail++;//??
                uzunluk++;//??
                printf (" %d kuyruga eklendi. Kuyrukta %d eleman var\n",deger,uzunluk);
            }
            listele();
        }
		
void cikar(){
			int i;
            if(bosMu()){
                printf ("Kuyruk bos!\n");
            }else{
            	uzunluk--;//??
                printf (" %d kuyruktan cikarildi, Kuyrukta %d eleman var.\n",dizi[head],uzunluk);
                dizi[head] = 0;//-1;
                head++;//??							
            }
            
            listele();
        }



int main(){
  	printf (" \n komut EKLE 12 \n");
    ekle(12); 
    printf (" \n komut EKLE 32 \n");
    ekle(32);
    printf (" \n komut EKLE 22 \n");
    ekle(22);
    printf (" \n komut EKLE 44 \n");
    ekle(44);
    printf (" \n komut CIKART \n");
    cikar();
    printf (" \n komut CIKART \n");
    cikar();
    printf (" \n komut EKLE 99 \n");
    ekle(99);
    printf (" \n komut CIKART \n");
    cikar();
    printf (" \n komut CIKART \n");
	cikar();
    printf (" \n komut CIKART \n");
	cikar();
    return 0;
}
