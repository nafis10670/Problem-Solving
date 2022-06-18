#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, n;
        int rem;
        cin >> x >> y >> n;
        rem = n%x;

        if(rem > y){
            int a = rem - y;
            cout << n - a << endl;
        }
        else if(rem < y){
            int a = y - rem;
            cout << n - (x - a) << endl;
        }
        else{
            cout << n << endl;
        }

    }
}
