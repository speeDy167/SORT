#include <bits/stdc++.h>

using namespace std;

string to_str(int val)
{
    string q;
    while(val)
    {
        q += char('0' + val%10);
        val /= 10;
    }
    reverse(q.begin(), q.end());
    return q;
}
void Do(string name, vector<double> &data)
{
    cout<<"Loading "<<name<<"!!!\n";
    clock_t start, end;
    double time_use;
    for(int i = 1; i<=10; ++i)
    {
        cout<<"Running Test "<<i<<":\n";
        start = clock();
        system((name + ".exe " + to_str(i)).c_str());
        end = clock();
        time_use = (double)(end - start)/CLOCKS_PER_SEC;
        cout<<name<<"\'s running time on test "<<i<<" : "<<time_use<<"\n";
        data.push_back(time_use);
    }
    cout<<"Hoan thanh"<< endl;
}
int main()
{
    system("Test.exe");
    cout<<"HOAN THANH SINH TEST!!!\n";
    vector<double> d1,d2,d3,d4;
    Do("heapsort", d1);
    Do("mergesort", d2);
    Do("quicksort", d3);
    Do("sort_std", d4);

    cout<<"THOI GIAN CAC THUAT TOAN SORT\n";
    cout<<setw(12)<<"Thuat toan";
    for(int i=1;i<11;i++) cout<<setw(12)<<"test " + to_str(i);
    cout<<"\n";
    cout<<setw(12)<<"heapsort";
    for(int i=0;i<10;++i) cout<<setw(12)<<d1[i];
    cout<<"\n";

    cout<<setw(12)<<"mergesort";
    for(int i=0;i<10;++i) cout<<setw(12)<<d2[i];
    cout<<"\n";

    cout<<setw(12)<<"quicksort";
    for(int i=0;i<10;++i) cout<<setw(12)<<d3[i];
    cout<<"\n";

    cout<<setw(12)<<"sort_std";
    for(int i=0;i<10;++i) cout<<setw(12)<<d4[i];
    cout<<"\n";
    system("pause");
    return 0;
}

