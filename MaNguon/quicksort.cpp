#include <bits/stdc++.h>
#define _for(i,a,b) for(int i=(a),_b=(b);i<_b;++i)

using namespace std;
const int maxn = 1e6 + 5;
int a[maxn];
int n;
void enter()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}

void quicksort(int l,int r)
{
    if (l==r) return;
    else
    {
        int mid = (l+r)>>1;
        int i = l, j = r;
        while(i<=j)
        {
            while(a[i] < a[mid]) ++i;
            while(a[j] > a[mid]) --j;
            if (i<=j)
            {
                swap(a[i], a[j]);
                ++i; --j;
            }
        }
        if (l < j) quicksort(l, j);
        if (r > i) quicksort(i, r);
    }
}

int main(int argc, char * argv[])
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    string name = argv[1];
    freopen(("test" + name + ".inp").c_str(), "r", stdin);
    enter();
    quicksort(0, n);
    return 0;
}
