#include <stdio.h>

int i,j,A[3][3],B[3][3],C[3][3];
int main()
 {
  
  printf("\t\nEste programa Suma dos matrices de 2x2\n");
  printf("\n\tIngresa las entradas de la Matriz A\n\n");
  for(i=1;i<=2;i++)
   {
	for(j=1;j<=2;j++)
	 {
	  printf("Da un valor para A[%d][%d]:  ",i,j);
	  scanf("%i",&A[i][j]);
	 }
}

printf("\n\tIngresa las entradas de la Matriz B\n\n");
  for(i=1;i<=2;i++)
   {
	for(j=1;j<=2;j++)
	 {
	  printf("Da un valor para B[%d][%d]:  ",i,j);
	  scanf("%i",&B[i][j]);
	 }
   }
   
   printf("\n\t\tEl resultado de la suma de ambas Matices es:\n\n");
  for(i=1;i<=2;i++)
   {
	for(j=1;j<=2;j++)
	 {
	  C[i][j]=A[i][j]+B[i][j];
		  printf("\t\t\t    %d",C[i][j]);
	 }

	  printf("\t\t\t\n");
   }
	return 0;
}
