#include <iostream>

using namespace std;

int main()
{

    string name;
    cin >> name;
    int n = 0;
    for (int i = 0; i < name.length(); i++){
        bool r = true;
        for(int j = 0; j < i; j++){
            if (name[i] == name[j]){
                r = false;
                break;
            }

        }
    if(r)
        n++;
    }

    if (n % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
