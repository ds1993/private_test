#include <stdio.h>
#include <iostream>

class Empty {
};

class HoldsAnInt {
private:
    int x;
    Empty e;
};

class HoldsAnInt2: private Empty {
private:
    int x;
};

int main()
{
    printf("sizeof HoldsAnInt = %ld, sizeof HoldsAnInt2 = %ld\n", sizeof(HoldsAnInt), sizeof(HoldsAnInt2));
}
