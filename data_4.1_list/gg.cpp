#include "gg.h"

void List::Create(int size) {
	if (this->item == NULL) {
		this->item = new Item[size];
		cout << size << "ũ�� ����Ʈ ����" << endl;
	}
	else {
		cout << size << "�̹� ����" << endl;
		return;
	}
}

void List::Destroy() {
	delete(this->item);
	cout << "����" << endl;
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
		cout << "��������" << endl;
		return;
	}
	if (Count == pos) { // �������̶� ī��Ʈ�� ���� �� -> ���� ���ԵǴ� ���
		this->item[pos].a = I.a;
		Count++;
		cout << "����Ʈ ���� ����" << endl;
		return;
	}
	if (Count >= pos + 1) { //ī��Ʈ�� �� Ŭ ��
		for (int i = 5 - 2;i >= pos;i++) {
			item[i + 1].a = item[i].a;
		}
		item[pos].a = I.a;
		Count++;
		cout << "����Ʈ �߰��� ����" << endl;
		return;
	}
	if (Count < pos + 1) { //�������� �� Ŭ ��
		cout << "���� �ʰ�" << endl;
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
		cout << "�̹� �������" << endl;
	}
	else {
		if (pos == 1) {


		}
	}
}
void List::Retrive(Item I) {

}


void List::append(int item_) { //int item_�� �Է¹޾Ƽ�
	item[Count].a = item_;//item[Count]�� item_�� �߰�
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
