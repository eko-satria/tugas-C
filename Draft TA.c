#include<stdio.h>
#include<stdlib.h>
struct stack 
{
    int data;
    struct stack *next;
} *size;

int stack[100],choice,n,n1,top,x,i,*ptr;
int main(){
	top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    
	ptr = (int*) malloc(n * sizeof(int));
    
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
               printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }                
        }
    }
    while(choice!=4);
    return 0;
}

push(){
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
    	printf("\nEnter new size of array: ");
    	scanf("%d", &n);
    	ptr = realloc(ptr, n * sizeof(int)); 
         
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
pop()
{
    if(top<=-1)
    {
    printf("\n\t Stack is under flow");       
    }
    else
    {
		printf("delete dimana");
		scanf("%d", &n1);
		if(n1=0){
			return main();
		}
		else{
        printf("\n\t The popped elements is %d",stack[top-n1]);
        top--;
		}
    }
}

display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}
