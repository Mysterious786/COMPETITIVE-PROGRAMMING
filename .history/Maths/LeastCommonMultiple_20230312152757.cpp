// a x b = gcd(a,b) x lcm(a,b)
// STL gcd function __gcd(a,b);
// Gcd stand for greatest common divisor
//It is the greatest common factor tht divides them exactly


#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
cout<< (a*b)/__gcd(a,b);
return 0;
}