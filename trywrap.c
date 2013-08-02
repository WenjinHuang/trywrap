#include<stdio.h>
#include<stdlib.h>

int __real_main(int argc, char* argv[]);

int __wrap_main(int argc, char* argv[]) {
  printf("wrapped main\n");
  return __real_main(argc, argv);
}

int main(int argc, char* argv[]) {
  printf("main\n");
  return 0;
}

/* void *__real_malloc(size_t size); */

/* void *__wrap_malloc(size_t size) { */
/*   void* result; */
/*   result = __real_malloc(size); */
/*   printf("wrapped malloc\n"); */
/*   return result; */
/* } */

/* int main() { */
/*   char *ptr; */
/*   ptr = (char*) malloc(12); */
/*   printf("main\n"); */
/* } */
