#include<stdio.h>

char sub;
int menu,mat1[10][10], mat2[10][10],jum[10][10],transpose[10][10],bar1,bar2,col1,col2, i, j, k;
float determinan=0;

int main(){
	printf("Opsi: ");
	printf("\n1.Pertambahan");
	printf("\n2.Pengurangan");
	printf("\n3.Perkalian");
	printf("\n4.Transpose");
	printf("\n5.Invers (3*3)");
	printf("\n9. Help");
	printf("\nPilih Opsi");
	scanf("%d", &menu);
	
	switch(menu){
		case 1:
			pert();
			break;
		case 2:
			peng();
			break;
		case 3:
			per();
			break;
		case 4:
			tran();
			break;
		case 5:
			inv();
			break;
		case 9:
			help();
			break;
		default:
			printf("Opsi tidak ada");
			return main();
	}
}

pert(){
    printf("masukin berapa baris dan kolom: ");
    scanf("%d %d", &bar1, &col1);

    printf("\nmatrix yang pertama:\n");
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
    
    printf("\nmatrix yang kedua:\n");
    for(i=0; i<bar1; ++i)
        for(j=0; j<col1; ++j)
        {
            printf("elemen ke a%d%d: ",i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }

    printf("\nMatriks yang diinput: \n");
    for(i=0; i<bar1; ++i)
        for(j=0; j<col1; ++j)
        {
            printf("%d  ", mat2[i][j]);
            if (j == col1-1)
                printf("\n\n");
        } 
    for(i=0;i<bar1;++i)
        for(j=0;j<col1;++j)
        {
            jum[i][j]=mat1[i][j]+mat2[i][j];
        }

    printf("\nHasil: \n\n");

    for(i=0;i<bar1;++i)
        for(j=0;j<col1;++j)
        {

            printf("%d   ",jum[i][j]);

            if(j==col1-1)
            {
                printf("\n\n");
            }
        }
    
    printf("Lanjutkan?(Y/N) ");
    scanf("%c", sub);
    if(sub=='Y'&&sub=='y'){
    	return main();
	}
	else{
		return 0;
	}
}      

peng(){
    printf("masukin berapa baris dan kolom: ");
    scanf("%d %d", &bar1, &col1);

    printf("\nmatrix yang pertama:\n");
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
    
    printf("\nmatrix yang kedua:\n");
    for(i=0; i<bar1; ++i)
        for(j=0; j<col1; ++j)
        {
            printf("elemen ke a%d%d: ",i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }

    printf("\nMatriks yang diinput: \n");
    for(i=0; i<bar1; ++i)
        for(j=0; j<col1; ++j)
        {
            printf("%d  ", mat2[i][j]);
            if (j == col1-1)
                printf("\n\n");
        } 
    for(i=0;i<bar1;++i)
        for(j=0;j<col1;++j)
        {
            jum[i][j]=mat1[i][j]-mat2[i][j];
        }

    printf("\nHasil: \n\n");

    for(i=0;i<bar1;++i)
        for(j=0;j<col1;++j)
        {

            printf("%d   ",jum[i][j]);

            if(j==col1-1)
            {
                printf("\n\n");
            }
        }
    
    printf("Lanjutkan?(Y/N) ");
    scanf("%c", sub);
    if(sub=='Y'&&sub=='y'){
    	return main();
	}
	else{
		return 0;
	}	
}

per(){
    printf("masukin berapa baris dan kolom: ");
    scanf("%d %d", &bar1, &col1);

    printf("\nmatrix yang pertama:\n");
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
    
    printf("\nmatrix yang kedua:\n");
    for(i=0; i<bar1; ++i)
        for(j=0; j<col1; ++j)
        {
            printf("elemen ke a%d%d: ",i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }

    printf("\nMatriks yang diinput: \n");
    for(i=0; i<bar1; ++i)
        for(j=0; j<col1; ++j)
        {
            printf("%d  ", mat2[i][j]);
            if (j == col1-1)
                printf("\n\n");
        } 
        
    while (col1 != bar2)
    {
        printf("Error! kolom matriks tidak sama dengan baris matriks kedua.\n\n");
        printf("Masukin baris dan kolom matriks Pertama: ");
        scanf("%d %d", &bar1, &col1);
        printf("Masukin baris dan kolom matriks Kedua: ");
        scanf("%d %d",&bar2, &col2);

    for(i=0; i<bar1; ++i)
        for(j=0; j<col2; ++j)
        {
            jum[i][j] = 0;
        }

    for(i=0; i<bar1; ++i)
        for(j=0; j<col2; ++j)
            for(k=0; k<col1; ++k)
            {
                jum[i][j]+=mat1[i][k]*mat2[k][j];
            }

    printf("\nHasilnya:\n");
    for(i=0; i<bar1; ++i)
        for(j=0; j<col2; ++j)
        {
            printf("%d  ", jum[i][j]);
            if(j == col2-1)
                printf("\n\n");
        }
    
    printf("Lanjutkan?(Y/N) ");
    scanf("%c", sub);
    if(sub=='Y'&&sub=='y'){
    	return main();
	}
	else{
		return 0;
	}
}
}

tran(){
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

    printf("Lanjutkan?(Y/N) ");
    scanf("%c", sub);
    if(sub=='Y'&&sub=='y'){
    	return main();
	}
	else{
		return 0;
	}	
}

inv(){
    printf("Masukkan element matriksnya:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++){
            printf("elemen ke a%d%d: ",i+1, j+1);
            scanf("%d", &mat1[i][j]);
		}
    
    printf("\nGiven matrix is:");
    for(i = 0; i < 3; i++){
        printf("\n");
        
        for(j = 0; j < 3; j++)
            printf("%d\t", mat1[i][j]);
    }
    
    for(i = 0; i < 3; i++)
        determinan = determinan + (mat1[0][i] * (mat1[1][(i+1)%3] * mat1[2][(i+2)%3] - mat1[1][(i+2)%3] * mat1[2][(i+1)%3]));
    
    printf("\n\ndeterminant: %f\n", determinan);
    if(determinan==0){
    	printf("Invers tidak ada\n");
	}
	else{
    
    printf("\nInverse of matrix is: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("%.2f\t",((mat1[(j+1)%3][(i+1)%3] * mat1[(j+2)%3][(i+2)%3]) - (mat1[(j+1)%3][(i+2)%3] * mat1[(j+2)%3][(i+1)%3]))/ determinan);
        
        printf("\n");
    }
	}
	
    printf("Lanjutkan?(Y/N) ");
    scanf("%c", sub);
    if(sub=='Y'&&sub=='y'){
    	return main();
	}
	else{
		return 0;
	}	
}

help(){
	printf("Pilih salah satu opsi yg sudah tersedia");
    printf("Lanjutkan?(Y/N) ");
    scanf("%c", sub);
    if(sub=='Y'&&sub=='y'){
    	return main();
	}
	else{
		return 0;
	}
}
