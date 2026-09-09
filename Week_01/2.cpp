#include <iostream>
using namespace std;

int read_grade()
{
    int x;

    cin >> x;

    return x;
}

char result_of_grade(int grade)
{
    if (grade >= 85) return 'A';
    else if (grade >= 75) return 'B';
    else if (grade >= 65) return 'C';
    else if (grade >= 50) return 'D';
    else return 'F';
}

int main()
{
    cout << result_of_grade(read_grade());
}

