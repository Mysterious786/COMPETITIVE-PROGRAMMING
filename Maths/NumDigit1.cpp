#include <bits/stdc++.h>
using namespace std;
int numDigit(int n)     /////     O(N) O(1)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;
    cout << numDigit(num);
    return 0;
}