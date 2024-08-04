/**
 * @author    Sorgum
 * 
 * @brief     I am suffering
 *            Update I have managed to call swift functions
 *            This is done by linking to a dylib made in swift
 *            The @_cdecl("func_name") attribute which exposes
 *            a demangled symbol to the function and makes that
 *            demangled version follow the c calling convention
 */

#include <stdio.h>
#include "lib/CGraphics.h"

int main(void) {

  cross_world();
  printf("Hello!? we can confirm we are working in C!\n");
  printf("Testing swift add -> 1+1=%d\n", add(1,1));
  printf("Testing swift add -> 12+-3=%d\n", add(12,-3));

  return 0;
}