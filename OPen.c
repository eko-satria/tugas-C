#include <stdio.h>
#include <stdlib.h>
 
char K,k,H,h,menu;
int main()
{
	printf("1.Hijau\n2.Kuning\n:");
	scanf("%c", &menu);
	switch(menu);
		case 1:
			Hijau();
			break;
		case 2:
			Kuning();
			break;
   return 0;
}
Kuning(){
   char ch, file_name[25];
   FILE *fp;
 
   printf("Open isian\n");
   gets(Kuning.txt);
 
   fp = fopen(Kuning.txt, "r"); // read mode
 
   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
 
   printf("The contents of %s file are:\n", file_name);
 
   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);
 
   fclose(fp);	
}
Hijau(){
	
}
