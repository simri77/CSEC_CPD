#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int rotations = 0;
    char current = 'a';
    for (char target : s) {
        int steps = 0;
        char temp = current;


        while (temp != target) {
            temp++;
            if (temp > 'z') temp = 'a';
            steps++;
        }

        int backwardSteps = 0;
        temp = current;


        while (temp != target) {
            temp--;
            if (temp < 'a') temp = 'z';
            backwardSteps++;
        }

        if (steps < backwardSteps)
            rotations += steps;
        else
            rotations += backwardSteps;

        current = target;
    }

    cout << rotations;
    return 0;
}
