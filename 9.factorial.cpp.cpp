#include <iostream>
using namespace std;

int main()
{
     int n;
    int fact = 1;

    cout << "Enter a positive integer: ";
    cin >> n;

    for(int i = 1; i <=n; ++i)
    {
        fact *= i;
    }

    cout << "Factorial of " << n << " = " << factorial;    
    return 0;
}
