C / C++ NaN 발생 확인

 

간혹 tanh, atanh 등의 hyperbolic functions를 사용하거나 부동 소수점 (floating-point) 나눗셈 등이 포함된 알고리즘을 c나 c++로 구현하는 경우 NaN (Not a number)가 발생할 수 있다. 간단한 NaN의 예제로는 어떠한 부동 소수점을 0으로 나누는 경우를 생각해 볼 수 있다. 이 경우 + 혹은 - infinity의 값을 가지게 되므로 반환되는 값은 NaN이 된다. 이러한 NaN은 알고리즘의 부적절한 동작을 유발하며, 따라서 초기 알고리즘 구현시 NaN을 적절히 체크하는 과정은 필수적이다.

 

1. Inclusion

 NaN을 사용하기위해 우선 math.h를 include해야한다. c++의 경우 cmath.h를 include하면 된다.

 

2. NaN 체킹 함수

 int isnan( float arg );
 int isnan( double arg );
 int isnan( long double arg );

 

3. 파라미터

 isnan은 파리미터로 (argument로) floating-point, double-precision, and long double-precision values를 가질 수 있다.

 

4. 반환 값

 isnan은 파라미터가 (입력되는 값이) NaN일 경우 0이 아닌 값을 반환하고, NaN이 아닐 경우 0을 반환한다.

 따라서 NaN인지 아닌지를 확인할 경우 반환 값이 0인지 아닌지를 체크하면 되겠다.

 

5. 예제

 아래는 프로그램의 일부를 추출한 것이니 단순 참고만 하면 되겠다.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

int main(int argc, char *argv[])

{

  int     m;

  float  max_metric;

 

  .....

 

  max_metric = get_max_metric (APP);

 

  if (isnan(max_metric) != 0){

    printf ("NaN is detected! \n");

  }

}