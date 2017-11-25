#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void imprimir(char nombres[4][20]);
int main() {
	char nombres[4][20];
	int i,j;
	
	for(i=0;i<4;i++){
	printf("Dame el nombre: ");
	fgets(nombres[i],sizeof(nombres[i]),stdin);
	}
	for(i=0;i<4;i++){
	printf("%s\n",nombres[i]);
		}
		imprimir(nombres);
		printf("%s",nombres[0]);
	return 0;
}
void imprimir(char nombres[4][20]){
	strcpy(nombres[0],"Bernardo");
}
