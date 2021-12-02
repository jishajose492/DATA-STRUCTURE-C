#include<stdio.h>
#define MAX 10
int queue[MAX],rear,front;
void insertion(int data);
void deletion();
void display();
void main()
{
int ch,data,y;
rear=-1,front=-1;
c:
printf("Enter your choice\n");
printf("1.Insertion\n2.Deletion\n3.Display");
scanf("%d",&ch);
switch(ch)
 {
  case 1:printf("Enter the data to be inserted");
         scanf("%d",&data);
         insertion(data);
         break;
  
  case 2:deletion();
         break;
  
  case 3:display();
         break;

  default:printf("Wrong Option");
          break;
  }
printf("Do you want to continue\n1.Yes\n2.No");
scanf("%d",&y);
if(y==1)
goto c;
}
void insertion(int data)
{
  if(rear==MAX-1)
  printf("Queue is full");
  else
   {
    rear=rear+1;
    queue[rear]=data;
   }
}
void deletion()
{  
  int data;
  if(rear==front)
  printf("Queue is empty");
  else
   {
    front=front+1;
    data=queue[front];

    printf("The data %d is popped out\n",data);
    
   }
}
void display()
{
if(rear==front)
printf("Queue is empty\n");
else
{
printf("The elements in the Queue are\n");
for(int i=front+1;i<=rear;i++)
printf("%d\n",queue[i]);
}
}
 

     
