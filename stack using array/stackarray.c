#include<stdio.h>
#define MAX 10
int stack[MAX],top=-1;
void push(int data);
void pop();
void display();
void main()
{
int ch,data,y;
c:
printf("Enter your choice\n");
printf("1.Push Operation\n2.Pop Operation\n3.Display");
scanf("%d",&ch);
switch(ch)
 {
  case 1:printf("Enter the data to be pushed");
         scanf("%d",&data);
         push(data);
         break;
  
  case 2:pop();
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
void push(int data)
{
  if(top==MAX-1)
  printf("Stack Overflow");
  else
   {
    top=top+1;
    stack[top]=data;
   }
}
void pop()
{  
  int data;
  if(top==-1)
  printf("Stack Underflow");
  else
   {
    data=stack[top];
    top=top-1;
    printf("The data %d is popped out\n",data);
   }
}
void display()
{
printf("The elements in the Stack are\n");
for(int i=top;i>-1;i--)
printf("%d\n",stack[i]);
}
 

     
