#include <stdio.h>
int main ()
{

//for (int i = 10; i <= 20; i++)
//{
  //  printf("%d \n", i);
//}

int numero;

printf("Digite um numero paara a tabuada:");
scanf("%d", &numero);

for ( int i = 0; i <= 10; i++)
{
 printf("%d x %d = %d \n", i,numero, i * numero);   
}


}