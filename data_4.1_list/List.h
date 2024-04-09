#pragma once
#include <iostream>
using namespace std;


typedef struct I {
	int a;
}Item;

class List {
private :
	int Count = 0; //리스트 길이 0으로 초기화
	Item* item; //리스트
public :
	void Create(int size); //리스트 크기 입력 받고 생성 -> 동적메모리 
	void Destroy(); //리스트의 메모리 동적할당 해제
	bool IsEmpty();//리스트 비었는지 확인
	bool IsFull();//리스트 전부 차있는지 확인
	void Insert(int pos, Item I); //지정된 위치에 값을 삽입한다.
	void Display(); // 현재 리스트 내의 해당 아이템을 모두 출력
	void Delete(int pos); //리스트에서 해당 위치 삭제
	int Retrive(int num); //item을 검색하고 있으면 item 위치 반환
	
	void append(int item_); // 맨 뒤에 추가
	int pop(); // 맨 뒤에 삭제
	void reverse(); //역순으로 정렬
	void clear(); //리스트 내용을 모두 삭제
	void len(); //리스트에 포함된 항목 개수를 센다
	
	void sort(); // 순서대로 정렬
	void extend(); //리스트 뒤에 리스트를 추가
	void copy(); //리스트의 내용을 새로운 리스트에 복사한다.
	void sorted(); // 리스트의 항목을 정렬해서 새로운 리스트에 대입한다.

};