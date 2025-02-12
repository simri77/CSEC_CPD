#include <iostream>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int M = max(Y, W);
    int numerator = 7 - M;
    int denominator = 6;


    int gcd = 1;
    for (int i = numerator; i > 1; i--) {
        if (numerator % i == 0 && denominator % i == 0) {
            gcd = i;
            break;
        }
    }

    cout << (numerator / gcd) << "/" << (denominator / gcd) << endl;
    return 0;
}
