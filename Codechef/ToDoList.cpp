#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) {
	    int N;
	    cin>>N;
	    int count = 0;
	    long int D[N];
	    for(int i=0; i<N; i++) {
	        cin>>D[i];
	        if(D[i] >= 1000) {
	            count++;
	        }
	    }
	    
	    cout<<count<<"\n";
	    
	}
	return 0;
}