#include <iostream>
using namespace std;

int pwr (int a, int b) {
	if(b==1) return a;
	return a*pwr(a,b-1);
}

int main () {
	const unsigned int power = 4;
	unsigned int max = 100;
	cout << "Check (x^n)+(y^n)=2(z^n) with n>2 <=> x=y=z for x,y,z between 1 and ";
	cin >> max;
	for(unsigned int i=1;i<=max;i++){
		for(unsigned int j=i;j<=max;j++) {
			for (unsigned int k=1;k<=max;k++) {
				if(pwr(i,power)+pwr(j,power)==2*pwr(k,power)) cout<<"i=j=k ::"<< i <<"="<< j <<"="<< k <<endl;
			}
		}
	}
	return 0;
}