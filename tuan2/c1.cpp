#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b=0;
    cin >> a;
    for(int i=2; i*i<=a; i++)
    {
        if(a%i==0) b++;
    }
    if(a<=1) cout << "'no'";
    else
    {
        if(b==0) cout << "'yes'";
        else cout << "'no'";
    }
    return 0;

}
