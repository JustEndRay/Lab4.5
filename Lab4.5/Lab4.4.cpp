#include<iostream>
#include<iomanip>
#include<cmath>
#include<time.h>
using namespace std;
int main()
{
	double x, R, y;
	cout << "R = "; cin >> R;
    for(int i=0;i<=10;i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (x * x + y * y <= R * R && abs(y) >= abs(x))cout << "yes" << endl;
		else cout << "no" << endl;
	}
	srand((unsigned)time(NULL));
	for (int i = 0; i <= 10; i++)
	{
		int A = -R;
		int B = R;
		x = A + rand() % (B-A + 1);
		y = A + rand() % (B-A + 1);
		if (x * x + y * y <= R * R && abs(y) >= abs(x))cout << setw(8) << setprecision(4) << x << "  " << setw(8) << setprecision(4) << y << "  " << "yes" << endl;
		else cout << setw(8) << setprecision(4) << x << "  " << setw(8) << setprecision(4) << y << "  " << "no" << endl;
	}
	return 0;
}