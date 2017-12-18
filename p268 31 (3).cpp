#include<iostream>
#include<string>
#include<cstring>
using namespace std;

void sort(int n,char *p[])
{
	for(int i=0;i<n;i++)
	  for(int j=i+1;j<=n;j++)
	    if(strcmp(p[i],p[j])>0)
	    {
	      char *t;
	      t=p[i];
	      p[i]=p[j];
	      p[j]=t;
	    }
}

int main(int argc,char *argv[])
{
	sort(argc,argv);
	for(int i=0;i<argc;i++)
	  cout<<argv[i]<<endl;
	return 0;
}
