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
{    int x,e,p;
     clrscr();
     while(1)
     {    printf("\n\n\t\t  Which of the following do you want to be performed?");
	  printf("\n\t\t  1. Push");
	  printf("\n\t\t  2. Pop");
	  printf("\n\t\t  3. Peek");
	  printf("\n\t\t  4. Traverse");
	  printf("\n\t\t  5. Exit");
	  printf("\n\t\t  Enter your choice : ");
	  scanf("%d",&x);
	  switch(x)
	  {    case 1 : push(e);
			break;
	       case 2 : p=pop();
			if(p!=0)
			printf("\n\t\t%d is deleted from the Stack",p);
			break;
	       case 3 : peek();
			break;
	       case 4 : traverse();
			break;
	       case 5 : exit(0);    //exit is a predefined function which takes any one integer in the parenthesis
			break;
	       default : printf("\n\t\t\t\t  Wrong Choice!!");
			 break;
	  }
     getch();
     }
}

void push(int el)
{    if(isFull())
     printf("\n\t\tStack is already Full");
     else
     {    printf("\n\t\tEnter the number to be added  in the Stack : ");
	  scanf("%d",&el);
	  Stack[++Top]=el;
	  printf("\n\t\t\t\t%d inserted",el);
     }
}

int pop()
{    if(isEmpty())
     {    printf("\n\t\tStack is already Empty");
	  return 0;
     }
     else
     return Stack[Top--];
}

void peek()
{    if(isEmpty())
     printf("\n\t\tStack is already Empty");
     else
     printf("\n\t\t%d is the Top element of the Stack",Stack[Top]);
}

void traverse()
{    int i;
     if(isEmpty())
     printf("\n\t\tStack is already Empty");
     else
     {    printf("\n\t\tThe elements of the Stack from Top to Bottom are : ");
	  for(i=Top;i>=0;i--)
	  printf("%d ",Stack[i]);
     }
}

int isFull()
{    if(Top==CAPACITY-1)
     return 1;
     else
     return 0;
}

int isEmpty()
{    if(Top==-1)
     return 1;
     else
     return 0;
}
