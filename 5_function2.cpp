#include <iostream>
using namespace std;

// C++에서는 파라미터의 타입이나 개수가 다르면
// 동일한 이름의 함수를 여러개 만들 수 있다.
// => "함수 오버로딩"이라고 부른다.
// => 컴파일러가 함수의파라미터 정보를 통해 이름을 생성한다. (nm a.out명령어를 통해 확인할 수 있다.)
//      > 파라미터의 개수와 타입이 다르면 다른 이름이 생성된다.
//      "네임 맹글링"
// 주의사항
// 1) 반환 타입은 함수 이름에 영향을 미치지 않는다.
// ex) int foo() , void foo()
// > 파라미터가 동일하고 반환타입이 다른 함수는 오버로딩이 불가능하다.
// 2) void goo(int a), void goo(int a, int b=100)
// > goo(10)일때, 오류가 발생한다. 컴파일러는 어떤 함수를 호출할지 결정할 수 없다. - 컴파일 오류!

// C언어에서는 이런 것이 불가능 하였다.
// C에서 사용하기 위해 매크로 함수를 사용하였음
// - 매크로 함수의 문제점
// 1) 치환이기 때문에, 우선순위에 대한 주의가 필요하다.
// : 3+3을 통해 6*6으로 치환되어 36이라는 결과를 얻고싶지만 3+3*3+3으로 치환되어 15라는 이상한 결과를 나타낼 수 있다.
// > 괄호를 통해 매크로 함수의 우선순위 문제를 해결할 수 있다.
// 2) ++x를 하는 경우 치환되면 ++x * ++x가 되어 버려 컴파일마다 결과가 다르게 나올 수 있다. -> 치명적인 문제점

// int square(int x)
// {
//     printf("long\n");
//     return x * x;
// }

long square(long l)
{
    printf("long\n");
    return l * l;
}

double square(double x)
{
    printf("double\n");
    return x * x;
}

char square(char c)
{
    printf("char\n");
    return c * c;
}

// 오버로딩 규칙
// 1) 정확한 타입을 찾는다.
//      square(42) -> square(int)
// - 상승
//      square(int) -> square(long)
//      square(int)가 없으면 square(long)으로 상승을 시킨다.
// - 호환
//      square(int) -> square(char)
// 컴파일러 버전이 올라감에 따라 상승/호환은 의미가 없어진다.

int main()
{
    square(42L);
}



