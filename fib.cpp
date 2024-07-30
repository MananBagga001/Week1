#include <bits/stdc++.h>
using namespace std;

int solve(int data){
    if(data == 0){
            cout << "0 ";
        return 0;
    }
    else if(data == 1){
        cout << "1 ";
        return 1;
    }
    else{

        int ans = solve(data -1) + solve(data -2);
        cout << data -1 << "  " << data -2 << endl;
        return ans;
    }
}

void fib(int data){
    int i = 0;
    int j = 1;

    cout << i << endl << j << endl;
    int cnt = 0;

    while(cnt != data){
        int ans = i+j;
        cout << ans << endl;
        i = j;
        j = ans;
        cnt ++;
    }
}


int main(){

    int data;
    cin >> data;
    fib(data);
    return 0;
}
