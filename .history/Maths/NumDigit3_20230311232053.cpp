#include <bits/stdc++.h>
using namespace std;
int numDigit(int n)     /////     O(1) O(1)
{
   return (log10(n)+1)
}
int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;
    cout << numDigit(num);
    return 0;
}