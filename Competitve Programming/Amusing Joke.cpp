#include<bits/stdc++.h>
using namespace std;

int main(){
    string A, B, C, merged;
    cin >> A >> B >> C;

    if((A.length() + B.length()) == C.length()){
        merged = A + B;
        sort(merged.begin(), merged.end());
        sort(C.begin(), C.end());

        if(merged == C){
            cout << "YES";
        }
        else cout << "NO";
    }
    else{
        cout << "NO";
    }
    return 0;
}
