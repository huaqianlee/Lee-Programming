#include <stdio.h>

int main() {
	int y,m,d,x;
	scanf("%d%d%d",&y,&m,&d);
	scanf("%d",&x);
	int i = 0;
	for(i = 0; i < x; i++)
	{
		d++;
		switch(m) {
			case 2:
				if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
					if (d > 29) m++,d = 1;
				} else if (d > 28) {
				       	m++,d =1;
				}
				break;
			case 12:
				if (d > 31) m = d = 1, y++;
				break;
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
				if (d > 31) m++, d = 1;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if (d > 30) m++, d = 1;
				break;
		}
	}
	printf("y-m-d: %d %d %d\n", y, m, d);
	return 0;
}

