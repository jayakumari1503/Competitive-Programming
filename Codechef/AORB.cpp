#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--) {
	    int X, Y;
	    cin>>X>>Y;
	    int result1 = (500-(X*2)) + (1000 - ((X+Y)*4));
	    int result2 = (1000-(Y*4)) + (500 - ((X+Y)*2));
	    if(result1>result2){
	        cout<<result1<<"\n";
	    }
	    else
	    cout<<result2<<"\n";
	}
	return 0;
}