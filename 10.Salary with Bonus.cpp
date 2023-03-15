#include<bits/stdc++.h>
using namespace std;
int main()
{
    char emp[20];
    double salary,sold,to_sa;
    cin>>emp>>salary>>sold;
    to_sa= salary+(sold*15)/100;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<< to_sa<<endl;
    return 0;

}
