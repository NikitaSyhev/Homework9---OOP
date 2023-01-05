//Ётот проект создан с помощью классического шаблона
#include <iostream>
#include <string>


//1. ƒва способа создать конструктор по умолчанию (подсказка: первым способом
//мы пользуемс€ регул€рно, второй включает в себ€ ключевое слово).

//2. —пособ удалить конструктор по умолчанию
//3. ќбъ€вление и определение дл€ operator[] дл€ доступа к элементам пол€
//std::string по индексу
//4. ќбъ€вление и определение дл€ любого константного метода по своему
//желанию


class MyClass
{
public:
	//1. ƒва способа создать конструктор по умолчанию
	MyClass() : _name("Noname") {}
	//MyClass() {this ->_name = "Noname"}
	//2. —пособ удалить конструктор по умолчанию
	//MyClass() = delete; - закомментировал, чтобы не удал€ть
//	3. ќбъ€вление и определение дл€ operator[] дл€ доступа к элементам пол€
		//std::string по индексу

	MyClass(const std::string& name) : _name(name) {}
	const char operator[](int index) {
		return _name[index];
	}

	//4. ќбъ€вление и определение дл€ любого константного метода по своему
	//желанию

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