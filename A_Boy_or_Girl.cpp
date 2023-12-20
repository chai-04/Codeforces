#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    set<char>s;
    for(int i=0;i<name.size();i++){
        s.insert(name[i]);
   }
   int n=s.size();
   if(n%2==0){
    cout<<"CHAT WITH HER!";
   }
   else{
    cout<<"IGNORE HIM!";
   }
   return 0;

}