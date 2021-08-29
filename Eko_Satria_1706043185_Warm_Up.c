#include <stdio.h>

int a[] = {1,7,8,4,11};
int b,i,c=0;

int main(){
	printf ("\nMasukkan nilai array\n");
scanf ("%d", &b);
for(i=0;i<5;i++){
	if(b==a[i]){
		c=1;
	}
}
if(c==1){
	printf("ada");
}
else{
	printf("Tidak");
}
return 0;
}
