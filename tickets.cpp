/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <assert.h>
#include <stdio.h>
#include <math.h>

int main() {
  //  uncomment the following lines if you want to read/write from files
  //  freopen("input.txt", "r", stdin);
  //  freopen("output.txt", "w", stdout);

  long long T;
  assert(1 == scanf("%lld", &T));

  long long cont = 0;
  /*while(T > cont) {
    cont++;
    T -= cont;
  }*/
  cont = ((-1+sqrt(8*T+1)) / 2);


  printf("%d\n", cont);  // change 42 with actual answer
  return 0;
}
