#include <iostream>
#include <string>
using namespace std;

int main() {
	system("chcp 1251>nul");
	string name ;
	cout << "Введите Имя Пользователя: ";
	cin >> name;
	cout << "Здравствуйте, " << name << "!";
}