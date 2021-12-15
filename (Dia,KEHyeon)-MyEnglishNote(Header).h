#define MAX_LENGTHS 25

typedef struct listNode {
    char data[25];
    struct listNode* link;
}listNode;

typedef struct {
    listNode* head;
}linkedList_h;;

// 공백 연결 리스트 생성
linkedList_h* createLinkedList_h();

// 연결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h(linkedList_h* L);

// 연결 리스트를 순서대로 출력하는 연사
void printList(linkedList_h* L);

// 첫번째 노드로 삽입하는 연산
void insertFirstNode(linkedList_h* L, char* x);

// 노드를 pre 뒤에 삽입하는 연산
void insertMiddleNode(linkedList_h* L, listNode* pre, char* x);

// 마지막에 노드를 삽입하는 연산
void insertLastNode(linkedList_h* L, char* x);

// 리스트에서 x 노드를 탐색하기
listNode* searchNode(linkedList_h* L, char* x);

//프로그램 사용 메뉴얼을 알려줌
void manual();

// 프로그램 맨 처음 실행시 여러 문장들을 출력함
void printFirst();

// 메뉴들을 출력해주고 메뉴값을 리턴시켜줌
int printMenu();

//새로운 영어단어를 입력받아줌
void NewEnglishVoca();

//영어단어를 삭제시켜줌
void DeleteEnglishVoca();

//현재 연결리스트에 존재하는 모든 영어단어들을 출력해줌
void PrintEnglishVoca();

//현재 연결리스트에 존재하는 영단어들을 가지고 테스트를 진행함
void TestEnglishVoca();