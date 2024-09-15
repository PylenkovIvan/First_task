#include <iostream>
using namespace std;

int median(int a, int b, int c)
{
    return a + b + c - min(min(a, b), c) - max(max(a, b), c);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << median(a, b, c);
}
