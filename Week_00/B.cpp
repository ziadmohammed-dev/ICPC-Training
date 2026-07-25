#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int my_int;
    long long my_ll;
    char my_char;
    float my_float;
    double my_double;

    cin >> my_int >> my_ll >> my_char >> my_float >> my_double;
    cout << my_int << "\n" << my_ll << "\n" << my_char << "\n" << setprecision(3) << fixed << my_float << "\n" << setprecision(9) << fixed << my_double << "\n";

}

