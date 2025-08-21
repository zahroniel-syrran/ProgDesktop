#include "math_utils.h"
int max3(int a,int b,int c){ int m=(a>b?a:b); return (m>c?m:c); }
bool isPrime(int n){ if(n<2) return false; for(int d=2; d*d<=n; ++d) if(n%d==0) return false; return true; }
