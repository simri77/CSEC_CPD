#include <iostream>

using namespace std;

int main()
{
    int n, u = 0, s = 0;
    cin >> n;
    int m[n];
    for (int i = 0; i < n; i++){
        cin >> m[i];

    }

    for (int i = 0; i < n; i++){
        if (m[i] == -1){
            if (s > 0)
                s--;
            else
                u++;
        }
        else
           s += m[i];
    }

    cout << u;
    return 0;
}
