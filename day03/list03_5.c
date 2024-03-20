#include <stdio.h>
#include <stdlib.h>

// 연결 리스트의 노드 구조체 정의
typedef struct NODE {
    int data;           // 데이터를 저장하는 변수
    struct NODE *next;  // 다음 노드를 가리키는 포인터
} node;

// 특정 노드 뒤에 새로운 노드를 추가하는 함수
void addNode(node* pnode, int data) {
    // 새로운 노드 생성
    node* newNode = (node*)malloc(sizeof(node));
    // 새로운 노드에 데이터 할당
    newNode->data = data;
    // 새로운 노드의 다음 노드를 pnode의 다음 노드로 설정
    newNode->next = pnode->next;
    // pnode의 다음 노드를 새로운 노드로 설정하여 노드를 연결
    pnode->next = newNode;
}

// 연결 리스트의 끝에 새로운 노드를 추가하는 함수
void appendNode(node* head, int data) {
    // 새로운 노드 생성
    node* newNode = (node*)malloc(sizeof(node));
    // 새로운 노드에 데이터 할당
    newNode->data = data;
    // 새로운 노드의 다음 노드를 NULL로 설정하여 연결 리스트의 끝임을 나타냄
    newNode->next = NULL;

    // 리스트의 끝까지 이동하여 새 노드를 추가
    node* current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    // 새 노드를 리스트의 마지막에 추가
    current->next = newNode;
}

// 연결 리스트의 메모리를 해제하는 함수
void freeList(node* head) {
    // 현재 노드와 다음 노드를 저장하는 포인터 변수 선언
    node* current = head;
    node* next;

    // 현재 노드가 NULL이 될 때까지 반복하여 메모리를 해제
    while (current != NULL) {
        next = current->next;  // 다음 노드를 저장
        free(current);         // 현재 노드의 메모리를 해제
        current = next;        // 다음 노드를 현재 노드로 설정하여 반복
    }
}

// 특정 노드의 데이터를 출력하는 함수
void showNode(node* pnode) {
    if (pnode == NULL) {
        printf("노드가 비어 있습니다.\n");
    } else {
        printf("현재 Node Data: %d\n", pnode->data);
    }
}

// 연결 리스트의 모든 노드를 해제하는 함수
void allFreeNode(node* pnode) {
    // 현재 노드와 다음 노드를 저장하는 포인터 변수 선언
    node* current = pnode;
    node* next;

    // 현재 노드가 NULL이 될 때까지 반복하여 메모리를 해제
    while (current != NULL) {
        next = current->next;  // 다음 노드를 저장
        free(current);         // 현재 노드의 메모리를 해제
        current = next;        // 다음 노드를 현재 노드로 설정하여 반복
    }
}

// 메인 함수
void main() {
    // 연결 리스트의 더미 노드 생성
    node* head = (node*)malloc(sizeof(node));
    head->data = 0; // head에 데이터를 할당할 경우
    head->next = NULL;

    // 새로운 노드 추가
    appendNode(head, 10);
    appendNode(head, 20);
    appendNode(head, 30);
    appendNode(head, 40);
    appendNode(head, 50);

    // 연결 리스트의 첫 번째 노드를 가리키는 포인터 변수 선언
    node* curr = head->next; // head 노드는 더미 노드로, 데이터는 출력하지 않습니다.

    // 현재 노드부터 끝까지 반복하여 데이터 출력
    while (curr != NULL) {
        showNode(curr); // 변경된 부분
        curr = curr->next;
    }

    // 연결 리스트의 메모리 삭제
    allFreeNode(head);

    printf("메모리 삭제완료.\n");
}