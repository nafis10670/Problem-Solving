#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    cin >> n;

    int bills[5] = {100, 20, 10, 5, 1};

    for(int i=0;i<5;i++){
        while(n/bills[i] >= 1){
            n-=bills[i];
            count++;
        }
    }
    cout << count;
}
