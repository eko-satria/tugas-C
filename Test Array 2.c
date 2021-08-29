#include<stdio.h>

int main(){
	int array[10],x,y,num,reverse;
	
	printf("Masukkan: ");
	scanf("%d", &num);
	
	for(x=0; x<num;x++);
	scanf("%d", &array[x]);
	
	y=x-1;
	x=0;
	
	while(x<y){
		reverse=array[x];
		array[x]=array[y];
		array[y]=reverse;
	}
	
	printf("Hasil: ");
	scanf("%d", &array[x]);
}
