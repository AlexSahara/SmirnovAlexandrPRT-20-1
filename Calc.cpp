#include <iostream>
using namespace std;
int main()
{
	int x = 0;

	setlocale(LC_ALL, "rus");

	for (;;)
	{

		cout << "1. Ввод множества" << endl;
		cout << "2. Вывод множества" << endl;
		cout << "3. Проверка принадлежности множеству" << endl;
		cout << "4. Вывод всех множеств" << endl;
		cout << "5. Проверка принадлежности всем множествам" << endl;
		cout << "6. Задать универсум" << endl;
		cout << "0. Выход" << endl;

		cin >> x;

		switch (x)
		{
		case 1:
			system("cls");
			cout << " Введите множество A: " << endl;
			const int c = 5;
			int A[c];
			for (int i = 1; i <= 5; i++)
			{
				cin >> A[i];
			}
			return 0;
			break;
		case 2:
			system("cls");
			cout << " 2000 " << endl;
			return 0;
			break;
		case 3:
			system("cls");
			cout << " 3000 " << endl;
			return 0;
			break;
		default: 
			system("cls");
		}

		system("cls");
		cout << "Вы выбрали несуществующий пункт меню!" << endl;

	}

	return 0;
}
