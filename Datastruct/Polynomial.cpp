#include "Polynomial.h"
#include "stdlib.h"
#include "iostream"
using namespace std;

void Polynomial::SetPoly()
{	
	LinkList L;
	int a=1;
	Root =(LinkList)malloc(sizeof(LinkList));
	cout << "�������1������ϵ��:";
	cin >> Root->coef;
	cout << "�������1������ָ��:";
	cin >> Root->exp;
	Root->next = NULL;
	while (a) {
		L = (LinkList)malloc(sizeof(LinkList));
		L->next = NULL;
		int i = 2;
		cout << "�������" << i << "������ϵ��";
		cin >> L->coef;
		cout << "�������" << i << "������ָ��";
		cin >> L->exp;
		Root->next = L;
		i++;
	}
}

void Polynomial::Add(Polynomial Pa, Polynomial Pb, Polynomial Pc)
{
	LinkList ha, hb, temp;
	ha = Pa.Root;
	hb = Pb.Root;


}

void Polynomial::Multi(Polynomial Pa, Polynomial Pb, Polynomial Pc)
{
}

