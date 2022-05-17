#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int N;
        cin>>N;
        int count=0;
        int A[N], B[N];

        for(int i=0; i<N; i++) {
            cin>>A[i];
        }

        for(int i=0; i<N; i++) {
            cin>>B[i];
        }

        for(int i=0; i<N; i++) {
            for(int j=i+1; j<N; j++) {
                if(A[i]==B[j] && B[i]==A[j]){
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}