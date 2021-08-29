#include <stdio.h>
int main(){
	int submenu,x;
	float suhuawal,suhuakhir;
	    		printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    			printf("Pilih satuan suhu yang ingin anda konversikan \n");
    			printf("=-=-=-=-=-=-=-=-=-Help Nomor 9-=-=-=-=-=-=-=-=-=-=-\n");
    			printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    			printf("\n1. Celcius (C)\n");
   				printf("2. Fahrenheit (F)\n");
    			printf("3. Kelvin (K)\n");
    			printf("4. Reamur (R)\n");
    			printf("\nSilahkan anda pilih : ");
    			scanf("%d", &submenu);
				
				if(submenu==9){
					help();
				}
					else{
					
    					switch(submenu)
    						{
					        case 1:
					        printf("\nMasukkan besar suhu : ");
					        scanf("%f", &suhuawal);
					        suhuakhir=(suhuawal*1.8)+32;
					        printf("\nFahrenheit 	: %.2f Fahrenheit\n", suhuakhir);
					        suhuakhir=suhuawal+273.15;
					        printf("Kelvin		: %.2f Kelvin\n", suhuakhir);
					        suhuakhir= suhuawal*0.8;
					        printf("Reamur		: %.2f Reamur\n", suhuakhir);
							printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            				scanf("%d", &x);
            				if (x==2){
            				return 0;
							}
							else if (x==1){
								system ("cls");
							return main();		
							}
							
					        case 2:
					        printf("\nMasukkan besar suhu : ");
					        scanf("%f", &suhuawal);
					        suhuakhir= (suhuawal + 459,67) / 1,8;
					        printf("\nKelvin 		: %.2f Kelvin\n", suhuakhir);
					        suhuakhir = (suhuawal - 32) / 1,8;
					        printf("Celcius		: %.2f Celcius\n", suhuakhir);
					        suhuakhir = (suhuawal - 32)/0.44;
					        printf("Reamur 		: %.2f Reamur\n\n", suhuakhir);
							printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            				scanf("%d", &x);
            				if (x==2){
            				return 0;
							}
							else if (x==1){
								system ("cls");
							return main();		
							}					        
					        
					        case 3:
					        printf("\nMasukkan besar suhu : ");
					        scanf("%f", &suhuawal);
					        suhuakhir = suhuawal - 273,15;
					        printf("\nCelcius		: %.2f Celcius\n", suhuakhir);
					        suhuakhir = suhuawal* 1,8 - 459,67;
					        printf("Fahrenheit	: %.2f Fahrenheit\n", suhuakhir);
					        suhuakhir = (suhuawal - 273,15) * 0.8;
					        printf("Reamur 		: %.2f Reamur\n\n", suhuakhir);
							printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            				scanf("%d", &x);
            				if (x==2){
            				return 0;
							}
							else if (x==1){
								system ("cls");
							return main();		
							}
					        
					        case 4:
					        printf("\nMasukkan besar suhu : ");
					        scanf("%f", &suhuawal);
					        suhuakhir = (suhuawal/0.8) + 273.15;
					        printf("\nKelvin 		: %.2f Kelvin\n", suhuakhir);
					        suhuakhir = suhuawal/0.8;
					        printf("Celcius		: %.2f Celcius\n", suhuakhir);
					        suhuakhir = (suhuawal*2.25)+32;
					        printf("Fahrenheit 	: %.2f Fahrenheit\n", suhuakhir);
							printf("\nApakah anda ingin melanjutkan?\n(1) untuk ya, (2) untuk tidak\n");
            				scanf("%d", &x);
            				if (x==2){
            				return 0;
							}
							else if (x==1){
								system ("cls");
							return main();		
							}
							
							default:
							printf("\nOpsi tidak ada\n");
							printf("Kembali ke Menu awal\n");
							return main();			        
					    	}
					    }
}

help(){
	printf("Masukan input berupa angka yang sesuai dengan menu");
	return main();
}
