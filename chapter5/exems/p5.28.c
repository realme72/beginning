// #include <stdio.h>
// #include <math.h>

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int i,n;
    // printf("enter a number\n");
    cout<<"enter a number";

    // scanf("%d",&n);
    cin>>n;

    // int sqrts=pow(n,1/2);
    int sqrts=sqrt(n);

    for(i=2;i<=sqrts;i++){
    	if(n%i==0)
    		break;
    }

    if(i>sqrts)
    	printf("%d is a prime number\n",n);
    else
    	printf ("%d is not a prime number\n",n);


    return 0;
}