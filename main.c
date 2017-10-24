#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i,j,A[3][3],B[3][3],C[3][3];
int main(){
	
	srand(time(NULL));
  
  int num, num1;
  printf("\t\nEste programa Suma dos matrices\n");
  printf("De que tamaño quiere su matriz ?\n");
  scanf("%d", &num);
  //MATRIZ A
  for(i=1;i<=num;i++)
   {
	for(j=1;j<=num;j++){
		A[i][j] = 1 + rand() % (10- 1);
	  
	 }
}

	//MATRIZ B
  for(i=1;i<=num;i++)
   {
	for(j=1;j<=num;j++){
		B[i][j] = 1 + rand() % (10- 1);
	 }
   }
   
   printf("\n\t\tEl resultado de la suma de ambas Matices es:\n\n");
  for(i=1;i<=num;i++)
   {
	for(j=1;j<=num;j++)
	 {
	  C[i][j]=A[i][j]+B[i][j];
		  printf("\t\t\t    %d",C[i][j]);
	 }

	  printf("\t\t\t\n");
   }
	return 0;
}
