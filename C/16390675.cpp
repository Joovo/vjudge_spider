#include <iostream>
#include <cstdio>
#include <math.h>
#define pi 3.14
using namespace std;
int main()
{
	int n1,n2,a,b;
	scanf("%d",&n1);
	for(;n1;n1--)
	{
	scanf("%d",&n2);
		for(;n2;n2--)
		{
			scanf("%d %d",&a,&b);
			printf("%d\n",a+b);
		}
	}
}