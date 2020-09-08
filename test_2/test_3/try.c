#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;

struct node* q=NULL;
int main(){
	rear=(struct node*)malloc(sizeof(struct node));
	if(front==rear)
		printf("yes");
	else 
		printf("NO");
return 0;
}
