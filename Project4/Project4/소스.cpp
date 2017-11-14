#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
};

class NamedCircle :public Circle {
	string name;
public:
	NamedCircle(int radius = 0, string name = "");
	void setNamedCircle(int radius, string name);
	string getName();
	void show();
};
NamedCircle::NamedCircle(int radius, string name) {
	this->name = name;
	setRadius(radius);
}
void NamedCircle::setNamedCircle(int radius, string name) {
	this->name = name;
	setRadius(radius);
}
void NamedCircle::show() {
	cout << "Ŭ����,�Ӽ�,���,������ִ�,��ӹ޴�,��üȭ,��Ȱ�뼺,ġȯ,ġȯ,private,public,protected,�Ѵ�,�⺻Ŭ������ �����ڰ� ���� ������� �Ļ�Ŭ������ �����ڰ�,����,���߿�,�ߺ�,�ߺ�\n" << endl;
	cout << "�������� " << getRadius() << "�� " << getName() << endl;
}
string NamedCircle::getName() {
	return name;
}
int main()
{
	NamedCircle waffle(3, "waffle");
	waffle.show();
}