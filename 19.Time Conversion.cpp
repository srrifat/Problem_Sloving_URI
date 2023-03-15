#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ts;
    cin>>ts;
    int tm,m,s,h;
    tm=ts/60;
    s=ts%60;
    m=tm%60;
    h=tm/60;
    cout << h << ":" << m<< ":" << s<< endl;
    return 0;

}
