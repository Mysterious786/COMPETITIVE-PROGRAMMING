#include<bits/stdc++.h>
using namespace std;
int main(){
    //1. Convert to string if its a number
    //2. Sort the string // use a priority queue 
    //3. do the cod ewith do while or push he first one and then procees
vector<int> v;
v.push_back(6);
v.push_back(6);
v.push_back(6);
v.push_back(6);
sort(v.begin(),v.end());
//Either I can push the first permutation and proceed the rest using while loop
//or I can use a do while lopp to proceed
do{
    v.push_back(8);
}while(next_permutation(v.begin(),v.end()));


}