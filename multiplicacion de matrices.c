//numero de filas debe ser igual al numero de columnas 

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a[4][4], b[4][4], c[4][4], i ,j;
	
	printf("\nPrimera Matriz [2x3]");
	
	for(i=1; i<=2; i++){
		for(j=1; j<=3; j++){
			printf("\nIntroducir el Valor de [%d][%d]:\t",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//system ("cls");
	
	printf("\nSegunda Matriz [3x3]");
	
	for(i=1; i<=3; i++){
		for(j=1; j<=3; j++){
			printf("\nIntroducir el Valor de [%d][%d]:\t",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	system ("cls");
	
	for(i=1; i<=2; i++){
		for(j=1; j<=3; j++){
			c[i][j]=(a[i][1]*b[1][j])+(a[i][2]*b[2][j])+(a[i][3]*b[3][j]);
		}
	}
	for(i=1; i<=2; i++){
		for(j=1; j<=3; j++){
			printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0; 
}
