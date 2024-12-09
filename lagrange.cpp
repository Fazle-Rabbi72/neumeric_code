#include<bits/stdc++.h>
using namespace std;

double lagrangeInterpolation(const vector<double>& x, const vector<double>& y, double x_val) {
    double result = 0.0;

    int n = x.size();
    for (int i = 0; i < n; i++) {
        double term = y[i];

        for (int j = 0; j < n; j++) {
            if (i != j) {
                term *= (x_val - x[j]) / (x[i] - x[j]);
            }
        }
        result += term;
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    vector<double> x(n), y(n);

    cout << "Enter the x values:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    cout << "Enter the corresponding y values:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }

    double x_val;
    cout << "Enter the x value to interpolate: ";
    cin >> x_val;

    double interpolated_value = lagrangeInterpolation(x, y, x_val);
    cout << "Interpolated value at x = " << x_val << " is " << interpolated_value << endl;

    return 0;
}
