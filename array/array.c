#include<stdio.h>
void main()
{
int ar[20],i,pos,c,n,num1,del;
printf("Enter the limit");
scanf("%d",&n);
printf("enter the array values ");
for(i=0;i<n;i++)
scanf("%d",&ar[i]);

printf("Enter your choice 1.insertion\n 2.deletion\n 3.traversal");
scanf("%d",&c);
switch(c)
{
case 1:printf("enter the position to be inserted");
scanf("%d",&pos);
printf("Enter the number to be inserted");
scanf("%d",&num1);
if(0<(pos-1)<n)
{
for(i=n-1;i>=pos-1;i--)
ar[i+1]=ar[i];
ar[pos-1]=num1;
for(i=0;i<=n;i++)
printf("%d\t",ar[i]);
}
else
printf("out of index");
break;
case 2:printf("Enter the position where the element is to be removed");
scanf("%d",&del);
if(0<(pos-1)<n)
{
for(i=pos-1;i<=n;i++)
ar[i-1]=ar[i];
for(i=0;i<n-1;i++)
printf("%d\t",ar[i]);
}
else
printf("out of index");
break;
case 3:printf("The elements are :");
for(i=0;i<=n;i++)
printf("%d",ar[i]);
break;
default:printf("wrong statement");
}
}

