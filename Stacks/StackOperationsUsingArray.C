#include<stdio.h>
#include<conio.h>
#define CAPACITY 5
int Stack[CAPACITY];
int Top=-1;

void push(int);
int pop();
void peek();
void traverse();
int isFull();
int isEmpty();

void main()
{   int x,e,p;
    clrscr();
    while(1)
    {  printf("\nStack Operations (using Array)\n1. Push\n2. Pop\n3. Peek\n4. Traverse\n5. Exit\nEnter your choice : ");
       scanf("%d",&x);
       switch(x)
       {    case 1 : push(e);
		     break;
	    case 2 : p=pop();
		     if(p!=0)
			printf("\n%d removed\n",p);
		     break;
	    case 3 : peek();
		     break;
	    case 4 : traverse();
		     break;
	    case 5 : exit(0);    //exit is a predefined function which takes any one integer in the parenthesis
	    default : printf("\nWrong Choice!!");
       }
    }
    getch();
}

void push(int el)
{   if(isFull())
       printf("\nStack is already Full!\n");
    else
    {  printf("\nEnter the number to be added in the Stack : ");
       scanf("%d",&el);
       Top++;
       Stack[Top]=el;
       printf("%d inserted\n",el);
    }
}

int pop()
{   if(isEmpty())
    {  printf("\nStack is already Empty!\n");
       return 0;
    }
    return Stack[Top--];
}

void peek()
{   if(isEmpty())
       printf("\nStack is already Empty!\n");
    else
       printf("\n%d is the Top element of the Stack\n",Stack[Top]);
}

void traverse()
{   int i;
    printf("\nThe Stack from Top to Bottom is :");
    if(isEmpty())
       printf(" (Empty)");
    else
    {  for(i=Top;i>=0;i--)
	   printf(" %d",Stack[i]);
    }
    printf("\n");
}

int isFull()
{   if(Top==CAPACITY-1)
       return 1;
    return 0;
}

int isEmpty()
{   if(Top==-1)
       return 1;
    return 0;
}