#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

typedef struct node
{
	sint32 Info;
	struct node* Link;
}Node_t;

void DisplayList(Node_t* Start);
uint8 CountNodes(Node_t* Start);
sint8 Search(Node_t* Start,sint32 SearchVal);
Node_t* InsertAtBeginning(Node_t* Start, sint32 Data);
void InsertAtEnd(Node_t* Start, sint32 Data);
Node_t* CreateList(void);
void InsertAfterANode(Node_t* Start, sint32 Data, sint32 NewData);
Node_t* InsertBeforeANode(Node_t* Start, sint32 Data, sint32 NewData);
Node_t* InsertAtPos(Node_t* Start, uint32 Pos, sint32 NewData);


int main()
{
	sint32 ValueToInsert;
	uint32 NodeVal,position;
	Node_t* Start= NULL;
	Start= CreateList();
	
	DisplayList(Start);
	
	printf("\nPlease enter a position value to insert at and the value to insert: ");
	scanf("%d%d",&position,&ValueToInsert);
	Start= InsertAtPos(Start,position ,ValueToInsert);
	DisplayList(Start);
}



void DisplayList(Node_t* Start)
{
	if(Start==NULL)
	{
		printf("List is empty\n");
	}
	
	else
	{
		Node_t* ptr = Start;
		printf("\nThe list is \n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->Info);
			ptr= ptr->Link;
		}
	}
}

uint8 CountNodes(Node_t* Start)
{
	uint8 NodeCounter=0;
	
	if(Start==NULL)
	{
		printf("List is empty\n");
	}
	
	else
	{
		Node_t* ptr = Start;
		
		while(ptr!=NULL)
		{
			ptr=ptr->Link;
			NodeCounter++;
		}

	}
	return NodeCounter;
}

sint8 Search(Node_t* Start,sint32 SearchVal)
{
	sint8 Position = 1;
	
	if(Start==NULL)
	{
		printf("List is empty\n");
		Position = -1;
	}
	
	else
	{
		Node_t* ptr = Start;
		
		while((ptr!= NULL) && ((ptr->Info) != SearchVal))
		{
				ptr= ptr->Link;
				Position++;
		}
		if(ptr==NULL)
		{
			Position = -1;
		}
		else
		{
			/*Do nothing*/
		}
	}
	return Position;
}

Node_t* InsertAtBeginning(Node_t* Start, sint32 Data)
{
	Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
	
	Temp->Info= Data;
	
	Temp->Link = Start;			/*Make the new node point to the first node before insertion*/
	
	Start = Temp;				/*Update the reference to the list*/
	
	return Start;
}

void InsertAtEnd(Node_t* Start, sint32 Data)
{
	Node_t* ptr = Start;
	Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
	Temp->Info = Data;
	
	while(ptr->Link!=NULL)
	{
		ptr= ptr->Link;
	}
	Temp->Link = ptr->Link;
	ptr->Link = Temp;
	
}

Node_t* CreateList(void)
{
	uint32 NodeNumber,i;
	sint32 Val;
	Node_t* Start = NULL;
	
	printf("Please enter no of nodes: ");
	scanf("%d",&NodeNumber);
	
	printf("Please enter 1st element: ");
	scanf("%d",&Val);
	Start= InsertAtBeginning(Start,Val);
	
	for(i=1;i<NodeNumber;i++)
	{
		printf("Enter next data element: ");
		scanf("%d",&Val);
		InsertAtEnd(Start,Val);
	}
	
	return Start;
}

void InsertAfterANode(Node_t* Start, sint32 Data, sint32 NewData)
{
	if(Start==NULL)
	{
		printf("\nEmpty list\n");
	}
	else
	{
		Node_t* ptr = Start;
		while(ptr!= NULL)
		{
			if((ptr->Info) == Data)
			{
				break;
			}
			else
			{
				ptr= ptr->Link;
			}
		}
		if(ptr==NULL)
		{
			printf("\n%d not found in the list\n",Data);
		}
		else
		{
			Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
			Temp->Info = NewData;
			Temp->Link= ptr->Link;
			ptr->Link= Temp;
		}
	}
}

Node_t* InsertBeforeANode(Node_t* Start, sint32 Data, sint32 NewData)
{
	if(Start==NULL)
	{
		printf("\nEmpty list\n");
	}
	else if(Start->Info == Data)
	{
		Start= InsertAtBeginning(Start,NewData);
	}
	else
	{
		Node_t* ptr = Start;
		while(ptr->Link!= NULL)
		{
			if((ptr->Link->Info) == Data)
			{
				break;
			}
			else
			{
				ptr= ptr->Link;
			}
		}
		if(ptr->Link==NULL)
		{
			printf("\n%d not found in the list\n",Data);
		}
		else
		{
			Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
			Temp->Info = NewData;
			Temp->Link= ptr->Link;
			ptr->Link= Temp;
		}
	}
	
	return Start;
}

Node_t* InsertAtPos(Node_t* Start, uint32 Pos, sint32 NewData)
{
	if(Start==NULL)
	{
		printf("\nEmpty list\n");
	}
	else if(Pos == 1)
	{
		Start= InsertAtBeginning(Start,NewData);
	}
	
	else
	{
		Node_t* ptr = Start;
		uint32 i;
		for(i=1;i<((Pos-1))&&(ptr!=NULL);i++)
		{
			ptr= ptr->Link;
		}
		if(ptr==NULL)
		{
			printf("\nInvalid Position \n");
		}
		else
		{
			Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
			Temp->Info = NewData;
			Temp->Link= ptr->Link;
			ptr->Link= Temp;
		}
	}
	return Start;
}
