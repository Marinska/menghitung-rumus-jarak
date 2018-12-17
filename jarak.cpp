#include <stdio.h>
int main()
{
	int s,v,t;
	printf("Masukan kecepatan (km/jam): ");
	scanf("%d",&v);
	printf("Masukan waktu (jam): ");
	scanf("%d",&t);
	s=v*t;
	printf("Jarak tempuh adalah %d km",s);
}
