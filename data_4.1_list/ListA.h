#pragma once
#define MAX 100 // �ִ� 100�� ������ ����
typedef struct
{
	int Count; //����Ʈ ���� ����
	int Data[MAX]; //����Ʈ ������ => �ִ� 100 
}listType; //����ƮŸ���� ����ü

void Insert(listType* Lptr, int Position, int Item); //�ش� ��ġ�� ������ ���� , �ڷᱸ���� �Ķ���ͷ� ����
void Delete(listType* Lptr, int Position); //�ش� ��ġ�� ������ ����
void Retrieve(listType* Lptr, int Position, int* ItemPtr); //ã�� �����͸� *ItemPtr�� ����
void Create(listType* Lptr, int Size,int list);
void Destroy(listType* Lptr) //����Ʈ�� �޸� �����Ҵ�����
void Init(listType* Lptr); //�ʱ�ȭ

bool IsEmpty(listType* Lptr); //������� Ȯ��
int Length(listType* Lptr); //����Ʈ �� ������ ����
