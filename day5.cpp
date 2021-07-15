#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        string s,s1,s2;
        getline(cin>>ws, s);
        for (i = 0; i < s.size(); i++)
        {
            if (i % 2 == 0){
                s1+=s[i];
            }else{
                s2+=s[i];
            }
        }
        cout<<s1<<" "<<s2<<endl;;
    }
    return 0;
}
