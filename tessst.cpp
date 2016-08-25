
#include<iostream>
using namespace std;

int pow_uv(int a,int b)
{
    int ans;
for(int i=0;i<=b;i++)
    ans=ans*a;
return (ans);

}


int main()
{
    cout<<pow_uv(10,2);

}
