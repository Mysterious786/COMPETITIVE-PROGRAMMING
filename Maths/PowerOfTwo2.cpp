#include <bits/stdc++.h>
using namespace std;
bool checkIsPower(int num)
{
    if (num == 1)
        return true;
    if (num == 0 || num % 2 != 0)
        return false;

    return checkIsPower(num / 2);
}
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    if (checkIsPower(num))
        cout << "True";
    else
    {
        cout << "False";
    }
    return 0;
}