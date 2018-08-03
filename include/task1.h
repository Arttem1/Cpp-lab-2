//#include <algorithm> //merge
#include <cstring>
using namespace std;
template <typename T> void msort(T * a, size_t n)
{
	T* b = new T[n];
	if (n < 2) //������ �� 1 ��� 0 ��������� �� ������� ������������
		return;
	else
	{
		auto r = n / 2;
		msort(a, r);// ������ ��������
		msort(a + r, r + n % 2); // ������ ��������
		sravn(a, b, n);
		//	std::merge(a, r, a + r, r + n % 2, b);
	}
	intoa(a, b, n);
}
template <typename T> void intoa(T* a, T* b, size_t n)
{
	for (size_t i = 0; i < n; i++)
		a[i] = b[i];
	for (size_t i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
}
template <typename T> void sravn(T* a, T* b, size_t n)
{
	int l = 0;
	auto r = n / 2;
	for (size_t i = 0; i < n; i++)
		//��������� ��-� �� ���� ��������, ������� ��������� � ����� ������
	{
		if (usravn(a[l], a[r]))
		{
			b[i] = a[l];
			l++;
		}
		else
		{
			b[i] = a[r];
			r++;
		}
		if (l == n / 2)
		{
			while (r < n) {
				i++;
				b[i] = a[r];
				r++;
			}
		}
		if (r == n)
		{
			while (l < n / 2) {
				i++;
				b[i] = a[l];
				l++;
			}
		}
	}
}
bool usravn(char* a, char* b)
{
	return strlen(a) < strlen(b);
}
template<class T>
bool usravn(T a, T b)
{
	return a < b;
}