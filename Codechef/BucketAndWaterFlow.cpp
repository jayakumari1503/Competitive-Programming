#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) {
	    int W, X, Y, Z;
	    cin>>W>>X>>Y>>Z;
	    int A = W+(Y*Z);
	    if(A==X){
	        cout<<"filled"<<"\n";
	    }
	    else if(A>X) {
	        cout<<"overflow"<<"\n";
	    }
	    else if(A<X) {
	        cout<<"unfilled"<<"\n";
	    }
	}
	return 0;
}