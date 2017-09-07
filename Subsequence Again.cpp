#include <bits/stdc++.h>

using namespace std;

string subsequenceAgain(string s, int k) {
    // Complete this function

    string a="",b="";
    for(int i=0;i<s.length();i++)
    {   
        if(b.find(s[i])!=std::string::npos)
            continue;
        if (a.find(s[i])!=std::string::npos)
             a+=s[i];
        else if( k<=count(s.begin()+i, s.end(), s[i]))
             a+=s[i];
        else
             b+=s[i];
        
    }
    return a;
}

int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    string result = subsequenceAgain(s, k);
    cout << result << endl;
    return 0;
}
