#include <iostream>

using namespace std;

int main()
{

   int n, g = 1;
   string prev, cur;
   cin >> n >> prev;
   for (int i = 0; i < n - 1; i++){
        cin >> cur;
        if (cur != prev){
            g++;
        }
        prev = cur;
   }


   cout << g;
    return 0;
}
