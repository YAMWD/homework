#include<iostream>
#include<cstdio>
#define maxx 100000
using namespace std;

void selectsort(int *p,int len,int *ans,int *index)
{
	for(int i=1;i<=len;i++)
	  if(*(p+i)>*ans)
	  {
	  	*ans=*(p+i);
	  	*index=i;
	  }
}

int main()
{
	freopen("std.in","r",stdin);
	freopen("std.out","w",stdout);
	
	int a[maxx];
	int n,index,ans=-1;
	cin>>n;
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	selectsort(a,n,&ans,&index);
	cout<<ans<<' '<<index;
	return 0;
}
	
