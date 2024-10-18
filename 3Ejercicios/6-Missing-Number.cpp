#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum = 0;
    long long totalSum = (long long)n * (n+1)/2;

    for(int i=0; i<n-1; i++){
        int x;
        cin>>x;
        sum += x;
    }

    cout<< totalSum - sum<<endl;

    return 0;
}