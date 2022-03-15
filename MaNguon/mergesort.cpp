#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e6 + 5;
int a[maxn],n;
void enter()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
}

void Tron(int a[], int n, int b[], int m, int c[],int &p)
{
    int i = 0, j = 0;
    p = 0;
    while(!(i >= n && j >= m))
    {
        if((i < n && j < m && a[i] < b[j]) ||(j >= m))
            c[p++] = a[i++];
        else
            c[p++] = b[j++];
    }
}

void Merge(int a[], int left, int mid, int right)
{
    int *b = new int[mid - left +1];
    int k;
    int *c = new int[right - mid];
    int l;
    int *temp = new int[right - left +1];
    int m;
    k = 0;
    for(int i=left; i <= mid; i++)
        b[k++] = a[i];
    l = 0;
    for(int i=mid+1; i <= right; i++)
        c[l++] = a[i];
    Tron(b,k,c,l,temp,m);
    for(int i=0; i<m ; i++)
        a[left+i]=temp[i];
    delete []b;
    delete []c;
    delete []temp;
}



void Mergesort(int a[], int left, int right)
{
    if(left < right)
    {
        int mid = (left + right)/2;
        Mergesort(a, left, mid);
        Mergesort(a, mid+1, right);
        Merge(a, left, mid, right);
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
    auto arr_size = sizeof(a) / sizeof(a[0]);
    Mergesort(a,0,arr_size-1);
}
