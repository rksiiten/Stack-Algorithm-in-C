#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
 
#define MAXSIZE 5	//Maximum number of elements that can be stored

int top = -1;
int stack[MAXSIZE];
int data;


bool isFull()
{
	if (top == MAXSIZE-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isEmpty()
{
	if (top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int peek()
{
	return stack[top];
}

void push(int data)
{
	if(!isFull())
	{
		top++;
		stack[top] = data;
	}
	else
	{
		printf("\n\tCould not insert data, Stack is full.\n");
	}
	printf("\n\n\tPress any key to continue...");
	getch();
}

int pop()
{
	if(!isEmpty())
	{
		data = stack[top];
		top--;
		return data;
		
	}
	else
	{
		printf("\n\tCould not retrieve data, Stack is empty.\n");
	}
}

void display()
{
	if(!isEmpty())
	{
		int i;

		for(i = top; i >= 0; --i)
		{
			printf("\n\t\t%d",stack[i]);
			printf("\n\t      -------");
		}
	}
	printf("\n\n\tPress any key to continue...");
	getch();
}

int main()
{
	char option;
	
	system("cls");
	for(;;)
	{
		system("cls");
		printf("\t << LIST OPERATIONS >>\n\n");
		
		printf("\t    ================\n");
		printf("\t    || (1) Push    ||\n");
		printf("\t    || (2) Pop     ||\n");
		printf("\t    || (3) Peek    ||\n");
		printf("\t    || (4) Display ||\n");
		printf("\t    || (0) Exit    ||\n");
		printf("\t    ================\n");
		
		printf("\n\n\tPlease Select Operation: ");
		scanf("%d", &option);
		
		switch(option)
		{
			case 1:
				printf("\n\tEnter Data to PUSH:\t");
				scanf("%d", &data);
				push(data);
				break;
			case 2:
				printf("\n\tDeleted Data : \t");
				printf("%d",pop());
				printf("\n\n\tPress any key to continue...");
				getch();
				break;
			case 3:
				if(!isEmpty())
				{
					printf("\n\tTop Data Element of the Stack : \n");
					printf("\n\t\t%d", peek());
				}
				else
				{
					printf("\n\tCould not retrieve data, Stack is empty.\n");
				}
				printf("\n\n\tPress any key to continue...");
				getch();
				break;
			case 4:
				printf("\n\tData Elements of the Stack : \n");
				display();
				break;
			case 0:
				return 0;
				break;
		}
	}
}
