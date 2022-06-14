#include<bits/stdc++.h>
using namespace std;

int main(){
    int num, b;
    cin >> num >> b;

    for(int i=0;i<b;i++){
        if(num % 10 == 0){
            num /= 10;
        }
        else{
            num--;
        }
    }
    cout << num;
    return 0;
}
