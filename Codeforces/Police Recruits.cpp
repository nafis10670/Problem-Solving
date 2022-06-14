#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, temp;
    cin >> n;
    int count=0, current=0;

    for(int i=0;i<n;i++){
        cin >> temp;
        current += temp;
        if(current < 0){
            count++;
            current = 0;
        }
    }
    cout << count;
    return 0;
}
