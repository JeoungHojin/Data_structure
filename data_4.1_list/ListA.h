#pragma once
#define MAX 100 // 최대 100개 데이터 저장
typedef struct
{
	int Count; //리스트 길이 추적
	int Data[MAX]; //리스트 데이터 => 최대 100 
}listType; //리스트타입은 구조체

void Insert(listType* Lptr, int Position, int Item); //해당 위치에 데이터 삽입 , 자료구조를 파라미터로 전달
void Delete(listType* Lptr, int Position); //해당 위치에 데이터 삭제
void Retrieve(listType* Lptr, int Position, int* ItemPtr); //찾은 데이터를 *ItemPtr에 넣음
void Create(listType* Lptr, int Size,int list);
void Destroy(listType* Lptr) //리스트의 메모리 동적할당해제
void Init(listType* Lptr); //초기화

bool IsEmpty(listType* Lptr); //비었는지 확인
int Length(listType* Lptr); //리스트 내 데이터 갯수
