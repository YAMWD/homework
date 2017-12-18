#include<iostream>
#define maxx 100000
using namespace std;

float f[maxx];

bool judge(float a,int n)
{
	for(int i=1;i<=n;i++)
	  if(f[i]==a)
	    return true;
	return false;
}

void seek(float a,int n)
{
	for(int i=1;i<=n;i++)
	  if(f[i]==a)
	  {
	  	cout<<&f[i];
	  	return;
	  }
	cout<<"NULL";
}

int main()
{
	int n;
	bool *p2;
	float a,*p1;
	cin>>n>>a;
	for(int i=1;i<=n;i++)
	  cin>>f[i];
	void (*p)(float,int);
	p=judge;
	p=seek;
	p(a,n);
	return 0;
}
	
