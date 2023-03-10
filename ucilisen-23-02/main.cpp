#include <iostream>

using namespace std;

int main()
{
    int b,r;
    cin>>b>>r;

    int r1 = max(b,r) - ((b+r)/2);

    cout<<min(r1,min(b,r));

    return 0;
}
