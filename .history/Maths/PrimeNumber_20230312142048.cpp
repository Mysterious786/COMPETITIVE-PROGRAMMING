//A number that can be divisible by one or itself is know as a prime number;
//Every Prime Number can be represented as 6n-1 or 6n+1
//Except 2 and 3 for the above case
//2 and 3 are onlly consecutive prime number
// 1 cannot be either prime or composite
//GOLDBACH Conjecture : Every even integer greater than 2 can be expreseed as the sum of two prime number
//Why to check upto square root of number
// ---------------------Check Prime-------------------
//         -------------Naive Approach ------------------
// Time Complexity : O(sqrt(n))  Space Complexity
#include<bits/stdc++.h> ///STANDARD LIBRARY
using namespace std;
bool isPrime(int n){
    if(n<=1) return false; ///Edge case
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;

    }
    return true;
}
int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    isPrime(num)?cout<<"Yes":cout<<"No"<<endl;
}
