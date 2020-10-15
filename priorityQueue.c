#include<stdio.h>
#include<stdlib.h>
struct Node{
    int priority;
    int info;
    struct Node *next;
};
struct Node *start=NULL,*q,*temp,*new;
 
void insert(){
    int item,itprio;
    new=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the element to be inserted :");
    scanf("%d",&item);
    printf("Enter its priority :");
    scanf("%d",&itprio);
    new->info=item;
    new->priority=itprio;
    new->next=NULL;
    if(start==NULL )
   	 start=new;
    else if(start!=NULL && itprio<=start->priority){  
   	 new->next=start;
   	 start=new;
    }
    else{
   	 q=start;
   	 while(q->next != NULL && q->next->priority<=itprio)
   		 q=q->next;
   	 new->next=q->next;
   	 q->next=new;
    }
}
 
void del(){
    if(start==NULL)
   	 printf("\nQueue Underflow\n");
    else{
   	 new=start;
   	 start=start->next;
    }
}
 
void display(){
    temp=start;
    if(start==NULL)
   	 printf("Queue Underflow\n");
    else{
   	 if(temp!=NULL)
   		 for(temp=start;temp!=NULL;temp=temp->next)
   			 printf("\n%d priority = %d\n",temp->info,temp->priority);
    }

}
void printMenu(){
    printf("-------------------------------------\n");
    printf("1. Insert.\n");
    printf("2. Pop.\n");
    printf("3. Display.\n");
    printf("4. Exit\n");
    printf("-------------------------------------\n");
    printf("Enter your choice: ");
}  
void main(){
    int ch;
    while(1){
   	 printMenu();    
   	 scanf("%d",&ch);
   	 switch(ch){
   		 case 1:
   			 insert();
   			 break;
   		 case 2:
   			 del();
   			 break;
   		 case 3:
   			 display();
   			 break;
   		 case 4:
   			 exit(0);
   			 break;
   		 default:
   			 printf("Invalid Choice\n");
   	 }
    }
}
