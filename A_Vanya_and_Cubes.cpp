#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p=0;
    int row=0;
    while(p<=n){
        row++;
        p+=(row*(row+1))/2;
    }
    cout<<row-1;
    return 0;

}