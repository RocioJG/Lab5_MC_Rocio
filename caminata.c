#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*simular M=1000 diferentes caminatas aleatorias de N=500 pasos cada una
guardar en random_walks.txt la posicion final de cada caminata*/

main(){

FILE *tb;
tb= fopen("random_walks.txt", "w");
int M=1000;
int i, j;

for (i=0; i<M; i++){
	float x=0.0;
	for(j=0; j<500; j++){
	float r=drand48();
		if(r<=0.5)
			x=x+1; /*Me muevo en x positivo*/
		if(r>0.5)
			x=x-1; /*Me muevo en x negativo*/

}
	printf("%f\n", x);
	
}

}
