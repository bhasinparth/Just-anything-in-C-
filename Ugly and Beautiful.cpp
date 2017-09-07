#include <bits/stdc++.h>

using namespace std;

string uglyOrBeautiful(vector <int> a) {
    // Complete this function
    int tot=0;    
    for(int i=0;i<a.size()-1;i++)
    {
        
        if(a[i]<a[i+1])
            tot++;
    }
   if(tot==a.size()-1)
       return "Ugly";
    sort(a.begin(),a.end());
    if(a[a.size()-1]>a.size()||a[a.size()-1]<1)
        return "Ugly";
    
    for(int i=0;i<a.size()-1;i++)
    {
        if(a[i]==a[i+1]||a[i]>a.size()||a[i]<1)
            return "Ugly";
    }
    return "Beautiful";
    
        
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        string result = uglyOrBeautiful(a);
        cout << result << endl;
    }
    return 0;
}
