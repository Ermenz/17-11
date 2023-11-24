#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main () {

char nomes[5] [200];
float peso[5] [5];
int idade[5] [5];
int i;
float altura [5] [5];
float maiorpeso = 0;
float menorpeso = 999999;
float maioraltura = 0;
float menoraltura = 999999;
int maioridade = 0;
int menoridade = 999999;
int j;
int k;
int p;


for ( i = 0; i < 5; i++)
{
    printf("Digite o nome da %dº pessoa", i + 1);
    gets(nomes[i]);

   for ( j = 0; j < 1; j++)
   {
    printf("Digite o peso da pessoa");
    scanf("%f", &peso[i][j]);
if (peso[i][j] > maiorpeso)
     {
       maiorpeso = peso[i][j] ;  
     }
if (peso[i][j] < menorpeso)
     {
     menorpeso = peso[i][j];  
     }
   }
   
   for ( k = 0; k < 1; k++)
   {
     printf("Digite a altura da  pessoa");
    scanf("%f", &altura[i][k]);
if (altura[i][k] > maioraltura)
     {
         maioraltura  = altura[i][k] ;  
     }
 if (altura[i][k] < menoraltura)
     {
        menoraltura = altura[i][k];  
     } 
   }

   for (p = 0; p < 1; p++) {
     printf("Digite a idade da pessoa");
    scanf("%d", &idade[i][p]);
if (idade[i][p] > maioridade)
     {
        maioridade = idade[i][p] ;  
     }

     if (idade[i][p] < menoridade)
     {
         menoridade = idade[i][p];  
     }

    fflush(stdin);
   }

   
   }



  for ( i = 0; i < 5; i++)
{
printf("nome:%s\n ",nomes[i]); 

for ( j = 0; j < 1; j++)
{
printf("peso: %.2f\n ",peso[i][j]);
 }  

for ( k = 0; k < 1; k++)
 {
printf("Altura: %.2f\n",altura[i][k]);  
}

  for ( p = 0; p < 1; p++)
{
printf("idade: %d\n",idade[i][p]);  
printf("\n");
}

}


printf("Maior peso:%.2f\n", maiorpeso);
printf("Menor peso:%.2f\n",(float) menoridade);
printf("Maior idade:%d\n", maioridade);
printf("Menor idade:%d\n", menoridade);
printf("Maior altura:%.2f\n", maioraltura);
printf("Menor altura:%.2f\n", menoraltura);


   

    return 0;
}