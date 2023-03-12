// a x b = gcd(a,b) x lcm(a,b)
// STL gcd function __gcd(a,b);
// Gcd stand for greatest c

#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
cout<< (a*b)/__gcd(a,b);
return 0;
}