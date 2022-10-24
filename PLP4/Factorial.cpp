#include <iostream>
using namespace std;

//Declaration before Main
int fact(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factorial of " << n << " = " << fact(n);

    return 0;
}

//Definition after Main
int fact(int n)
{
    if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
