#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int total = 0;
    for(int i=0;i<n;i++){
        int element;
        cout<<"Enter the value of data "<<endl;
        cin>>element;
        total+=element;
    }
    cout << total/n;
    return 0;
}