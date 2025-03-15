#include <stdio.h>
int main () {


//int i=1;

//do
//{
  //  printf("%d \n", i);
  //  i++;
//} while (i <= 10);

int numero;

do
{
    printf("digite um numero par para encerrar o programa: \n");
    scanf("%d", &numero);

if (numero % 2 == 0)
{
    printf("Seu numero é par \n");
}else
{
    printf("Seu numero é impar\n");
}



} while (numero % 2 != 0);

printf("voce digitou um numero par,encerrando...");


}