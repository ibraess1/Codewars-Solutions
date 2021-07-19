#include <stdio.h>
#include <stdbool.h>

bool    validParentheses(const char *str_in) {
    int i = 0;
    int tot = 0;
    while (str_in[i])
    {
        if (str_in[i] != ')' && str_in[i] != '(')
            i++;
        else if (str_in[i] == '(')
            tot += 1;
        else if (str_in[i] == ')')
            tot -= 1;
        if (tot == -1)
        {
            return false;
        }
        i++;
  }
    if(tot == 0)
        return true;
    else 
        return false;
}
