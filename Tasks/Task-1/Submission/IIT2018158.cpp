#include <bits/stdc++.h>
using namespace std;

const int mex=1e8+5;
bool arr[mex]={false};

int main()
{
    
    int l,r;
   
    cin>>l>>r;
   
    int cnt=0;
   
    arr[0]=true;
   
    arr[1]=true;
   
    for(int i=2;i<mex;i++)
    {
        if(arr[i]==false)
        for(int j=i+i;j<mex;j+=i)
        arr[j]=true;
    }
   
    for(int i=l;i<=r;i++)
    {
        if(arr[i]==false) cnt++;
    }
   
    cout<<cnt<<endl;
    
}