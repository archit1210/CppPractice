#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int maxNum = -1; // Initialize maxNum to a negative value
    
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        
        // Update maxNum if the current number is greater
        if (num > maxNum) {
            maxNum = num;
        }
    }
    
    if (maxNum % 2 == 0) {
        cout << "WON" << endl;
    } else {
        cout << "LOST" << endl;
    }
    
    return 0;
}
