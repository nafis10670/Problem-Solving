#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, rem_time = 240;
    cin >> n >> k;
    int count=0;

    rem_time -= k;

    for(int i=1;i<=n;i++){
        rem_time -= (i*5);
        if(rem_time < 0){
            break;
        }
        else{
            count++;
        }
    }
    cout << count;
    return 0;
}
