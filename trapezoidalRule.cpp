#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return exp(x);
}

double trapeziodalRule( double a, double b, int n)
{
    double h=(b-a)/n;
    double sum=f(a)+f(b);
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        sum += 2 * f(x);
    }

    return (h / 2) * sum;
}
int main()
{
    double a,b;
    int n;
    cin>>a>>b>>n;
    double result=trapeziodalRule(a,b,n);
    
    cout<<result<<endl;
    return 0;
}