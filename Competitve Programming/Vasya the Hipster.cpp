#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, rem=0, days=0;
    cin >> a >> b;

    if(a == b){
        cout << a << " " << 0;
        return 0;
    }
    else if(a > b){
        rem = a - b;
        days = b;
    }
    else{
        rem = b - a;
        days = a;
    }
    rem /= 2;
    cout << days << " " << rem;
    return 0;
}
