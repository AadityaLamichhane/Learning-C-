#include<stdio.h>
#include<stdlib.h>
typedef struct singlenode{
	int value ;
	struct singlenode *next ;
	
}nodesingle;

nodesingle* create();
nodesingle* insert(nodesingle* prevnode);
int main()
{
	
	nodesingle* list = create();

	int  numberofInsertion = 0;
	printf(" How many of the thing you want to insert node ");
	scanf("%d" , &numberofInsertion);
	if(numberofInsertion!=0)
	{	
		for(int i = 0 ; i < numberofInsertion; i++)
		{
			insert(list);
		}
	}
	
	getValue(list);
	free(list);
	return 0;
}
nodesingle* create()
{
	nodesingle* n ;
	n = (nodesingle*)malloc(sizeof(nodesingle)); 
	
	if(n==NULL)
	{
		
		return NULL;
	}
	printf("Enter the value to be inserted in the node");
	scanf("%d", &(n->value));
	n->next = NULL;
	return n;
	
}
nodesingle* insert(nodesingle *prevnode )
{
	int inserornote;
	printf("Enter the value to insert in the list ");
	scanf("%d" , &inserornote);
	nodesingle* n = (nodesingle*)malloc(sizeof(nodesingle));
	if(n==NULL){
		printf("NO memory address");
		return NULL;
	}
	n->next = prevnode;
	n->value= inserornote;
	return n ;
	
	
 } 
 void getValue (nodesingle* list )
 {
	nodesingle* ptr;
	ptr = list ;
	
while(ptr->next!=NULL)
{
	
	printf("The value in the node is %d " , ptr->value);
	ptr = ptr->next;
}
     free(ptr);

 }