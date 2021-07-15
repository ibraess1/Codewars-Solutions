#include <stdbool.h>
#include <stddef.h>

size_t count_sheep(const bool *sheep, size_t count)
{
  int i = 0;
  int j = 0;
  while (i< count)
  {
    if(sheep[i] == true)
    {
      j++;
    }
    i++;
  }
  return (j);
}
