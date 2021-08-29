#include <stdio.h>

int main()
{
    int a[10][10],jum[10][10], r, c, i, j;
    printf("masukin berapa baris dan kolom: ");
    scanf("%d %d", &r, &c);

    printf("\nmatrix yang masuk:\n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("elemen ke a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    printf("\nMatriks yang diinput: \n");
    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }

    for(i=0; i<r; ++i)
        for(j=0; j<c; ++j)
        {
            a[j][i] = a[i][j];
        }

    printf("\nMatriks tranposnya:\n");
    for(i=0; i<c; ++i)
        for(j=0; j<r; ++j)
        {
            printf("%d  ",a[j][i]);
            if(j==r-1)
                printf("\n\n");
        }
        
    for(i=0;i<c;i++);
    	for(j=0; j<r;j++){
    		jum[i][j]=a[i][j]+a[j][i];
		}
	
	    printf("\nHasil: \n\n");

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {

            printf("%d   ",jum[i][j]);

            if(j==c-1)
            
                printf("\n\n");
            
        }	

    return 0;
}
