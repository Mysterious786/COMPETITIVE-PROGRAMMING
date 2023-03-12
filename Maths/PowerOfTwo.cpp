#include <bits/stdc++.h>
using namespace std;
bool checkIsPower(int num){
    if(num==0) return false;
    return ceil(log2(num)) == floor(log2(num));
}
int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    if( checkIsPower(num)) cout<<"True";
    else{
        cout<<"False";
    }
    return 0;
}