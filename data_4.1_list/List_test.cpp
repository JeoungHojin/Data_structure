#include "List.h"
int main() {
    List L;
    Item I;

    

    L.Create(5);

    for (int i = 0; i < 5; i++) {
        I.a = i+1;
        L.Insert(i, I);
    }
    L.Display();
    L.reverse();
    L.Display();
    L.clear();
    L.Display();

    return 0;
}

