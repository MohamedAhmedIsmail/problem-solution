#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   float divide=0.0;
   cin>>n;
   for(int i=5;i>=1;i--)
   {
       divide+=(n/i);
       n=n%i;
   }
   cout<<divide<<endl;
    return 0;
}
