#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
struct queue
{

    int r,f;
    int data[SIZE];

};
typedef struct queue QUEUE;
void enqueue(QUEUE *q,int item)
{
    if(q->r==SIZE-1)
        printf("\n Queue full");
    else{
        q->r=q->r+1;
        q->data[q->r]=item;
        if(q->f==-1)
            q->f=0;
        printf("\n Inserted %d into the queue. \n",item);

    }
}
void dequeue(QUEUE *q){
if(q->f==-1)
    printf("\n Queue empty");
    else{
        printf("\n Element deleted is %d",q->data[q->f]);
        if(q->f==q->r)
        {
            q->f=-1;
            q->r=-1;

        }
        else
            q->f=q->f+1;

    }
}
void display(QUEUE q)
{
    int i;
     if (q.f==-1)
        printf("\n QUEUE is empty");
     else{
        printf("\n content of Queue \n");
        for(i=q.f;i<=q.r;i++)
            printf("%d\t",q.data[i]);
     }
}
int main(){
int item,ch;
QUEUE q;
q.f==-1;
q.r=-1;
while(1)
    {
        printf("\n --- Queue operations---");
        printf("\n 1.Enqueue. \n 2. Dequeue. \n 3.Display. \n4.Exit.");
        printf("\n Enter your choice:");
        scanf("%d",&ch);
        switch(ch){
    case 1:printf("\n Enter element to insert: ");
        scanf("%d",&item);
        enqueue(&q,item);
        break;
    case 2:dequeue(&q);
        break;
    case 3:display(q);
        break;
    case 4:printf("\n Exiting program \n");
        exit(0);
    default:printf("\n Invalid choice \n");
}
}
return 0;
}
