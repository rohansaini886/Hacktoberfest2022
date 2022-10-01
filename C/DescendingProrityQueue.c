#include <stdio.h> 
struct queue 
{ 
int a[5]; 
int front, rear; 
} q; 
void insert() 
{ 
int x; 
if (q.rear == 4) 
printf("Descending Priority Queue is overflow\n"); 
else 
{ 
printf("Enter element to Insert:"); 
scanf("%d", &x); 
q.rear++; 
q.a[q.rear]=x; 
if (q.front==-1) 
q.front=0; 
} 
} 
void delete1() 
{ 
if (q.front == -1) 
printf("Descending Priority Queue is underflow\n"); 
else 
{ 
int max,p,i; 
i=q.front; 
max=q.a[q.front]; 
p=q.front; 
while(i<=q.rear) 
{ 
    if (q.a[i]>max) 
    { 
        max=q.a[i]; 
        p=i; 
    } 
    i++; 
} 
printf("Element deleted in the queue is %d \n",q.a[p]); 
if(q.front==q.rear) 
q.front = q.rear = -1; 
else 
{ 
    for (i=p;i<q.rear;i++) 
    q.a[i]=q.a[i+1]; 
    q.rear--; 
} 
} 
}  
void display() 
{ 
if (q.front == -1) 
printf("Queue is underflow\n"); 
else 
{ 
printf("The element of th queue are \n"); 
for(int i = q.front; i<= q.rear; i++) 
printf("%d\n",q.a[i]); 
} 
} 
void destory() 
{ 
q.front=q.rear=-1; 
printf("Queue is destoryed \n"); 
} 
int main(void) 
{ 
int ch; 
q.front=q.rear = -1; 
do 
{ 
printf("MENU\n 1.INSERT\n 2.DELETE\n 3.DISPLAY\n 4.DESTORY\n 5.EXIT\n"); 
scanf("%d", &ch); 
switch(ch) 
{ 
case 1: insert(); 
break; 
case 2: delete1(); 
break; 
case 3: display(); 
break; 
case 4: destory(); 
break; 
case 5: break; 
default : printf("Entered a wrong choice"); 
} 
} 
while(ch!=5);  
}
