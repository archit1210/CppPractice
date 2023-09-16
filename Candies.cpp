#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

int main() {
    // Declare variables as double
    double principal, rate, time;
    cin >> principal >> rate >> time;

    // Calculate interest
    double interest = (principal * rate * time) / 100;

    // Set the precision to 6 decimal places
    cout << fixed << setprecision(6) << interest << endl;

    return 0;
}
