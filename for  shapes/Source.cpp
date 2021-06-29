#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;


void main()
{
	setlocale(LC_ALL, "Rus");
	int a; cout << "Ведите номер фигуры: "; cin >> a;
	int n; cout << "Введите размер фигуры: "; cin >> n;
	switch (a)
	{
	case 1: 
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)cout << "*";
			cout << endl;
		}  break;

	case 2:
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)cout << "*";
			cout << endl;
		}break;

	case 3:
		for (int i = 1; i <= n; i++)
		{
			for (int j = n; j >= i; j--)cout << "*";
			cout << endl;
		}break;

	case 4:
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)cout << " ";
			for (int j = n; j > i; j--)cout << "*"; cout << endl;
		}break;

	case 5: 
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)cout << " ";
			for (int j = 0; j <= i; j++)cout << "*"; cout << endl;
		}break;
	case 6: 
		for (int i = 0; i < n; i++)
		{
			for (int j = i; j < n; j++)cout << " "; cout << "/";
			for (int j = 0; j < i * 2; j++)cout << " "; cout << "\\";
			cout << endl;
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
			for (int j = 0; j < (n - 1 - i) * 2; j++)cout << " "; cout << "/";
			cout << endl;
		}break;
	case  7:
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0 && i == 0) cout << "+";
				else if (i == 0 && j % 2 == 1)cout << "-";
				else if (i%2==1 && j % 2 == 1)cout << "+";
				else if (i%2==1 && j % 2 == 0)cout << "-";
				else if (i%2==0 && j % 2 == 1)cout << "-";
				else if (i%2==0 && j % 2 == 0)cout << "+";
				else cout << "*";
			}cout << endl;
		}
	}
}
