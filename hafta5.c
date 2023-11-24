#include <stdio.h>
#include <stdlib.h>

main ()
{ 
	int d[5], i, k, ekle;

 	printf ( "Siralanacak diziyi girin:\n" );
 	for (i=0; i<5; i++) scanf ("%d",&d[i]);
 	
 	for (i=1; i<5; i++)
 	{
 		ekle = d[i];
 		printf ("\nekle= %d",ekle);
 	
 		for (k=i-1; k>=0 && ekle<=d[k]; k--)
 		{ 
			printf ("\nk= %d d[k+1] = %d d[k]=%d",k,d[k+1],d[k]);
 			d[k+1] = d[k];
 		}
 	
 		d[k+1] = ekle;
 	}

 	printf ( "\nSiralanan dizi\n" );
 	for (i=0; i<5; ++i) printf ( " %d",d[i] );

 	printf ( "program bitti\n");
 	system ("pause");
}
