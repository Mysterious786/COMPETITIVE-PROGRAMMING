// Naive Approach
// Iterate from 1 to n and which evere divides it completely just print it

#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n){
    for(int i=1;i<=;i++){
        if(n%i==0) cout<<i<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    printDivisors(num);
    return 0;
}