int bouncingBall(double h, double bounce, double window) {
  int watch = 0;
  if(h > 0 && (bounce > 0 && bounce < 1) && window < h)
  {
    while(h > window)
    {
        h = h * bounce;
        watch = watch + 2;
    }
    return (watch - 1 );
    }
    else 
      return (-1);
}
