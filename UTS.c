#include<stdio.h>

int main(){
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
            printf("%d  ", a[i][j]);
            if (j == c-1)
                printf("\n\n");
        }
        


        return 0;
}
