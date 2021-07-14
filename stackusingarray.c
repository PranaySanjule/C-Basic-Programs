#include<stdio.h>
#include<conio.h>
#define N 5
int stack[N];
int top=-1;

int main(){
    system("cls");
    int ch;
    do
    {
        printf("\n\nStack Operation :\n1:Push\n2:Pop\n3:Peek\n4:Display\n");
        printf("Enter the Choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peek();
            break;
        case 4:
            Display();
            break;
        
        default:
        printf("Invalid Choice");
            break;
        }
    } while (ch!=0);
    return 0;
    
}

int Push()
{
    int x;
    printf("\nEnter value to be pushed:");
    scanf("%d",&x);

    if(top==N-1){
        printf("\nStack is Overflow\n");
    }else{
        top++;
        stack[top]=x;
    }
}

int Pop(){
    int item;
    if(top==-1){
        printf("\nStack is Underflow\n");
    }else{
        item=stack[top];
        top--;
        printf("\n%d",item);
    }
}

int Peek(){
    if(top==-1){
        printf("\nStack is Empty");
    }else{
        printf("\nPeek value is %d",stack[top]);
    }
}

int Display(){
    int i;
    for ( i = top; i >=0; i--)
    {
        printf("\nThe element in Stack");
        printf("\n%d",stack[i]);
    }
    
}