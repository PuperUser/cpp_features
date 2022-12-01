#include <stdio.h>

// Рекурсивный вызов operator int(), происходит stack overflow

class Foo {
public:
    operator int() const {
        printf(".");
        return *this;
    }
};

int main() {
    Foo foo;
    int i = foo;
    return 0;
}