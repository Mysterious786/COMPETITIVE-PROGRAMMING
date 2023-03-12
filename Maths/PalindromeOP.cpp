#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool checkIsPalindrome(int n){
   int copyNum = n;
   int sum =0;
   while(copyNum>0){
    int rem = copyNum%10;
    sum = sum*10+rem;
    copyNum/=10;

   }
   return sum==n;

}
int main(){
    int num;
    cout<<"Enter the num"<<endl;
    cin>>num;
    if( checkIsPalindrome(num)) cout<<"True";
    else{
        cout<<"False";
    }
    return 0;
}