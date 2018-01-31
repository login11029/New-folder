#include <iostream>
#include<iomanip>

using namespace std;
//void main()
//{
//	int arr[4][4];
//	int a=1;
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			arr[i][j] =a;
//			a++;
//		}
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout <<setw(2)<< arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//}


//void main()
//{
//	int arr[4][4];
//	int a;
//	
//	cin >> a;
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{	
//				arr[i][j] = a;
//				a *= 2;
//		}	
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout << setw(9)<<arr[i][j] << "   ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//}

//void main()
//{
//	int arr[4][4];
//	int a;
//
//	cin >> a;
//
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j=0; j < 4; j++)
//		{
//			arr[i][j] = a;
//			a++;
//		}
//	}
//	
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			cout <<setw(3)<< arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//}


void main()
{
	int arr[2][4];
	int temp;
	int a = 0;
	int move;
	srand(time(0));

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	cout << "Enter number: ";
	cin >> move;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(2) << arr[i][j] << " ";
		}
		cout << endl;
	}
	cin >> move;

	for (int k = 0; k < move; k++)
	{
		for (int j = 0; j < 2; j++)
		{
			for (int i = 0; i < 3; i++)
			{
				temp = arr[j][i];
				arr[j][i] = arr[j][i + 1];
				arr[j][i + 1] = temp;
			}
		}
	}


	cout << endl;


	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(2) << arr[i][j] << " ";
		}
		cout << endl;
	}


	system("pause");
}