#include <iostream>
#include <cmath>
using namespace std;

double Sum(int k, int n, double x)
{
    if (k > n)
    {
        return 0;
    }

    if (k <= n)
    {
        double term = pow(-1, k) * cos(k * x) / (k * k);

        return term + Sum(k + 1, n, x);
    }
}

int main()
{
    setlocale(LC_ALL, "ru");
    int n;
    double x;

    cout << "¬ведите n: ";
    cin >> n;
    cout << "¬ведите x: ";
    cin >> x;

    double S = Sum(1, n, x);

    cout << "S = " << S;

    return 0;
}
