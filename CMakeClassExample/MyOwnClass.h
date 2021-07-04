#ifndef MYOWNCLASS_H
#define MYOWNCLASS_H

class MyOwnClass {
private:
	int Property1;
	int Property2;
public:
	MyOwnClass(); // contructor
	~MyOwnClass(); //destructor

	// all public methods
	void SetProperty1(int inputProperty1);
	void SetProperty2(int inputProperty2);
	int GetProperty1();
	int GetProperty2();
	void PrintData(string message);
};


MyOwnClass::MyOwnClass() {
	Property1 = 0;
	Property2 = 0;
	std::cout << "CLASS CONSTRUCTOR" << "\n";
} //constructor

MyOwnClass::~MyOwnClass() {
	std::cout << "CLASS DESCTRUCTOR" << "\n";
}

void MyOwnClass::SetProperty1(int inputProperty1) {
	Property1 = inputProperty1;
	std::cout << "Setter Property1" << "\n";
}

void MyOwnClass::SetProperty2(int inputProperty2) {
	Property2 = inputProperty2;
	std::cout << "Setter Property2" << "\n";
}

int MyOwnClass::GetProperty1() {
	std::cout << "Getter Property1" << "\n";
	return Property1;
}

int MyOwnClass::GetProperty2() {
	std::cout << "Getter Property2" << "\n";
	return Property2;
}

void MyOwnClass::PrintData(string message) {
	std::cout << "PRINTING:" << message << "\n";
}

#endif