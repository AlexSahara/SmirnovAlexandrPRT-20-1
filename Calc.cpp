#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int x = 0;
	int A[5] = { 0, 0, 0, 0, 0 };
	int B[5] = { 0, 0, 0, 0, 0 };
	int C[5] = { 0, 0, 0, 0, 0 };
	int D[5] = { 0, 0, 0, 0, 0 };
	int E[5] = { 0, 0, 0, 0, 0 };


	for (;;)
	{
		setlocale(LC_ALL, "rus");
		system("cls");

		cout << "1. Ввод множества" << endl;
		cout << "2. Вывод множества" << endl;
		cout << "3. Проверка принадлежности множеству" << endl;
		cout << "4. Вывод всех множеств" << endl;
		cout << "5. Проверка принадлежности всем множествам" << endl;
		cout << "6. Задать универсум" << endl;
		cout << "0. Выход" << endl;

		cin >> x;
		// const int c = 5;
		switch (x)
		{
		case 1:
			system("cls");
			cout << " Введите множество A: " << endl;
			for (int i = 0; i < 5; i++)
			{
				cin >> A[i];
			}
			system("pause");
			break;
		case 2:
			system("cls");
			cout << "A = [" ;
			for (int i = 0; i < 4; i++)
			{
				cout << A[i] << ", ";
			}
			cout << A[4] << "]" << endl << endl;
			system("pause");
			break;
		case 3:
			system("cls");
			cout << " Введите число для проверки: ";
			int j;
			cin >> j;
			for (int i = 0; i < 5; i++)
			{
				if (A[i] == j)
					cout << endl << "Число " << j << " принадлежит множеству" << endl;
			}
			system("pause");
			break;
		case 4:
			system("cls");

			cout << "A = [";
			for (int i = 0; i < 4; i++)
			{
				cout << A[i] << ", ";
			}
			cout << A[4] << "]" << endl; 

			cout << "B = [";
			for (int i = 0; i < 4; i++)
			{
				cout << B[i] << ", ";
			}
			cout << B[4] << "]" << endl;

			cout << "C = [";
			for (int i = 0; i < 4; i++)
			{
				cout << C[i] << ", ";
			}
			cout << C[4] << "]" << endl;

			cout << "D = [";
			for (int i = 0; i < 4; i++)
			{
				cout << D[i] << ", ";
			}
			cout << D[4] << "]" << endl;

			cout << "E = [";
			for (int i = 0; i < 4; i++)
			{
				cout << E[i] << ", ";
			}
			cout << E[4] << "]" << endl;

			system("pause");
			break;
		case 5:
			system("cls");
			cout << " 4000 " << endl;
			break;
		case 6:
			system("cls");
			cout << " 4000 " << endl;
			break;
		case 0:
			system("cls");
			return 0;
		default: 

			system("cls");
			cout << "Вы выбрали несуществующий пункт меню!" << endl;

		}


	}

	return 0;
}
