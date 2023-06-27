int NthRoot(int n, int m) {
  if (m==1 or n==1) return m;

  int i=1,j=m;

  while (i<=j)
  {
    int mid = i+(j-i)/2;

    if (pow(mid,n)>m)
      j = mid-1;
    else if (pow(mid,n)==m)
      return mid;
    else
      i = mid+1;

  }
  return -1;

}
