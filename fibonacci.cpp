#include<iostream>
using namespace std;
long long unsigned a, b, c;
long long unsigned Fibonacci(int n)
{
    a=1; b=1;
    if(n==0 || n==1)
        return 1;
    else
        for(int i=2; i<=n; i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
    return c;
}
int main()
{
    int n;
    cin>>n;
    cout<<Fibonacci(n);
}
