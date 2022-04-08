#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t, i=0, j=0;
    cin >> n >> t;

    vector<char> s(n);

    for(i=0;i<s.size();i++){
        cin >> s[i];
    }

    for(int j=0;j<t;j++){
        for(i=1;i<n;i++){
            if(s[i] == 'G' && s[i-1] == 'B'){
                swap(s[i],s[i-1]);
                i++;
            }
        }
    }

    for(i=0;i<n;i++){
        cout << s[i];
    }
}
