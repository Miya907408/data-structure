//queue operation
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int queue[SIZE];
int front = 0,rear = 0;
void enqueue(int);
int dequeue(void);
void display();
int main(void)
{
int opt,item;
do
{
printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit \n");
printf("\nYour option:");
scanf("%d", &opt);
switch(opt)
{
case 1:printf("Enter item:");
       scanf("%d",&item);
       enqueue(item);
       break;
case 2:item=dequeue();
       if (item != -1)
       printf("\npopped value=%d",item);
       break;
case 3:display();
       break;
case 4:
exit(0);
default:
       printf("Invalid option\n");
}
}
while(1);
return 0;
}
void enqueue(int x)
{
int temp;
temp=(rear + 1) % SIZE;
if(temp == front)
{
printf("\nQueue is full");
}
else
{
rear=temp;       
queue[rear]=x;
}
}
int dequeue(void)
{
if(front == rear)
{
printf("\nQueue is empty");
return -1;
}
else 
{
front = (front + 1) %SIZE;
return queue[front];
}
}
void display(void)
{
int i;
if(front == rear)
{
printf("\nQueue is empty");
}
else
{
printf("\nQueue elements: ");
i=(front + 1) % SIZE;
do
{
printf("%d\t",queue[i]);
i = (i + 1) % SIZE;
}
while(i != (rear + 1) % SIZE);
printf("\n");
}
}



              


