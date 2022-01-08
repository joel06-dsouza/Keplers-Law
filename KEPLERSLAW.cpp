#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--)
	{
	    double t1,t2,r1,r2,ans1,ans2;
	    cin >> t1 >> t2  >> r1 >> r2;
	    ans1 = (pow(t1, 2) / pow(r1, 3));
	    ans2 = (pow(t2, 2) / pow(r2, 3));
	    if(ans1 == ans2){
	        cout <<  "Yes\n";
	    }
	    else
	    {
	        cout << "No\n";
	    }
	}
	return 0;
}
