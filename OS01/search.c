#include<stdio.h>

#include<string.h>

#include<stdlib.h>

 

 

typedef struct student {

    char name[11];

    char studentId[11];

}Student;

 

typedef struct node {

    Student data;

    struct Node* next;

}Node;

 

Node* head, * tail; //머리와 꼬리노드 생성

 

void init() //리스트 초기화

{

    head = (Node*)malloc(sizeof(Node));

    tail = (Node*)malloc(sizeof(Node));

    head->next = tail;

    tail->next = tail;

}

Node* makenode(char* name, char* number) //노드생성

{

    Node* s = (Node*)malloc(sizeof(Node));

    strcpy(s->data.name, name);

    strcpy(s->data.studentId, number);

    return s;

}

void insert(Node* node) //노드를 리스트에 삽입

{

    node->next = head->next;

    head->next = node;

}

 

 

void print(Node* t) //리스트출력

{

    while (t != tail)

    {

        printf("%s", t->data.name);

        printf("%s\n", t->data.studentId);

        t = t->next;

    }

}

 

int searchArray(Student* list, char*str) {

    for (int i = 0;i < 10;i++)

    {

        if (strcmp(list[i].name, str) == 0)

        {

            printf("학번 :%s\n", list[i].studentId);

            return 0;

        }

        else if (strcmp(list[i].studentId, str) == 0)

        {

            printf("이름 :%s\n", list[i].name);

            return 0;

        }

    }

    printf("찾으시는 정보가 없습니다"); return -1;

}

 

int searchList(char* str2) {

    Node* cur = head;

 

   

    while (cur != tail) //리스트 끝날때까지 반복

    {

        if (strcmp(cur->data.name, str2) == 0) //입력된 문자열이 해당노드의 이름과 일치하면 학번출력 

        {

            printf("학번 :%s\n", cur->data.studentId);

            return 0;

        }

        else if (strcmp(cur->data.studentId, str2) == 0) //입력된 문자열이 해당노드의 학번과 일치하면 이름출력

        {

            printf("이름 :%s\n", cur->data.name);

            return 0;

        }

        cur = cur->next;

    }

    printf("찾으시는 정보가 없습니다"); return -1; //예외처리

}

int main()

 

{

    //배열로 출력

    char str[11];

    Student list[10] = { {"조민기","2016115921"},{"미나","2018111111"},{"다현","2018111112"},{"모모","2018111113"} ,{"사나","2018111114"},{"나연","2018111115"},{"지효","2018111116"},{"쯔위","2018111117"},{"채영","2018111118"},{"정연","2018111119"} };

    printf("학번 혹은 이름을  입력하세요\n");

    gets(str);

    searchArray(list, str);

 

 

    //리스트로출력

    init();

    insert(makenode("조민기", "2016115921"));

    insert(makenode("미나", "2018111111"));

    insert(makenode("다현", "2018115921"));

    insert(makenode("나연", "2018115922"));

    insert(makenode("정연", "2018115923"));

    insert(makenode("채영", "2018115924"));

    insert(makenode("쯔위", "2018115925"));

    insert(makenode("모모", "2018115926"));

    insert(makenode("사나", "2018115927"));

    insert(makenode("지효", "2018115928"));

    //print(head->next);

 

    char str2[11];  

 

    printf("\n학번 혹은 이름을  입력하세요\n");

    gets(str2);

    searchList(str2);

   

}
