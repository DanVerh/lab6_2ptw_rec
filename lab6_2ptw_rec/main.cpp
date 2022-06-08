#include <iostream>
#include "Functions.hpp"

using namespace std;

int main() {
    Elem* first = nullptr, *last = nullptr;
    init(first, last, 0);
    init(first, last, 1);
    init(first, last, 1);
    init(first, last, 0);
    init(first, last, 0);
    print(first);
    int x;
    cout << "count 0 or 1: "; cin >> x;
    cout << Count(first, x) << endl;
    
    return 0;
}
