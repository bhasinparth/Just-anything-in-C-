#include <bits/stdc++.h>

using namespace std;

string onceInATram(int x) {
    // Complete this function
    string str=to_string(x);
    int left=1,right=0;
    while(left!=right)
    {        x++;
        str=to_string(x);
       
        
        left=int(str[0])+int(str[1])+int(str[2])-144;
        right=int(str[3])+int(str[4])+int(str[5])-144;

    }
    return str;
}

int main() {
    int x;
    cin >> x;
    string result = onceInATram(x);
    cout << result << endl;
    return 0;
}
