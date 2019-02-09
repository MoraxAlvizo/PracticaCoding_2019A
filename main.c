#include <stdio.h>
/* 
 *	Nombre	Comentario
 *	Omar 	Agregue la funcion HolaSoyOmar
 *	Andrea  Agregue mi nombre
 *	Ivan 	Agregue la funcion HolaSoyIvan
 *
 * */

void HolaSoyOmar()
{
	printf("Hola mi nombre es Omar Alvizo\n");
}

void HolaSoyAndrea()
{
	printf("Hola mi nombre es Andrea Denise\n");
}	

void HolaSoyIvan()
{
	printf("Hola mi nombre es Iv%cn Orozco\n",160);
}

int main()
{
	HolaSoyOmar();
	HolaSoyAndrea();
	HolaSoyIvan();
	return 0;
}
