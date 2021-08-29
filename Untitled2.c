#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 struct node
  {
     char nama[29];
     int ipk;
     int npm;
     struct node *next;
  };

  int main()
  {
    int i,n,ch,ps,x,k;
    k=0;

  struct node *h,*t,*t1,*w,*q;
  h=NULL;

  printf("\n/*DATABASE USING LINKED LISTS*/");


while(1)
 {
     
      printf("\n1.display\n2:add\n3.exit\n");
        printf("\nenter your choice=");
      scanf("%d",&ch);
      switch(ch)
     
{

case 1:    

  if(h==NULL)
   {
    printf("no records are available");
  }
  w=h;
  while(w!=NULL)
 {
    printf("\nNomor Mahasiswa:%d\nNama Mahasiswa:%s\nNilai IPK:%d\n",
  w->npm,w->nama,w->ipk);
  w=w->next;
 }

break;

case 2:
   printf("\nenter the new record=\t");
   if(h==NULL)
 {
  h=t=(struct node *)malloc(sizeof(struct node));
  printf("\nNomor Mahasiswa:\t");
  scanf("%d",&t->npm);
   printf("\nNama Mahasiswa:\t");
    scanf("%s",&t->nama);
    printf("\nNilai IPK:\t");
    scanf("%d",&t->ipk);
   t->next=NULL;
   free(*next);
break;
}

case 3:
           
 exit(0);
           
 break;

}

}

}

