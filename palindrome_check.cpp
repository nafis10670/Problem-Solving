#include<bits/stdc++.h>
using namespace std;

int main(){
    string given = "BAAEAB";
    int count=0;

    for(int i=0;i<given.length()/2;i++){
        if(given[i] != given[given.length()-i-1]){
            cout << "STRING IS NOT PALINDROME!";
            break;
        }
        count++;
    }
    if(count == (given.length()/2)) cout << "STRING IS PALINDROME!";

    return 0;
}
