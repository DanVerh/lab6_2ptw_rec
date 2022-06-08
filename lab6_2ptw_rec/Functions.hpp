#include <iostream>
using namespace std;

struct Elem
{
    Elem* link;
    int info;
};

void init(Elem* &first, Elem* &last, int info) {
    Elem *tmp = new Elem;
    tmp->info = info;
    tmp->link = NULL;
    if (last != NULL)
        last->link = tmp;
    last = tmp;
    if (first == NULL)
        first = tmp;
}

void print(const Elem* first)
{
    if (first == nullptr)
        cout << endl;
    else
    {
        cout << first->info << " ";
        print(first->link);
    }
}


int Count(Elem* L, int x)
{
    if (L != NULL && L->info == x)
        return 1 + Count(L->link, x);
    else if (L != NULL)
        return Count(L->link, x);
    else
        return 0;
}
