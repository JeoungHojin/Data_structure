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
		cout << "��������" << endl;
		return;
	}
	if (count == pos) { // �������̶� ī��Ʈ�� ���� �� -> ���� ���ԵǴ� ���
		this->item[pos].a = I.a;
		count++;
		cout << "����Ʈ ���� ����" << endl;
		return;
	}
	if (count >= pos + 1) { //ī��Ʈ�� �� Ŭ ��
		for (int i = 5 - 2;i >= pos;i++) {
			item[i + 1].a = item[i].a;
		}
		item[pos].a = I.a;
		count++;
		cout << "����Ʈ �߰��� ����" << endl;
		return;
	}
	if (count < pos + 1) { //�������� �� Ŭ ��
		cout << "���� �ʰ�" << endl;
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