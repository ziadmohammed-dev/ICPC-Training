#include <iostream>
#include <cmath>
using namespace std;

int read_int()
{
	int x;

	cin >> x;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cin >> x;
	}

	return x;
}

int area_of_dodecagon(int r)
{
	return 3 * pow(r, 2);
}

int main()
{
	cout << area_of_dodecagon(read_int());	
}

