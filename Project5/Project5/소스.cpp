#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	enum { male, female };
protected:
	string name;
	int age;

public:
	Person() : age(0) { }
	Person(const string& name, int age) : name(name), age(age) { }
	void Print() const
	{
		cout << "이름 : " << &name << ", 나이 : " << age;
	}
};
class Man :public Person {
	string name;
public:
	Man(int age = 0, string name = "");
	void setMan(int age, string name);
	string getMan();
	void show();
};
Man::Man(int age, string name) {
	this->name = name;
	setMan(age,name);

}
void Man::setMan(int age, string name) {
	this->name = name;
	setMan(age, name);
}
void Man::show() {
	cout << "이름 : " << getMan() << "나이 : " << age << "성별 : " << "남";

}

class Woman : public Person {


};

int main()
{
	Man m1("홍길동", 23);
	m1.Print();

	Woman w1("이아름", 21);
	w1.Print();

	return 0;
}