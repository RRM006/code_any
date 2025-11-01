#include <stdio.h>

int x = 10; // global variable

void func1() {
    int x = 20;
    void func2() {
        printf("x = %d\n", x); // static scoping: refers to x in func1, not global
    }
    func2();
}

int main() {
    func1(); // Output: x = 20
    return 0;
}
