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
	if (count == 0)
		return true;
	else
		false;
}

bool List::IsFull() {
	if (count == 0)
		return true;
	else
		false;
}
void List::Insert(int pos, Item I) {
	if (IsFull() == true) {
		cout << "꽉차있음" << endl;
		return;
	}
	if (count == pos) { // 포짓션이랑 카운트랑 같을 때 -> 끝에 삽입되는 경우
		this->item[pos].a = I.a;
		count++;
		cout << "리스트 끝에 삽입" << endl;
		return;
	}
	if (count >= pos + 1) { //카운트가 더 클 때
		for (int i = 5 - 2;i >= pos;i++) {
			item[i + 1].a = item[i].a;
		}
		item[pos].a = I.a;
		count++;
		cout << "리스트 중간에 삽입" << endl;
		return;
	}
	if (count < pos + 1) { //포지션이 더 클 때
		cout << "범위 초과" << endl;
		return;	
	}
}

void List::Display() {
	for (int i = 0; i = count; i++) {
		cout << item[i].a;
		cout << endl;
	}
}

void List::Delete(int pos) {
	
}

void List::Retrive(Item I) {

}