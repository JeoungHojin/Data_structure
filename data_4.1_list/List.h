#pragma once
#include <iostream>
using namespace std;


typedef struct I {
	int a;
}Item;

class List {
private :
	int Count = 0; //����Ʈ ���� 0���� �ʱ�ȭ
	Item* item; //����Ʈ
public :
	void Create(int size); //����Ʈ ũ�� �Է� �ް� ���� -> �����޸� 
	void Destroy(); //����Ʈ�� �޸� �����Ҵ� ����
	bool IsEmpty();//����Ʈ ������� Ȯ��
	bool IsFull();//����Ʈ ���� ���ִ��� Ȯ��
	void Insert(int pos, Item I); //������ ��ġ�� ���� �����Ѵ�.
	void Display(); // ���� ����Ʈ ���� �ش� �������� ��� ���
	void Delete(int pos); //����Ʈ���� �ش� ��ġ ����
	int Retrive(int num); //item�� �˻��ϰ� ������ item ��ġ ��ȯ
	
	void append(int item_); // �� �ڿ� �߰�
	int pop(); // �� �ڿ� ����
	void reverse(); //�������� ����
	void clear(); //����Ʈ ������ ��� ����
	void len(); //����Ʈ�� ���Ե� �׸� ������ ����
	
	void sort(); // ������� ����
	void extend(); //����Ʈ �ڿ� ����Ʈ�� �߰�
	void copy(); //����Ʈ�� ������ ���ο� ����Ʈ�� �����Ѵ�.
	void sorted(); // ����Ʈ�� �׸��� �����ؼ� ���ο� ����Ʈ�� �����Ѵ�.

};