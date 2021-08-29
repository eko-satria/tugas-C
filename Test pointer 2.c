#include<stdio.h>
#include<math.h>

	int x,y,z;
	int *xptr;
	int *yptr;

int main(){
	xptr=&x;
	printf("Nilai: ");
	scanf("%d", xptr);
	if(*xptr>=2){
	b();		
	}
	else{
	a();
	}
	return 0;
}
a(){
	y=pow(x,2)+2*x+4;
	printf("(%d^2)+(%d*2)+4\n", x,x);
	printf("%d",y);
}
b(){
	printf("Nilai: ");
	scanf("%d",yptr);
	z=pow(x,y)+(x*2)+(y*3)+8;
	printf("(%d^%d)+(%d*2)+(%y*3)+8",x,y,x,y);
	printf("%d",z);
}
