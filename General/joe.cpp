#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
int main() {
		int n;
		double sum = 0.0;
		cin>>n;
		while(n>0) {
			 sum += (double) 1/n;
       n--;
		}
		cout<<fixed<<setprecision(12)<<sum;
}