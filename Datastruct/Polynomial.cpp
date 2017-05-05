#include "Polynomial.h"
#include "stdlib.h"
#include "iostream"
using namespace std;

void Polynomial::SetPoly()
{	
	LinkList L;
	int a=1;
	Root =(LinkList)malloc(sizeof(LinkList));
	cout << "请输入第1个结点的系数:";
	cin >> Root->coef;
	cout << "请输入第1个结点的指数:";
	cin >> Root->exp;
	Root->next = NULL;
	while (a) {
		L = (LinkList)malloc(sizeof(LinkList));
		L->next = NULL;
		int i = 2;
		cout << "请输入第" << i << "个结点的系数";
		cin >> L->coef;
		cout << "请输入第" << i << "个结点的指数";
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

