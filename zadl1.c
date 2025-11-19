#include <stdio.h>

char kontynuuj;
char choice;
char subchoice;

int main() {

    do {
        printf("Wybierz przelicznik:\n");
        printf("a: Dlugosc\n");
        printf("b: Masa\n");
        printf("c: Temperatura\n");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a': {
            printf("\nWybierz przelicznik dlugosci\n");
            printf("a: cm -> m\n");
            printf("b: m -> km\n");
            scanf(" %c", &subchoice);

            switch (subchoice) {

                case 'a': {
                double cm;
                printf("\nPodaj cm:\n");
                scanf("%lf", &cm);
                printf("Wynik to: %.2f cm = %.2f m\n", cm, cm / 100);
                break;
                }

                case 'b': {
                    double m;
                    printf("\nPodaj m:\n");
                    scanf("%lf", &m);
                    printf("Wynik to: %.2f m = %.2f km\n", m, m / 1000);
                    break;
                }

            }
        }
            break;

            case 'b':
            printf("\nPodaj wartosci mas a i b\n");
            break;

            case 'c':
            printf("\nPodaj wartosci temperatur a i b\n");
            break;

            default:
            printf("\nBledny wybor w menu\n");
            break;
        }
printf("\nChcesz kontynuowac? kliknij 'x'. Jesli nie kliknij dowolny inny znak\n");
scanf(" %c", &kontynuuj);
    }
    while (kontynuuj == 'x');

    printf ("\n Koniec programu.\n");
    
    return 0;


}