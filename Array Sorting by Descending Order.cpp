#include<iostream>
using namespace std;
int main()
{
	int arr[10], temp;
	cout << "...........Descending Order Array Sorting..........." << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter elements in array: ";
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "The elements are: ";
		cout << arr[i] << endl;
	}
	cout << endl;
	system("pause");
	return 0;
}
