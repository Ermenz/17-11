#include <locale.h>
#include <stdio.h>
#include <string.h>


int main () {

setlocale(LC_ALL, "portuguese");

int par = 0;
int impar = 0;
int positivo = 0;
int negativo = 0;
int maior = 0;
int menor = 9999999;
float somaimpar = 0;
float somapar = 0;
float mediaquantidadetotal;
float mediaimpar;
float mediapar;
int valor[5];
int i;
int quantidade = 0;
float somaquantidade = 0;

for ( i = 0; i < 5; i++)
 {
   printf("Informe  %dº valor\n", i + 1);
   scanf("%d", &valor[i]);


quantidade++;
somaquantidade+= valor[i];


if (valor[i] % 2 == 0) 
{
 par++;
 somapar+= valor[i];
} else {
	impar++;
	somaimpar+= valor[i];
}

if (valor[i] > 0) 
{
 positivo++;
} else {
	negativo++;
}

if (valor[i] > maior ) {
		maior = valor[i];
	} 
	
	if (valor[i] < menor ) {
		menor = valor[i];
	} 
	
	} 

if ( par> 0) {
	mediapar = somapar / (float) par;
}
 if (impar > 0) {
 	mediaimpar = somaimpar/ (float) impar;
 }






 mediapar = somapar/par;
 mediaimpar = somaimpar/impar;
 mediaquantidadetotal =  somaquantidade/quantidade;

printf("Quantidade de pares %d \n", par);
printf("Quantidade de impares %d \n", impar);
printf("Quantidade de positivos %d \n", positivo);
printf("Quantidade de negativos %d \n", negativo);
printf("O maior número é %d\n", maior);
printf("O menor número é %d\n", menor);


printf("Media de pares %.2f\n", mediapar);
printf("Media de impares %.2f\n", mediaimpar);
printf("Media de todos os números %.2f\n", mediaquantidadetotal);

printf("\n");

printf("Valores lidos na ordem inversa\n");
for (i = 4; i>=0; i--) {

printf("%d\n",valor[i]);
	
}



 return 0;
}
