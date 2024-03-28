# embedded
Iot 개발자 임베디드시스템 학습 리포지토리

## 1일차
    - 환경설정 
    편집기 : 코드 작업할 때 사용하는 프로그램(nano) 한글
    * 기존 PC같이 사용하면 안된다.순서에 맞춰서 사용(동작주에 다른 명령어 처리 안됨)

## 2일차
    - putty : port 22, vnc : port 5901

## 3일차
    - 연결리스트 작업(pre,rear 노드 추가)

## 4일차
    ```
    void rear_addNode(headNode* phead, int data)
{
node * tnode = (node*)malloc(sizeof(node));
if(newNode != NULL){
	tnode ->data = data;
	tnode ->next = NULL;
	if(pnode -> head == NULL) phead -> head = tnode;
	else{
	node* curr = phead->head;
	while(curr->next != NULL){
		curr = curr -> next;
		}
		curr -> next = tnode;
		}
	}
}
    ```

    