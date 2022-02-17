#include <bits/stdc++.h>
using namespace std;

int main() {
std::string n;
int k;
std::cin >> n >> k;
if (k > 0 && k <= n.size()) n.erase(k - 1, 1);
std::cout << n;

    return 0;
}