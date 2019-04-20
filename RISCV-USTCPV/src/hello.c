void putchar(char c)
{
  volatile int *uart = (int *)0x80000000;
  
  while(*uart); // uart busy, wait...
  *uart = c;
}

void puts(char *p)
{
  while(*p) putchar(*p++);
  putchar('\r');
  putchar('\n');
}

void main(void)
{
  puts("hello world!");
}
