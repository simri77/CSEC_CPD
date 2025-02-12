#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    int n = 1;
    while (true) {
        int c = n * k;
        if (c % 10 == 0 || c % 10 == r) {
            cout << n;
            break;
        }
        n++;
    }

    return 0;
}
