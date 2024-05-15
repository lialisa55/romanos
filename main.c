#include <stdio.h>
#include <stdlib.h>


void romanar(int num);

int main()
{
    int n;
    scanf("%d", &n);

    for(int j = 0; j < n; j++){
        int a;
	scanf("%d", &a);
	romanar(a);
	printf("\n");
    }
    return 0;
}

void romanar(int num){
	int decimais[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	char *romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

	for (int i = 0; i < 13; i++){
		while (num >= decimais[i]){
			printf("%s", romanos[i]);
			num -= decimais[i];
		}
	}
}
