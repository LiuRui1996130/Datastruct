#pragma once
typedef struct Lnode {
	float coef;
	int exp;
	struct Lnode *next;
}Lnode, *LinkList;

class Polynomial {
public:
	void SetPoly();//创建多项式
	void Add(Polynomial Pa,Polynomial Pb,Polynomial Pc);//多项式相加
	void Multi(Polynomial Pa,Polynomial Pb,Polynomial Pc);//多项式相乘
private:
	LinkList Root;
};