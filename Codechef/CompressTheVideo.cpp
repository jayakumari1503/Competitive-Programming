#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) {
	    int N;
	    cin>>N;
	    int A[N];
	    int count = N;
	    for(int i=0; i<N; i++) {
	        cin>>A[i];
	    }
	    for(int i=0; i<N; i++) {
	        if(A[i] == A[i+1]) {
	            count--;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}