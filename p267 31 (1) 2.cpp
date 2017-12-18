#include<iostream>
#include<cstdio>
#define maxx 100000
using namespace std;

int index,ans=-1;

void seek(int *p,int n,int &ans,int &index)
{
	for(int i=1;i<=n;i++)
	  if(*(p+i)>ans)
	  {
	  	ans=*(p+i);
	  	index=i;
	  }
}

int main()
{
	freopen("std.in","r",stdin);
	freopen("std.out","w",stdout);
	
	int n,a[maxx];
	cin>>n;
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	seek(a,n,ans,index);
	cout<<ans<<' '<<index;
	return 0;
}
