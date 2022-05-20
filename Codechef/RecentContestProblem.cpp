#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) {
	    int N;
	    cin>>N;
	    string A[N];
	    int START38_COUNT = 0, LIME108 = 0;
	    for (int i = 0; i<N;  i++) {
            cin >> A[i];
            if(A[i] == "START38"){
                START38_COUNT++;
            }
            else
                LIME108++;
        }
        cout<<START38_COUNT<<" "<<LIME108<<"\n";
	}
	return 0;
}