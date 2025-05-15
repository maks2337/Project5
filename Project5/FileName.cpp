//ПРАКТИЧЕСКАЯ РАБОТА № 3 Базовые алгоритмические структуры. Ветвление Задание 2: программма решения квадратного уравнения видв ax^2 + bx + c = 0
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	float a, b, c, d, x1, x2;
	cout << "Введите a = ";
	cin >> a;
	cout << "Введите число b = ";
	cin >> b;
	cout << "Введите число c = ";
	cin >> c;
	if (a == 0) cout << "Введите а не равное нулю";
	else {
		d = b * b - 4 * a * c;
		if (d < 0) cout << "Нет корней" << endl;
		else if (d == 0) {
			x1 = -b / (2 * a);
			cout << "Ответ x1 = " << x1 << setprecision(3) << endl;
		}
		else {
			x1 = (- b + sqrt(d)) / (2 * a);
			x2 = (- b - sqrt(d)) / (2 * a);
			cout << "Ответ x1 = " << x1 << setprecision(3) << endl;
			cout << "Ответ x2 = " << x2 << setprecision(3) << endl;
		}
	}
	system("pause");
	return 0;
}