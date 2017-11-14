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
	cout << "클래스,속성,기능,상속해주는,상속받는,구체화,재활용성,치환,치환,private,public,protected,둘다,기본클래스의 생성자가 먼저 실행된후 파생클래스의 생성자가,먼저,나중에,중복,중복\n" << endl;
	cout << "반지름이 " << getRadius() << "인 " << getName() << endl;
}
string NamedCircle::getName() {
	return name;
}
int main()
{
	NamedCircle waffle(3, "waffle");
	waffle.show();
}