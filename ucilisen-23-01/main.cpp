#include <iostream>

using namespace std;

int main()
{
    int x;

    cin>>x;

    if(x%10 == 0) {
        cout<<0;
    } else {
        cout<<10-(x%10);
    }

    return 0;
}
