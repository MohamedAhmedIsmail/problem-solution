#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   float divide=0.0;
   float mini=1e5;
   cin>>n;
   for(int i=1;i<=5;i++)
   {
       divide=(n/(float)i);
        if(divide<mini)
        {
            mini=ceil(divide);
        }
   }
   cout<<mini<<endl;
    return 0;
}
