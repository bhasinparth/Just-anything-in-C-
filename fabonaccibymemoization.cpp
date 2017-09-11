#include <bits/stdc++.h>
#define MAX 100
#define NIL -1
using namespace std;
int lookup[MAX];
void initialize()
{
for(int i=0;i<100;i++)
{

	lookup[i]=NIL;
}

}

int fib(int n)
{

if(lookup[n]==NIL)
{

if(n<=1)
	lookup[n]= n;
else
	lookup[n]= fib(n-1)+fib(n-2);
}

return lookup[n];
}

int main() {
cout<<"Enter the number ";
initialize();
int n;
cin>>n;
cout<<fib(n);


    return 0;
}
