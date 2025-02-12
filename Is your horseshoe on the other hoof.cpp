#include <iostream>
using namespace std;

int main() {
    int s[4];


    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }

    int uniqueCount = 0;


    for (int i = 0; i < 4; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (s[i] == s[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueCount++;
        }
    }


    cout << 4 - uniqueCount << endl;

    return 0;
}
