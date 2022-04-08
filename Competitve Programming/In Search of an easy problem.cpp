#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    int flag=0;

    for(int i=0;i<n;i++){
        cin >> num[i];
        if(num[i] == 1) flag=1;
    }

    if(flag) cout << "HARD";
    else cout << "EASY";
    return 0;
}
