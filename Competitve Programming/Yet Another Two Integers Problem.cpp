#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, count=0, rem=0;
        cin >> a >> b;

        if(a>b) swap(a,b);
        rem = b - a;
        count = rem / 10;
        if(rem % 10 > 0) count++;

        cout << count << endl;
    }
}
