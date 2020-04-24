
#include <stdio.h>
#include <string.h>
#include<math.h>
int gcd(int a, int h) 
{ 
    int temp; 
    while (1) 
    { 
        temp = a%h; 
        if (temp == 0) 
          return h; 
        a = h; 
        h = temp; 
    } 
}
int powMod(int a, int b, int n) {
	long long x = 1, y = a;

	while (b > 0) {
		if (b % 2 == 1)
			x = (x * y) % n;
		y = (y * y) % n; // Squaring the base
		b /= 2;
	}

	return x % n;
}
int main() {
   int p = 59;
    int q = 53;
    int n = p*q; 
    int e = 7;
    int phi = (p-1)*(q-1); 
     while (e < phi) 
    { 
        // e must be co-prime to phi and 
        // smaller than phi. 
        if (gcd(e, phi)==1) 
            break; 
        else
            e++; 
    } 
   
    
      
	int k = 8;  // A constant value 
    int d = (1 + (k*phi))/e; 
    
    int msg = 109; 
    int c = powMod(msg, e, n);
   // c= fmod(c, n); 
    printf("%d \n",c);
    
    int m2 = powMod(c, d, n);
    //m2 = fmod(m2, n); 
    printf("%d\n",m2);
    printf("%d",d);
    
    return 0;
}
    
