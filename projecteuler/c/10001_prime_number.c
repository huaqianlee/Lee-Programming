/*
 * Function isPrime(n)
 * if n=1 then return false
 * else
 * if n<4 then return true //2 and 3 are prime
 * else
 * if n mod 2=0 then return false
 * else
 * if n<9 then return true //we have already excluded 4,6 and 8.
 * else
 * if n mod 3=0 then return false
 * else
 * r=floor( n ) // n rounded to the greatest integer r so that r*r<=n
 * f=5
 *  while f<=r
 * if n mod f=0 then return false (and step out of the function)
 * if n mod(f+2)=0 then return false (and step out of the function)
 * f=f+6
 * endwhile
 * return true (in all other cases)
 * End Function
 */
#include <stdio.h>

int get_prime_number(int n) {
	int count = 0;
	for (int i = 2, j = 2; i; ++i) {
		for (j = 2; j < i ; ++j) {
			if ( i % j == 0)
				break;
		}
		if ( j == i)
			count++;
		if (count == n)
			return i;
	}

	return -1;
}


int main() {
	int n = 0; 

	scanf("%d", &n);
	printf("The %dth prime numnber is %d\n", n , get_prime_number(n));
}
