#pragma once
typedef struct Lnode {
	float coef;
	int exp;
	struct Lnode *next;
}Lnode, *LinkList;

class Polynomial {
public:
	void SetPoly();//��������ʽ
	void Add(Polynomial Pa,Polynomial Pb,Polynomial Pc);//����ʽ���
	void Multi(Polynomial Pa,Polynomial Pb,Polynomial Pc);//����ʽ���
private:
	LinkList Root;
};