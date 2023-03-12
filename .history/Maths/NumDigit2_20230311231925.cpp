#include <bits/stdc++.h>
using namespace std;
int numDigit(int n)     /////     O(N) O(N)
{
    if(n==0) return 0;
    return 1 + numDigit(n/10);

}
int main()
{
    int num;
    cout << "Enter the value of num" << endl;
    cin >> num;
    cout << numDigit(num);
    return 0;
}