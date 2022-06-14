#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;


int main(){
    int n;
    string s;
    char letters = 'a';

    cin >> n >> s;
    for(int i=0;i<n;i++){
        s[i] = tolower(s[i]);
    }

    if(n>=26){
        for(int i=0;i<26;i++){
            if(s.find(letters) != -1){
                letters++;
            }
            else{
                 cout << "NO";
                 return 0;
            }
        }
        cout << "YES";
    }
    else{
        cout << "NO";
        return 0;
    }
}
