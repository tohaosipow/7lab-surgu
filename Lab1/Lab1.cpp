#include "pch.h"
/*

#include "DebugList.h"
#include "DebugItem.h"
#include <iostream>

int main()
{
	List* list = new DebugList();
	while (1) {
		cout << "[0] Show All" << endl;
		cout << "[1] Add item" << endl;
		cout << "[2] Insert item" << endl;
		cout << "[3] Delete item" << endl;
		cout << "[4] Clear all" << endl;
		cout << "[5] Count" << endl;
		cout << "[6] Get item" << endl;
		int menuItem;
		cout << "Enter what you do?" << endl;
		cin >> menuItem;
		switch (menuItem)
		{
			case 0: {
				list->print();
				break;
			}
			case 1: {
				cout << "Enter value to add:" << endl;
				int value;
				cin >> value;
				DebugItem * item = new DebugItem(value);
				list->add(item);
				break;
			}
			case 2: {
				cout << "Enter value to add, pos	:" << endl;
				int value;
				int pos;
				cin >> value >> pos;
				DebugItem * item = new DebugItem(value);
				list->insert(item, pos);
				break;
			}
			case 3: {
				cout << "Enter pos which you want delete	:" << endl;
				int pos;
				cin >> pos;
				list->get(pos)->del();
				break;
			}
			case 4: {
				list->clear();
				break;
			}
			case 5: {
				cout << list->count() << endl;
				break;
			}
			case 6: {
				cout << "Enter pos which you want get	:" << endl;
				int pos;
				cin >> pos;
				list->get(pos)->print();
				break;
			}
			default:
				cout << "Command undefined" << endl;
				break;
		}
	}
 
}
*/
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
