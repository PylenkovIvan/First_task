#include <iostream>
#include <functional>
using namespace std;

int median(int a, int b, int c, function<bool(int, int)> compare)
{
    if (compare(a, b) and compare(b, c))
    {
        return b;
    }
    if (compare(c, b) and compare(b, a))
    {
        return b;
    }
    if (compare(b, a) and compare(a, c))
    {
        return a;
    }
    if (compare(c, a) and compare(a, b))
    {
        return a;
    }
    if (compare(a, c) and compare(c, b))
    {
        return c;
    }
    if (compare(b, c) and compare(c, a))
    {
        return c;
    }
}

bool is_less(int a, int b)
{
    if (a > b or a == b)
    {
        return false;
    }
    return true;
}

bool less_by_absolute(int a, int b)
{
    return abs(a) < abs(b);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << median(a, b, c, is_less) << '\n';
    cout << median(a, b, c, less_by_absolute);
}

