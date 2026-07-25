#include <iostream>
using namespace std;



int main()
{
	int seconds;

	cin >> seconds;

	int hours = seconds / (60 * 60);
	seconds = seconds % (60 * 60);

	cout << hours << ":";

	int minutes = seconds / 60;
	seconds = seconds % 60;
	cout << minutes << ":";

	cout << seconds << "\n";
}

