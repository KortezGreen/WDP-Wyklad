#include <iostream>

using namespace std;

int main()
{

    int a, b, a2, b2;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;
    a2 = a;
    b2 = b;

    if (b < 0)
    {
        b = b * (-1);
    }
    if (a < 0)
    {
        a = a * (-1);
    }

    if (a < b)
    {
        cout << "Liczba o najwiekszej wartosci bezwzglednej to: " << b2 << endl;
    }
    else if (a > b)
    {
        cout << "Liczba o najwiekszej wartosci bezwzglednej to: " << a2 << endl;
    }
    else if (a = b)
    {
        cout << "Wartosci bezwzgledne podanych liczb sa sobie rowne." << endl;
    }

    return 0;
}
