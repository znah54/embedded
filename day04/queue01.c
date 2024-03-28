 #include<stdio.h>
 #define Q_SIZE 10
  int front = -1;
  int rear = -1;
 
  /*void enqueue(int* queue, int _rear, int _data){
    if(rear=Q_SIZE -1){
      printf("QUEUE OF!!\n");
     return;
 }*/

 void enqueue(int _data)
 {
   if(rear >= Q_SIZE -1){
     printf("QUEUE OF!!\n");
     return;
   }
     queue[++rear] = _data;
 }
 int dequeue(){
   if(front == rear){
     printf("QUEUE UnderF!!\n");
     return -1;
     }
   return queue[++front];
 }
   //pqueue[++(*(_rear))] = _data;
void main(){
   //int read = -1;
   //int front = -1;
   //int queue[Q_SIZE];
   //enqueue(queue, rear, 10);
   enqueue(10);
   enqueue(20);
   enqueue(30);

   printf("%d\n", dequeue());
   printf("%d\n", dequeue());
 }
