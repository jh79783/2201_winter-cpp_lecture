

// ++연산자는 C/C++의 동작이 다르다.
#include <stdio.h>

int main()
{
    int n = 0;

    ++++++++++n;        // -> C++에서는 동작하지만, C에서는 동작하지 않음
                        // C에서는 값을 반환함 => 값을 증가할 수 없다.
                        // C++에서는 레퍼런스가 반환함 => 참조는 다시 증가할 수 있다.
    printf("%d\n", n);
}