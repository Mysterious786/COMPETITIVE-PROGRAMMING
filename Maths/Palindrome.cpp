#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool checkIsPalindrome(int n){
    string str = to_string(n);
    string copyStr = str;
    reverse(str.begin(),str.end());
    return str == copyStr;


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