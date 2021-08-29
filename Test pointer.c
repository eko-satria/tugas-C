#include<stdio.h>
#include<math.h>

	int x,y=0;
	int *xptr;

int main(){
	a();
	return 0;
}
a(){
	xptr=&x;
	printf("Nilai: ");
	scanf("%d", xptr);
	y=pow(x,2)+2*x+4;
	printf("(%d^2)+(%d*2)+4\n", x,x);
	printf("%d",y);
}
