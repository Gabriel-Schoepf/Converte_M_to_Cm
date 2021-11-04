/*
Implemente um sistema, que o usuario digite
um valor em metros (m) e conerta 
para centimetros (cm)
-- Digite o valor em (m)
--O valor convertido de x(m) é y(cm)
*/

#include <stdio.h>
int main()


{
	float m, cm; // Metros (m); Centimetros (cm)
	  printf("Bem vindo ao conversor online.\n Digite o valor a ser convertido em metros (m) \n");
	    scanf("%f",&m); 
	cm = (m * 100);
	  printf("\n%.0f metros sao %.0f Centimetros",m ,cm);

	 return 0;
}
