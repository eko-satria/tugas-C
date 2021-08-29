#include<stdio.h>
 
int main(){
    int mat[3][3], i, j;
    float determinant = 0;
    
    printf("Masukkan element matriksnya:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++){
            printf("elemen ke a%d%d: ",i+1, j+1);
            scanf("%d", &mat[i][j]);
		}
    
    printf("\nGiven matrix is:");
    for(i = 0; i < 3; i++){
        printf("\n");
        
        for(j = 0; j < 3; j++)
            printf("%d\t", mat[i][j]);
    }
    
    //finding determinant
    for(i = 0; i < 3; i++)
        determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
    
    printf("\n\ndeterminant: %f\n", determinant);
    if(determinant==0){
    	printf("Invers tidak ada\n");
	}
	else{
    
    printf("\nInverse of matrix is: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%.2f\t",((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ determinant);
        
        printf("\n");
    }
	}

 
   return 0;
}
