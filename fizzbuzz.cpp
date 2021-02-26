// Name: Haiqa Kamran
// Date: 2/22/21
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   int X, Y, N;
   cin >> X;
   cin >> Y;
   cin >> N;

   cout << endl;

   for (int i = 1; i <= N; i++) {
    if (i % (X*Y) == 0)
    {   
        cout << "fizzbuzz\n";
    }
    else if (i % X == 0)
   {
        cout << "fizz\n";
   }
   else if (i % Y == 0)
   {
        cout << "buzz\n";
   }
    else
    {
        cout << i << endl;
    }
   }
}

