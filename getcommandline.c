#include<stdio.h>

/* void begin_0 (void) __attribute__((constructor)); */
/* void end_0 (void) __attribute__((destructor)); */

int __real_main(int argc, char* argv[]);

int __wrap_main(int argc, char* argv[]) {
  printf("wrapped main\n");
  return __real_main(argc, argv);
}

int main(int argc, char* argv[]) {
  printf("main\n");
  return 0;
}

/* void begin_0(void) { */
/*   printf("begin_0\n"); */
/* } */

/* void end_0(void) { */
/*   printf("end_0\n"); */
/* } */

/* void begin_1(void) { */
/*   printf("begin_1\n"); */
/* } */

/* void end_1(void) { */
/*   printf("end_1\n"); */
/* } */

#include <stdlib.h>

void *__real_malloc(size_t);

void *__wrap_malloc(size_t size) {
  printf("My malloc");
  return __real_malloc(c);
}

int main(void) {
  void *ptr = malloc(12);
  free(ptr);
  return 0;
}
