#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int pos = 1;
    for (char move : t) {
        if (s[pos - 1] == move) {
            pos++;
        }
    }

    cout << pos << endl;
    return 0;
}
