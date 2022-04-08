#include<bits/stdc++.h>
using namespace std;

int main(){
    string given = "aaaabbb";
    int max = 0;
    char result;
    vector<int> count(given.length(), 0);

    for(int i=0;i<given.length();i++){
        count[given[i]]++;
        if(count[given[i]] > max){
            max = count[given[i]];
            result = given[i];
        }
    }
    cout << "Max occurance is: " << result;
    return 0;
}
