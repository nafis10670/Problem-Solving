#include<bits/stdc++.h>
using namespace std;

int main(){
    int friends, bottles, litres, limes, cuts, salt, n_litres, n_salt;
    cin >> friends >> bottles >> litres >> limes >> cuts >> salt >> n_litres >> n_salt;

    int total_drink = bottles * litres;
    int total_slices = limes * cuts;

    int ans = min({(total_drink/n_litres), total_slices, (salt/n_salt)});

    cout << (ans/friends);
    return 0;

}
