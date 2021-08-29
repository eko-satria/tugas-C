#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 100


int top=-1,stack[MAX];
int queue_array[MAX];
int rear = - 1;
int front = - 1;

int main(){
	int mainmenu;
	printf("1. Stack\n");
	printf("2. Queue\n");
	printf("91. Help\n");
	printf("11. About\n");
	scanf("%d", &mainmenu);
	
	switch(mainmenu){
		case 1:
			Stack();
			break;
		case 2:
			Queue();
			break;
		case 91:
			Help1();
			break;
		case 11:
			About();
			break;
		deafault:
			printf("salah");
			return main();
	}
}


Stack(){
    int ch;
    
    while(1)
    {
        printf("\n*** Stack Menu ***");
        printf("\n\n1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("92. Help\n");
        printf("4.Exit");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch);
        
        switch(ch)
        {
            case 1: 
					push();
                    break;
            case 2: 
					pop();
                    break;
            case 3: 
					display();
                    break;
            case 92:
            		Help2();
            		break;
            case 4: exit(0);
            
            default: printf("\nWrong Choice!!");
        }
    }
}
push(){
    int val;
    
    if(top==MAX-1)
    {
        printf("\nStack is full!!");
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }	
}
pop(){
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1;
    }	
}
display(){
    int i;
    
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nStack is...\n");
        for(i=top;i>=0;--i)
            printf("%d\n",stack[i]);
    }
}

Queue(){
    int choice;
    while (1)
    {
        printf("1.Enqueue \n");
        printf("2.Dequeue \n");
        printf("93. Help\n");
        printf("3.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            Enqueue();
            break;
            case 2:
            Dequeue();
            break;
            case 93:
            Help3();
            break;
            case 3:
            exit(1);
            default:
            printf("Wrong choice \n");
}
}
}
Enqueue(){
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1);
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }	
}
Dequeue(){
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }	
}

Help1(){
	printf("silahkan pilih apakah ingin menampilkan suatu data dengan cara stack atau queue");
	return main();
}
Help2(){
	printf("pop		-> berfungsi untuk menginput data yang diinginkan");
	printf("push	-> berfungsi untuk menghapus data yang paling baru saja dimasukkan");
	printf("display	-> berfungsi menampilkan semua data yang telah diinput");
	return Stack();
}
Help3(){
	printf("Enqueue-> berfungsi untuk mengiput data yang diinginkan");
	printf("Dequeue-> berfungsi menampilkan semua data yang telah diinput");
	return Queue();
}
About(){
	printf("program ini bertujuan untuk mengetahui perbedaan algoritma dari stack dan queue.");
	return main();
}
