#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x,ab;
    cin>>a>>b>>c;
    x=(a+b+abs(a-b))/2 ;
    ab=(x+c+abs(x-c))/2 ;
    cout<<ab<<" eh o maior"<<endl;
    return 0;

}
