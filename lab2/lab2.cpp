

#include <iostream>
using namespace std;

int main()
{
	int a;
	setlocale(LC_ALL, "Russian");
	cout << "Введите номер задания\n";
	cin >> a;
	if (a == 1) {
		int A;
		int B;
		int C;

		cout << "Введите числа А, В, С";
		cin >> A;
		cin >> B;
		cin >> C;
		if (A > B && B > C) cout << A - B - C;
		else if (A < B && B % C == 0) cout << B / C + B - A;
		else cout << A + B + C;
	}
	else if (a == 2) {
		int N;
		cout << "Введите N";
		cin >> N;
		switch (N)
		{
		case 0:
			cout << "Все хорошо";
			break;
		
		case 1:
			cout << "Ошибка чтения файла";
			break; 
		case 2:
			cout << "Ошибка записи файла";
			break; 
		case 3:
			cout << "Не все поля определены";
			break;
		default:
			cout << "Что-то пошло не так";
			break;
		}

	}
	else {
		cout << "Что-то пошло не так";
	}
}





















