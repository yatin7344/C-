#include <iostream>

using namespace std;

int sumOfFirstN(int n) {
    return (n * (n + 1)) / 2;
}

int sumOfSeries(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += sumOfFirstN(i);
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int result = sumOfSeries(n);

    cout << "Sum of the series: " << result << endl;

    return 0;
}
