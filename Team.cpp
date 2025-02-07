#include <iostream>

using namespace std;

int main()
{
   int n, b = 0;


   cin >> n;

   for (int i = 0; i < n; i++){
    int y = 0;
    int p, v, t;
    cin >> p >> v >> t;
    y = p + v + t;
    if (y >= 2){
        b++;
    }
   }

   cout << b;
    return 0;
}
