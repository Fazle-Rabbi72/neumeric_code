#include<bits/stdc++.h>
using namespace std;

double f(double x) {
    return 1 / (1 + x * x); 
}


double simpsonsThreeEighth(double a, double b, int n) {
    
    if (n % 3 != 0) {
        cout << "Number of intervals must be a multiple of 3. Exiting...\n";
        return -1;
    }

    double h = (b - a) / n; 
    double sum = f(a) + f(b); 

    
    for (int i = 1; i < n; i++) {
        double x = a + i * h;
        if (i % 3 == 0) {
            sum += 2 * f(x); 
        } else {
            sum += 3 * f(x); 
        }
    }

    return (3 * h / 8) * sum;
}

int main() {
    double a, b;
    int n;

   
    cout << "Enter the lower limit (a): ";
    cin >> a;
    cout << "Enter the upper limit (b): ";
    cin >> b;

    
    cout << "Enter the number of intervals (multiple of 3): ";
    cin >> n;

    double result = simpsonsThreeEighth(a, b, n);
    if (result != -1) {
        cout << "The approximate value of the integral is: " << result << endl;
    }

    return 0;
}
