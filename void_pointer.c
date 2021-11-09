#include <stdio.h>
void print_bytes(void* data, size_t length) {
  char delim = ' ';
  unsigned char* ptr = data;
  for (size_t i = 0; i < length; i++) {
    printf("%c 0x%x", delim, *ptr);
    /* Method-2: Alternatively the void pointer can be dereferenced by casting it like this .... */
   //  printf("%c 0x%x", delim, *(unsigned char*)data);
    delim = ',';
    ptr++;
    /*Method-2 : casting and incrementing the void pointer*/
   //  *(unsigned char*)data++;
  }
  printf("\n");
}

int main(int argc, char** argv) {
 int a = 9;
 double b = 18.9;
 print_bytes(&a, sizeof(int));
 print_bytes(&b, sizeof(double));
 return 0;
}

/*
 * 1) As per the standard, pointer arthimetic shall not be done on void pointers.
 *References:
   https://stackoverflow.com/questions/20967868/should-the-compiler-warn-on-pointer-arithmetic-with-a-void-pointer
 * 
 * 2) assignment to a void pointer (generic pointer) does not need an explicit cast. That is why we have passed the addresses of a and b without explicit casts.
 *
 *
 * */
