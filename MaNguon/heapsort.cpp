#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e6 + 5;
int a[maxn];
int n;
void enter()
{
    cin>>n;
   for(int i=0;i<n;i++)
    cin >> a[i];
}
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;


    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}


void heapSort(int arr[], int n)
{

    for (int i = (n +1)/ 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i > 0; i--) {

        swap(arr[0], arr[i]);

        heapify(arr, i, 0);
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
    enter();
    heapSort(a,n);
}

