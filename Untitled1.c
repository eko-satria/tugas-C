#include <stdio.h>
#include <stdlib.h>

struct Contoh{
	int NPM;
	float nilai;
	char nama [100];
};


int main(){
	struct Contoh *ptr;
	int i,org;
	
	printf("Enter Jumlah Orang: ");
	scanf("%f", &org);
	
	ptr=(struct Contoh*) malloc(org* sizeof(struct Contoh));
	
	for(i=0;i<org;++i){
		printf("Masukkan Nama,NPM,dan Nilai secara berurutan\n");
		scanf("%s%d%f", &(ptr+1)->nama, &(ptr+1)->NPM, &(ptr+1)->nilai);
	}
	printf("Tampilkan data\n:");
	for(i=0;i<org;++i);
	printf("%s%d%f", (ptr+1)->nama, (ptr+1)->NPM, (ptr+1)->nilai);
	free(ptr);
	return 0;
}
