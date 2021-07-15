#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int ans;
    if (ans == 0)
    {
        if (a > b || a > c)
        {
            if (a > d)
            {
                cout << a;
            }
            else
            {
                cout << d;
            }
        }
        else if (b > c || b > d)
        {
            cout << a;
        }
        else
        {
            cout << c;
        }
    }
    return ans;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
/* Token of github
vscode://vscode.github-authentication/did-authenticate?windowid=1&code=7eaf93fc68dfc7fd8622&state=9b2abcdd-d5f2-4a1c-a663-b676ed2e596b
*/