#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() {
	int nt,mt;
	float nf,mf;

	scanf("%d %d", &nt, &mt);
	scanf("%f %f", &nf, &mf);

	printf("%d %d\n", nt + mt, abs(nt - mt));
	printf("%.1f %.1f", nf + mf, fabs(nf - mf));
	printf("%d %d\n", nt + mt, (nt - mt > 0) ? nt - mt : mt - nt);
	printf("%.1f %.1f", nf + mf, (nf - mf > 0) ? nf - mf : mf - nf);
	// The following can through all test cases, so I made it complecated.
        printf("%d %d\n", nt + mt, (nt - mt));
        printf("%.1f %.1f", nf + mf, (nf - mf));     

	return 0;
}
