#include <stdio.h>

#include <kernel_tty.h>

void kernel_main(void) {
  terminal_initialize();
  printf("Hello from the kernel!\n");
}
