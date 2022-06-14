#include<bits/stdc++.h>
using namespace std;

int main(){
    int levels, p, q, temp=0;
    cin >> levels;
    vector<int> result(levels+1,0);
    result[0] = 1;

    cin >> p;
    for(int i=0;i<p;i++){
        cin >> temp;
        result[temp] = 1;
    }

    cin >> q;
    for(int i=0;i<q;i++){
        cin >> temp;
        result[temp] = 1;
    }

    for(int i=0;i<result.size();i++){
        if(result[i] == 0){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}
