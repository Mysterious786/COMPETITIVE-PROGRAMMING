#include <bits/stdc++.h>
using namespace std;
int numDigit(int n)     /////     O(1) O(1)
{
   return ceil(log10(n));
}
int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;
    cout << numDigit(num);
    return 0;
}