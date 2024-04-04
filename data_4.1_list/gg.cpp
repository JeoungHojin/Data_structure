#include "gg.h"

void List::Create(int size) {
	if (this->item == NULL) {
		this->item = new Item[size];
		cout << size << "크기 리스트 생성" << endl;
	}
	else {
		cout << size << "이미 있음" << endl;
		return;
	}
}

void List::Destroy() {
	delete(this->item);
	cout << "삭제" << endl;
}

bool List::IsEmpty() {
	if (Count == 0)
		return true;
	else
		false;
}

bool List::IsFull() {
	if (Count == 5)
		return true;
	else
		false;
}
void List::Insert(int pos, Item I) {
	if (IsFull()==true) {
		cout << "꽉차있음" << endl;
		return;
	}
	if (Count == pos) { // 포지션이랑 카운트랑 같을 때 -> 끝에 삽입되는 경우
		this->item[pos].a = I.a;
		Count++;
		cout << "리스트 끝에 삽입" << endl;
		return;
	}
	if (Count >= pos + 1) { //카운트가 더 클 때
		for (int i = 5 - 2;i >= pos;i++) {
			item[i + 1].a = item[i].a;
		}
		item[pos].a = I.a;
		Count++;
		cout << "리스트 중간에 삽입" << endl;
		return;
	}
	if (Count < pos + 1) { //포지션이 더 클 때
		cout << "범위 초과" << endl;
		return;	
	}
}

void List::Display() {
	cout << "[";
	for (int i = 0; i < Count; i++) {
		cout << item[i].a << (i != Count - 1 ? ", " : "");
	}
	cout << "]\n";
}

void List::Del(int pos, Item I) {
	if (IsEmpty()) {
		cout << "이미 비어있음" << endl;
	}
	else {
		if (pos == 1) {


		}
	}
}
void List::Retrive(Item I) {

}


void List::append(int item_) { //int item_을 입력받아서
	item[Count].a = item_;//item[Count]에 item_을 추가
	Count++;
}

int List::pop() {
	int pop = item[Count-1].a;
	Count--;
	return pop;
}

void List::reverse() {
	for (int i = 0; i < Count / 2; i++) {
		int temp = item[i].a;
		item[i].a = item[Count - i - 1].a;
		item[Count - i - 1].a = temp;
	}
}

void List::clear() {
	for (int i = Count-1;i == 0;i--) {
		Count--;
	}
}

void List::len() {	
	for (int i = 0;i = Count-1;i++) {
		Count;
	}
}
