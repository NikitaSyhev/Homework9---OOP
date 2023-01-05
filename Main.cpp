//���� ������ ������ � ������� ������������� �������
#include <iostream>
#include <string>


//1. ��� ������� ������� ����������� �� ��������� (���������: ������ ��������
//�� ���������� ���������, ������ �������� � ���� �������� �����).

//2. ������ ������� ����������� �� ���������
//3. ���������� � ����������� ��� operator[] ��� ������� � ��������� ����
//std::string �� �������
//4. ���������� � ����������� ��� ������ ������������ ������ �� ������
//�������


class MyClass
{
public:
	//1. ��� ������� ������� ����������� �� ���������
	MyClass() : _name("Noname") {}
	//MyClass() {this ->_name = "Noname"}
	//2. ������ ������� ����������� �� ���������
	//MyClass() = delete; - ���������������, ����� �� �������
//	3. ���������� � ����������� ��� operator[] ��� ������� � ��������� ����
		//std::string �� �������

	MyClass(const std::string& name) : _name(name) {}
	const char operator[](int index) {
		return _name[index];
	}

	//4. ���������� � ����������� ��� ������ ������������ ������ �� ������
	//�������

	const std::string& getName()const {
		return _name;
	}

private:

	std::string _name;

};




int main() {
	setlocale(LC_ALL, "Russian");
	int m, n;

	



















	return 0;
}