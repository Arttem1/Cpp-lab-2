#include <iostream>
#include "task3.h"
using namespace std;
int main()
{
	const size_t n = 5;
	int arr1[n]{ 1, 2, 3, 4, 5 };
	map<int, n>(arr1, change);
	for (int i = 0; i < n; i++)
		cout << arr1[i] << " ";
	cout << endl;
	double arr2[5]{ 1, 2.2, 3.3, 4.4, 5 };
	map<double, n>(arr2, change);
	for (int i = 0; i < n; i++)
		cout << arr2[i] << " ";
	cout << endl;
	char arr3[n]{ '1', '2', '3', '4', '5' };
	map<char, n>(arr3, change);
	for (int i = 0; i < n; i++)
		cout << arr3[i] << " ";
	cout << endl;
	char*arr4[n];
	for (size_t i = 0; i < n; i++)
	{
		arr4[i] = new char[i + 2];
		for (size_t j = 0; j < i + 1; j++)
			arr4[i][j] = '0' + i;
		arr4[i][i + 1] = '\0';
	}
	map<char*, n>(arr4, change);
	for (int i = 0; i < n; i++)
		cout << arr4[i] << " ";
	cout << endl;
	for (size_t i = 0; i < n; i++)
		delete[] arr4[i];
	return 0;
}

