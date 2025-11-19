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
                do {
                printf("\nPodaj cm:\n");
                scanf("%lf", &cm);

                if(cm<0) {
                    printf("Blad. Podales ujemna wartosc. sprobuj jeszcze raz\n");
                }

                } while (cm < 0);
        
                printf("Wynik to: %.2f cm = %.2f m\n", cm, cm / 100);
                break;
                }

                case 'b': {
                    double m;
                    do {
                    printf("\nPodaj m:\n");
                    scanf("%lf", &m);

                    if (m < 0) {
                        printf("Blad. Podales ujemna wartosc. sprobuj jeszcze raz\n");
                    }

                    } while (m < 0);
                    printf("Wynik to: %.2f m = %.2f km\n", m, m / 1000);
                    break;
                }

            }
        }
            break;

            case 'b': {
                double g;
                do {
            printf("\nPodaj wartosc masy g\n");
            scanf("%lf", &g);

            if (g < 0) {
                printf("Blad. Podales ujemna wartosc. sprobuj jeszcze raz\n");
            }

                } while (g < 0);
            printf("Wynik to: %.2f g = %.2f kg\n", g, g * 0.001);
            break;
            }

            case 'c': {
                double C;
            printf("\nPodaj wartosc temperatury w C\n");
            scanf("%lf", &C);
            printf("Wynik to: %.2f C = %.2f F\n", C, C * 1.8 + 32);
            break;
            }

            default: {
            printf("\nBledny wybor w menu\n");
            break;
            }
        }
printf("\nChcesz kontynuowac? kliknij 'x'. Jesli nie kliknij dowolny inny znak\n");
scanf(" %c", &kontynuuj);
    }
    while (kontynuuj == 'x');

    printf ("\n Koniec programu.\n");
    
    return 0;


}