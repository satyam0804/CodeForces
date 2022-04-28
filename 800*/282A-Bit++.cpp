#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >>n;

    string s;
    int x=0;
    while(n--){
        cin >> s;
        if(s == "X++"){
            x++;
        }
        else if(s=="X--"){
            x--;
        }
        else if(s == "++X"){
            ++x;
        }
        else if(s == "--X"){
            --x;
        }
        else{
            cout << 0 << endl;
            return 0;
        }
    }
    cout << x << endl;
    return 0;
}