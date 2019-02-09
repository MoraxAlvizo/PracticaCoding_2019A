#include <stdio.h>
/* 
 *	Nombre	Comentario
 *	Omar 	Agregue la funcion HolaSoyOmar
 *	Ivan 	Agregue la funcion HolaSoyIvan
 *
 * */

void HolaSoyOmar()
{
	printf("Hola mi nombre es Omar Alvizo\n");
}	

void HolaSoyIvan()
{
	printf("Hola mi nombre es Iv%cn Orozco\n",160);
}

int main()
{
	HolaSoyOmar();
	HolaSoyIvan();
	return 0;
}
