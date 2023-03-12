//Efficient Approach
//If we look carefully then all the divisors occur in pair
//if n=100  (1,100) (2,50) (4,25) (5,20)
#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n){
    for(int i =1 ;i<=sqrt(n);i++){
        if(n%i==0){
            //For same pair we will print only one
            if(n/i==i) cout<<i<<endl;
            else{
                cout<<i<<end;
                
            }
        }
    }
}
int main(){
    int num;
    cout<<"Enter the value of num"<<endl;
    cin>>num;
    cout<<"The divisors of num are"<<endl;
    printDivisors(num);
    return 0;
}