#include <stdio.h>
/*
 *	
 * 
 *	Nombre	Comentario
 *	Omar 	Agregue la funcion HolaSoyOmar
 *	Ana 	agregue mi nombre
 *	Leslie 	Agregue la funcion HolaSoyLeslie
 *	Andrea  Agregue mi nombre
 *	Ivan 	Agregue la funcion HolaSoyIvan
 *
 * */

void HolaSoyOmar()
{
	printf("Hola mi nombre es Omar Alvizo\n");
}

void HolaSoyLeslie()
{
	printf("Hola mi nombre es Leslie Jocelyn Morales Mendoza\n");
}

void HolaSoyAna()
{
	printf("Hola mi nombre es Ana Gozalez\n");
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
	HolaSoyLeslie();
	HolaSoyAna();
	HolaSoyAndrea();
	HolaSoyIvan();
	return 0;
}
