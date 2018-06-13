#include <iostream>

using namespace std;

class Arr
{
private:
	int mas[50];
	int kst;
	int index;

public:
	Arr()
	{
		for (int i = 0; i < 50; i++)
			mas[i] = 0;
	}

	void fill_array()   //���������� ������
	{
		cout << "Enter the size fo massive:"; cin >> kst;
		for (int i = 0; i < kst; i++)
		{
			cout << "mas [" << i << "]: "; cin >> mas[i];
		}
	}

	void insertbeg() //��������� �������� �� �������
	{
		for (int i = kst; i > 0; i--)
			mas[i] = mas[i-1];
		kst++;

		cout << "elem1="; cin >> mas[0];
	}

	void insertend()    // ��������� �������� �� �����
	{
		cout << "elem2="; cin >> mas[kst];
		kst++;
	}

	void viluch()     //  ��������� �������� �� ��������
	{
		cout << "VVdit index:"; cin >> index;
		for (int i = index; i < kst; i++)
			mas[i] = mas[i + 1];
		kst--;
	}

	void sort()     //  ���������� ����������
	{
		int x = 0;
		int tmp;
		for (int i = kst - 1; i > x; i--)
		{
			for (int j = kst - 1; j > x; j--)
			{
				if (mas[j] < mas[j - 1])
				{
					tmp = mas[j];
					mas[j] = mas[j - 1];
					mas[j - 1] = tmp;
				}
			}
		}
	}

	void outputstart()      // ��������� � ������
	{
		for (int i = 0; i < kst; i++)
			cout << mas[i] << "\t";
	}

	void outputend()      // ��������� � ����
	{
		for (int i = kst - 1; i >= 0; i--)
			cout << mas[i];
	}
};

int main()
{
	Arr obj;
	obj.fill_array();
	obj.outputstart();
	obj.insertbeg();
	obj.insertend();
	obj.viluch();
	obj.sort();
	obj.outputstart();
	obj.outputend();
	getchar(); getchar();
	return 0;
}
