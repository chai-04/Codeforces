#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int a,b;
    vector<int>great;
    vector<int>less;
    vector<int>ne;
    while(n--){
        cin>>a>>b;
        if(a==1){
            great.push_back(b);
        }
        else if(a==2){
            less.push_back(b);
        }
        else{
            ne.push_back(b);
        }
   }
   sort(great.begin(),great.end());
   sort(less.begin(),less.end());
   int min=great[(great.size())-1];
   int max=less[0];
   int ans=0;
   int flag=0;
   int s=ne.size();
   for(int i=min;i<=max;i++){
        for(int j=0;j<s;j++){
            if(i!=ne[j]){
                flag++;
            }
            if(flag==s){
                ans++;
                flag=0;
            }
            else{
                flag=0;
            }
        }
   }
   cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
