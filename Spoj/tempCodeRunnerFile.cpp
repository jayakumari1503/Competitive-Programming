#include<bits/stdc++.h>
using namespace std;

int main() 
{
int n;
int result;
cin>>n;

if(n<=9){
    result += n*(n+1)/2 + n*(n-1)/2;
    cout<<result;
}

else{
        result = (n-2)*(n-1)/2 + n*(n-1)/2 + 1;
        cout<<result;
}
return 0;
}