 #include<stdio.h>

 void main()
 {
   int ary[] = {1,2,3,4,5,6,7,8,9,10};
   int queue[20];
   int rear = 0;
   int front = 0;
   int size= sizeof(ary) / sizeof(ary[0]);
   // 큐에 삽입
   for(int i =0; i<size;i++){
     queue[rear++] = ary[i];
     printf("%d",&i);
     }
   // 큐에서 삭제
   for(int i =0; i<size;i++){

     queue[front] += ary[i];
     printf("%d",queue[front++]);
     }
 }
