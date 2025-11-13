#include <stdio.h>

int main () {

    int i;
    int j;

    for(i=1; i<=5; i++) { //zaczynasz od 1, rbisz tak dlugu az dojdziesz do 5 / poki jestes mniejszy lub rowny 5, zwiekszasz sie o 1
        for (j=i; j>=1; j--) { //., robisz tak dlugo az zostanie tylko 1 (3 2 1, 2 1, 1), zmniejszasz sie o 1 ( dla wiersza 3: 3 2 1 --> 3 sie zmniejsza o 1 az do 1)
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}