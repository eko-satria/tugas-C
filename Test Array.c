#include <stdio.h>
 
int main() {
  int array1[10],array2[10];
  int i,j,bes;
  
  printf("Masukkan angka ");
  scanf("%d", &bes);
  
  for(i=0;i<bes;i++){
  	scanf("%d", &array1[i]);
  }
     for(i = bes-1, j = 0; i >= 0; i--, j++) 
   {
      array2[i] = array1[j];     
   }
 
   printf("inversnya: \n");
   for (i = 0; i < bes; i++) 
   {
      printf("%d\n", array2[i]);
   }
  }

