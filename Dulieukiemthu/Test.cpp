#include <bits/stdc++.h>

using namespace std;
int n = 1000000;
string to_str(int val)
{
    string q = "";
    while(val)
    {
        q += char('0' + val%10);
        val /= 10;
    }
    reverse(q.begin(), q.end());
    return q;
}
void test1()
{
    ofstream fi;
    fi.open("test1.inp");
    int n = 1000000;
    fi<<n<<"\n";
    vector<int> q(n);
    for(int i=0;i<n;i++)
     q[i] = (rand()*rand())%100000000;
    sort(q.begin(), q.end());
     for(int i=0;i<n;i++)
     fi<<q[i]<<" ";
    fi.close();
}

void test2()
{
    ofstream fi;
    fi.open("test2.inp");
    int n = 1000000;
    fi<<n<<"\n";
    vector<int> q(n);
    for(int i=0;i<n;i++)
    q[i] = (rand()*rand())%100000000;
    sort(q.begin(), q.end());
    reverse(q.begin(), q.end());
    for(auto i:q) fi<<i<<" ";
    fi.close();
}

void test(int stt)
{
    ofstream fi;
    fi.open("test" + to_str(stt) + ".inp");
    int n = 1000000;
    fi<<n<<"\n";
     for(int i=0;i<n;i++) fi<<(rand()*rand())%100000000<<" ";
    fi.close();
}
int main()
{
    srand(int(time(0)));
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    test1();
    cout<<"Hoan thanh sinh test 1\n";
    test2();
    cout<<"Hoan thanh sinh test 2\n";
  for(int i=3;i<11;i++)
    {
        test(i);
        cout<<"Hoan thanh sinh test "<<i<<"\n";
    }
    return 0;
}
