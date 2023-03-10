#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x;

    cin>>x;

    long long coef = (x-2)/20;

    long long digIdx = (x-1)%20;

    long long last=1;
    for(long long i=1; i<=digIdx; i++) {
        last=last%10+last;
    }

    cout<<coef*100+last;

    return 0;
}
