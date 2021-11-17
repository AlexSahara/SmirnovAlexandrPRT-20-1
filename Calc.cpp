#include <iostream>
#include <conio.h>
using namespace std;
int U[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int Y[] = { 0, 0, 0, 0, 0 };
void scanSet(int A[], char name)
{
	cout << " Введите множество " << name << ":" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> A[i];
	}
}

void printSet(int A[], char name)
{
	cout << name << " [";
	for (int i = 0; i < 4; i++)
	{
		cout << A[i] << ", ";
	}
	cout << A[4] << "]" << endl << endl;
}

void chekSet(int A[], char name)
{
	cout << " Введите число для проверки: ";
	int j;
	cin >> j;
	for (int i = 0; i < 5; i++)
	{
		if (A[i] == j)
			break;
	}
	cout << endl << "Число " << j << " принадлежит множеству " << name << endl;
}

void combSet1(int A[])
{
	
	for (int i = 0; i < 5; i++)
	{
		U[i] = A[i];
	}
}

void combSet2(int B[])
{
	for (int i = 5; i < 10; i++)
	{
		U[i] = B[i - 5];
	}

	cout << " [";
	for (int i = 0; i < 9; i++)
	{
		cout << U[i] << ", ";
	}
	cout << U[9] << "]" << endl;
}

void interSet(int A[], int B[])
{
	for (int i = 0; i < 5; i++)
	{
		if (A[i] == B[0])
		{
			Y[0] = A[i];
		}
		if (A[i] == B[1])
		{
			Y[1] = A[i];
		}
		if (A[i] == B[2])
		{
			Y[2] = A[i];
		}
		if (A[i] == B[3])
		{
			Y[3] = A[i];
		}
		if (A[i] == B[4])
		{
			Y[4] = A[i];
		}
	}
	cout << " [";
	for (int i = 0; i < 4; i++)
	{
		if(Y[i] |= 0)
			cout << Y[i] << ", ";
		else
			cout << "-, ";
	}
	if (Y[4] |= 0)
		cout << Y[4] << "]" << endl;
	else
		cout << "-]" << endl;
}

