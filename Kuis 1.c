int main(){
	int mat1[100][100],transpose[100][100],bar1,col1,i,j;
	
	printf("masukin berapa baris dan kolom: ");
    scanf("%d %d", &bar1, &col1);

    printf("\nmatrix yang masuk:\n");
    for(i=0; i<bar1; ++i)
        for(j=0; j<col1; ++j)
        {
            printf("elemen ke a%d%d: ",i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }

    printf("\nMatriks yang diinput: \n");
    for(i=0; i<bar1; ++i)
        for(j=0; j<col1; ++j)
        {
            printf("%d  ", mat1[i][j]);
            if (j == col1-1)
                printf("\n\n");
        }

    for(i=0; i<bar1; ++i)
        for(j=0; j<col1; ++j)
        {
            transpose[j][i] = mat1[i][j];
        }

    printf("\nMatriks tranposnya:\n");
    for(i=0; i<col1; ++i)
        for(j=0; j<bar1; ++j)
        {
            printf("%d  ",transpose[i][j]);
            if(j==bar1-1)
                printf("\n\n");
        }	
}
