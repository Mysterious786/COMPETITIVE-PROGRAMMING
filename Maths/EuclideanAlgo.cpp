//This algorithm iterates till a is not equal to b
//Till the condition is true change the value of that number which is bigger by subtracting it with the smaller number
//if condition becomes false just return any one of the value since both are equal
//That is the final answer

#include<bits/stdc++.h>
using namespace std;
int findGCD(int a,int b){
    if(a==0) return a;
    if(b==0) return b;
    while(a!=b){
        if(a>b) a=a-b;
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<findGCD(a,b);
    return 0;

}