#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#define maxx 10000
using namespace std;

void max(int *p,int n)
{
	int m=0,index;
	for(int i=1;i<=n;i++)
	  if(*(p+i)>m)
	  {
	  	index=i;
	  	m=*(p+i);
	  }
	printf("%d %d",m,index);
}

int main()
{
	int n,a[maxx];
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	  scanf("%d",&a[i]);
	max(&a[0],n);
	return 0;
}
