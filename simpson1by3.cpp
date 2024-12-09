#include <bits/stdc++.h>
using namespace std;


double f(double x)
{
    
    return x * x;
}

double simpsonsOneThird(double a, double b, int n)
{
    
    if (n % 2 != 0)
    {
        cout << "n must be even. Please enter an even number: ";
        cin >> n;
    }

    double h = (b - a) / n; 
    double sum = f(a) + f(b);

    for (int i = 1; i < n; i++)
    {
        double x = a + i * h;
        if (i % 2 == 0)
        {
            sum += 2 * f(x);
        }
        else
        {
            sum += 4 * f(x);
        }
    }

    return (h / 3) * sum;
}

int main()
{
    double a, b;
    int n;

    
    cout << "Enter the lower limit (a): ";
    cin >> a;
    cout << "Enter the upper limit (b): ";
    cin >> b;
    cout << "Enter the number of subintervals (n): ";
    cin >> n;

    double result = simpsonsOneThird(a, b, n);
    cout << "The approximate integral is: " << result << endl;

    return 0;
}
