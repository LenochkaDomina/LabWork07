#include<iostream>
#include<iomanip>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;

int main()
{
	cout << "413 Domina Olena Variant 10" << endl;
	{
		double SumN, b = 1.0, q, x = 0.5;
		SumN = b;

		cout << "Calculating the sum of n = 5 elements (x = Const)" << endl;
		for (int n = 0; n < 4; ++n)
		{
			q = (-1) * pow(x, 2) * (2 * pow(n + 1, 2) + 1) / ((2 * pow(n, 2) + 1) * (2 * n + 2) * (2 * n + 1));
			b *= q;
			//cout << b << endl;
			SumN += b;

		}
		cout << "Sum = " << SumN << endl;
	}

	{
		int n = 0;
		double Sum, b = 1.0, q, x = 0.4;
		Sum = b;

		cout << "Calculating the sum while elements are bigger than 0.0001 and x from 0.4 to 1.6" << endl;

		do
		{
			q = (-1) * pow(x + 0.3, 2 * n + 2) * (2 * pow(n + 1, 2) + 1) / ((2 * pow(n, 2) + 1) * (2 * n + 2) * (2 * n + 1) * pow(x, 2 * n));
			b *= q;
			//cout << b << endl;
			Sum += b;

			x += 0.3;
			n++;
		} while (abs(b) >= 0.0001f && x <= 1.3);

		cout << "Sum = "
			<< fixed
			<< setprecision(4)
			<< Sum
			<< endl;
	}
	system("pause");
	return 0;
}