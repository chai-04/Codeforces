#include<bits/stdc++.h>
using namespace std;
int main(){
    string str0;cin>>str0;
    string str1;
    string str2;
    string str3;
    string str4;
    string str5;
    cin>>str1>>str2>>str3>>str4>>str5;
    char arr1[5]={str1[0],str2[0],str3[0],str4[0],str5[0]};
    char arr2[5]={str1[1],str2[1],str3[1],str4[1],str5[1]};
    int p=0;
    int q=0;
    for(int i=0;i<5;i++){
       if(arr1[i]==str0[0]){
        p++;
       }
    }
    for(int i=0;i<5;i++){
       if(arr2[i]==str0[1]){
        q++;
       }
    }
    if(p>0||q>0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;

}