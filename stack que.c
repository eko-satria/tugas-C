#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX1 50
#define MAX 50

int top=-1,stack[MAX];
int queue_array[MAX1];
int rear = - 1;
int front = - 1;


main(){
	int menu;
	
	printf("1.push\n");
	printf("2.pop\n");
	printf("3.Enqueue\n");
	printf("4.Dequeue\n");
	scanf("%d", &menu);
	
	switch(menu){
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			Enqueue();
			break;
		case 4:
			Dequeue();
			break;
		default:
			printf("Wrong choice");
	}
}

push()
{
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
    return main();
}
 
pop()
{
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d",stack[top]);
        top=top-1;
    }
    return main();
}

Enqueue()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
    return main();
}

Dequeue()
{
    int i;
    if (front == - 1 || top == -1)
        printf("empty \n");
    if (front != -1 || top != -1);
    {
        printf("hasil : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        for(i=top;i>=0;--i)
            printf("%d\n",stack[i]);
        printf("\n");
        
    } 
	return main();  
}
