// Naive Approach
// Iterate from 1 to n and which evere divides it completely just print it

#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n){
    for(int i=1;i<=(int)n/2;i++){
        if(n%i==0) cout<<i<<endl;
    }
    cout<<"n"
}
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    printDivisors(num);
    return 0;
}