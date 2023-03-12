//Naive Approach
//Find the maximum of a and b
//untill and unless both got divided by res break
//else increase res

#include<bits/stdc++.h>

using namespace std;
int findLCM(int a, int b){
    ll res = max(a,b);
    while(true){
        if(res%a == 0 && res%b==0) break;
        res++;
    }
}
int main(){
    ll a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<findLCM(a,b);
    return 0;
}