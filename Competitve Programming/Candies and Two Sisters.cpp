#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    int result[t];

    for(int i=0;i<t;i++){
        cin >> n;
        if(n%2 == 0){
            n /= 2;
            n -= 1;
            result[i] = n;
        }
        else{
            n /= 2;
            result[i] = n;
        }
    }

    for(int i=0;i<t;i++){
        cout << result[i] << endl;
    }
}
