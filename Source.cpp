#include<iostream>
#include<iomanip>
#define _USE_MATH_DEFINES
#include<math.h>
using namespace std;

int main()
{
	cout << "413 Domina Olena Variant 10" << endl;
	{
		double sum, b = 1.0, q, x = 0.5;
		sum = b;

		cout << "Calculating the sum of n = 5 elements (x = Const)" << endl;
		for (int n = 0; n < 4; ++n)
		{
			q = (-1) * pow(x, 2) * (2 * pow(n + 1, 2) + 1) / ((2 * pow(n, 2) + 1) * (2 * n + 2) * (2 * n + 1));
			b *= q;
			//cout << b << endl;
			sum += b;

		}
		cout << "Sum = " << sum << endl;
	}

	{
		cout << "Calculating the sum while elements are bigger than 0.0001 and x from 0.4 to 1.6" << endl;

		for (double x = 0.4; x <= 1.6; x += 0.3)
		{
			int n = 0;
			double b = 1.0, sum, q;
			sum = b;
		
			while (abs(b) >= 0.0001f)
			{
				q = (-1) * pow(x, 2) * (2 * pow(n + 1, 2) + 1) / ((2 * pow(n, 2) + 1) * (2 * n + 2) * (2 * n + 1));
				b *= q;
				//cout << b << endl;
				sum += b;
		
				n++;
			}
		
			cout << "x = " 
				<< fixed
				<< setprecision(1)
				<< x
				<< " Sum = "
				<< fixed
				<< setprecision(4)
				<< sum
				<< endl;
		}
	}
	system("pause");
	return 0;
}
