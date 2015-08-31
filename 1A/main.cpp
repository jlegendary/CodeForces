#include <iostream>
using std::cout;
using std::cin;

int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    
    long long sideOneFlags, sideTwoFlags;
    sideOneFlags = n / a + (n % a == 0 ? 0 : 1);
    sideTwoFlags = m / a + (m % a == 0 ? 0 : 1);
    
    cout << sideOneFlags * sideTwoFlags << "\n";
    
    return 0;
}