int main()
{
	int x = 0;
	int A[] = { 0, 0, 0, 0, 0 };
	int B[] = { 0, 0, 0, 0, 0 };
	int C[] = { 0, 0, 0, 0, 0 };
	int D[] = { 0, 0, 0, 0, 0 };
	int E[] = { 0, 0, 0, 0, 0 };

	int lowLine = 0;
	int upLine = 100;

	int U[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

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
		cout << "7. Объединение" << endl;
		cout << "8. Пересечение" << endl;
		cout << "0. Выход" << endl;

		cin >> x;
		// const int c = 5;
		switch (x)
		{
		case 1: // Ввод множества
			system("cls");
			for (int i = 0; i < 5; i++)
			{
				int Set;
				cout << "Выберите множество :" << endl 
					<< "1. A" << endl 
					<< "2. B" << endl
					<< "3. C" << endl 
					<< "4. D" << endl 
					<< "5. E" << endl
					<< "Или любую другую цифру для возврата в меню" << endl;
				cin >> Set;
				switch (Set)
				{
				case 1:
					scanSet(A, 'A');
					system("cls");
					break;
				case 2:
					scanSet(B, 'B');
					system("cls");
					break;
				case 3:
					scanSet(C, 'C');
					system("cls");
					break;
				case 4:
					scanSet(D, 'D');
					system("cls");
					break;
				case 5:
					scanSet(E, 'E');
					system("cls");
					break;
				default:
					i = 5;
					//system("pause");
				}

			}
			break;
		case 2: // Вывод множества
			system("cls");
			int Set;
			cout << "Выберите множество для вывода :" << endl
				<< "1. A" << endl
				<< "2. B" << endl
				<< "3. C" << endl
				<< "4. D" << endl
				<< "5. E" << endl
				<< "Или любую другую цифру для возврата в меню" << endl;
			cin >> Set;
			switch (Set)
			{
			case 1:
				printSet(A, 'A');
				system("pause");
				break;
			case 2:
				printSet(B, 'B');
				system("pause");
				break;
			case 3:
				printSet(C, 'C');
				system("pause");
				break;
			case 4:
				printSet(D, 'D');
				system("pause");
				break;
			case 5:
				printSet(E, 'E');
				system("pause");
				break;
			default:
				break;
			}
			break;
		case 3: // Проверка принадлежности множеству
			system("cls");
			for (int i = 0; i < 5; i++)
			{
				int Set;
				cout << "Выберите множество :" << endl
					<< "1. A" << endl
					<< "2. B" << endl
					<< "3. C" << endl
					<< "4. D" << endl
					<< "5. E" << endl
					<< "Или любую другую цифру для возврата в меню" << endl;
				cin >> Set;
				switch (Set)
				{
				case 1:
					chekSet(A, 'A');
					system("pause");
					system("cls");
					break;
				case 2:
					chekSet(B, 'B');
					system("pause");
					system("cls");
					break;
				case 3:
					chekSet(C, 'C');
					system("pause");
					system("cls");
					break;
				case 4:
					chekSet(D, 'D');
					system("pause");
					system("cls");
					break;
				case 5:
					chekSet(E, 'E');
					system("pause");
					system("cls");
					break;
				default:
					i = 5;
				}

			}
			break;
		case 4: // Вывод всех множеств
			system("cls");
			
			printSet(A, 'A');
			printSet(B, 'B');
			printSet(C, 'C');
			printSet(D, 'D');
			printSet(E, 'E');
			
			system("pause");
			break;
		case 5: // проверка принадлежности всем множествам
			system("cls");
			cout << " Введите число для проверки: ";
			int j;
			cin >> j;
			for (int i = 0; i < 5; i++)
			{
				if (A[i] == j)
				{
					for (int i = 0; i < 5; i++)
					{
						if (B[i] == j)
						{
							for (int i = 0; i < 5; i++)
							{
								if (C[i] == j)
								{
									for (int i = 0; i < 5; i++)
									{
										if (D[i] == j)
										{
											for (int i = 0; i < 5; i++)
											{
												if (E[i] == j)
												{
													cout << endl << "Число " << j << " принадлежит всем множествам " << endl;
													break;
												}
											}
											break;
										}
									}
									break;
								}
							}
							break;
						}
					}
					break;
				}
				else
				{
					cout << endl << "Число " << j << " не принадлежит всем множествам " << endl;
					break;
				}
					break;
			}
			system("pause");
			break;
		case 6: // Задать универсум
			system("cls");
			cout << "Задайте нижнюю границу универсума :" << endl;
			cin >> lowLine;
			cout << "Задайте вернюю границу универсума :" << endl;
			cin >> upLine;
			cout << "Задан универсум " << "[" << lowLine << " ... " << upLine << "]" << endl;
			system("pause");
			break;
		case 7 : // Объединение множеств
			system("cls");
			cout << "Выберите первое множество :" << endl
				<< "1. A" << endl
				<< "2. B" << endl
				<< "3. C" << endl
				<< "4. D" << endl
				<< "5. E" << endl
				<< '>';
			cin >> Set;
			cout << endl;
			switch (Set)
			{
			case 1: combSet1(A);
				break;
			case 2: combSet1(B);
				break;
			case 3: combSet1(C);
				break;
			case 4: combSet1(D);
				break;
			case 5: combSet1(E);
				break;

			}

			cout << "Выберите второе множество :" << endl
				<< "1. A" << endl
				<< "2. B" << endl
				<< "3. C" << endl
				<< "4. D" << endl
				<< "5. E" << endl
				<< '>';
			cin >> Set;

			switch (Set)
			{
			case 1: combSet2(A);
				break;
			case 2: combSet2(B);
				break;
			case 3: combSet2(C);
				break;
			case 4: combSet2(D);
				break;
			case 5: combSet2(E);
				break;
			}
			system("pause");
			break;
		case 8 : // Пересечение множеств
			system("cls");
			cout << "Выберите первое множество :" << endl
				<< "1. A" << endl
				<< "2. B" << endl
				<< "3. C" << endl
				<< "4. D" << endl
				<< "5. E" << endl
				<< '>';
			cin >> Set;
			switch (Set)
			{
			case 1: 
				cout << "Выберите второе множество :" << endl
					<< "1. B" << endl
					<< "2. C" << endl
					<< "3. D" << endl
					<< "4. E" << endl
					<< '>';
					cin >> Set;
				switch (Set)
				{
				case 1: interSet(A, B);
					break;
				case 2: interSet(A, C);
					break;
				case 3: interSet(A, D);
					break;
				case 4: interSet(A, E);
					break;
				}
				break;
			case 2: 
				cout << "Выберите второе множество :" << endl
					<< "1. A" << endl
					<< "2. C" << endl
					<< "3. D" << endl
					<< "4. E" << endl
					<< '>';
				cin >> Set;
				switch (Set)
				{
				case 1: interSet(B, A);
					break;
				case 2: interSet(B, C);
					break;
				case 3: interSet(B, D);
					break;
				case 4: interSet(B, E);
					break;
				}
				break;
			case 3: 
				cout << "Выберите второе множество :" << endl
					<< "1. A" << endl
					<< "2. B" << endl
					<< "3. D" << endl
					<< "4. E" << endl
					<< '>';
				cin >> Set;
				switch (Set)
				{
				case 1: interSet(C, A);
					break;
				case 2: interSet(C, B);
					break;
				case 3: interSet(C, D);
					break;
				case 4: interSet(C, E);
					break;
				}
				break;
			case 4: 
				cout << "Выберите второе множество :" << endl
					<< "1. A" << endl
					<< "2. B" << endl
					<< "3. C" << endl
					<< "4. E" << endl
					<< '>';
				cin >> Set;
				switch (Set)
				{
				case 1: interSet(D, A);
					break;
				case 2: interSet(D, B);
					break;
				case 3: interSet(D, C);
					break;
				case 4: interSet(D, E);
					break;
				}
				break;
			case 5: 
				cout << "Выберите второе множество :" << endl
					<< "1. A" << endl
					<< "2. B" << endl
					<< "3. C" << endl
					<< "4. D" << endl
					<< '>';
				cin >> Set;
				switch (Set)
				{
				case 1: interSet(E, A);
					break;
				case 2: interSet(E, B);
					break;
				case 3: interSet(E, C);
					break;
				case 4: interSet(E, D);
					break;
				}
				break;
			}
			system("pause");
			break;
		case 0:
			system("cls");
			return 0;
		default: 
			system("cls");
			cout << "Вы выбрали несуществующий пункт меню!" << endl;
			system("pause");
		}
	}
	return 0;
}
