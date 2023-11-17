#include <locale.h>
#include <stdio.h>
#include <string.h>


int main () {

setlocale(LC_ALL, "portuguese");

int valor[6];
int i;





 for ( i = 0; i < 6; i++)
 {
   printf("Informe  %dº valor\n", i + 1);
   scanf("%d", &valor[i]);
    
    
     while ( valor[i] < 0  || valor[i] % 2 != 0 ) {
     	 printf("Informe  %dº valor novamente\n", i + 1);
   scanf("%d", &valor[i]);
    
     	
	 }
    
    
  
 }
 
  
for ( i = 5; i >= 0; i--)
{
  printf("Valor %d\n ",valor[i]);
}  
    

    return 0;
}
