#include <stddef.h>
#include<unistd.h>
void invert(int *values, size_t values_size)
{
  int i = 0;
  while(i < values_size){
    values[i] = cont(values[i]);
    i++;
  }
}

int cont(int num )
{
  return(num * (-1));
}
