#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    int i=0;
    vector<int> result(t);

    for(int j=0;j<t;j++){
        cin >> a >> b;
        if(a%b == 0){
            result[j] = 0;
        }
        else{
            int temp = (a/b) + 1;
            result[j] = (b*temp) - a;
        }
    }
    for(int i=0;i<t;i++){
        cout << result[i] << endl;
    }
}
