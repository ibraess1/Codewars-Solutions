int basic_op(char op, int value1, int value2) {
  int result;
  switch(op){
      case '+' :
        result = value1 + value2;
          return(result);
      case '-' :
        result = value1 - value2;
          return(result);
      case '*' :
        result = value1 * value2;
          return(result);
      case '/' :
        result = value1 / value2;
          return(result);
  }

}
