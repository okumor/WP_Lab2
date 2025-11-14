#include <stdio.h>
#include <stdbool.h>
// biblioteka aby użyć funkcji potęgowania - pow() (opcjonalnie)
#include <math.h> 

double calculateBMI(double weight, double height) {
    // oblicz BMI i zwróć wartość
}
double calculateWHR(double hips, double waist) {}

int main() {
    // piszesz je na samym poczatku aby uzyc ich w case 'a' i case 'b'
    double weight, height; 
    char choice;
    double hips, waist;
    char exit;
    int nr_persons = 3; // liczba osob do przeliczenia

    printf("wybierz przelicznik\n dla 'a' -> przelicznik IBM\n dla 'b' -> przelicznik WHR\n dla 'q' -> wyjscie\n twoj wybor:");
        scanf(" %c", &choice); // pamietaj spacje przed %c aby uniknac problemow z buforem

    switch (choice) {

    
        case 'a': 
        for (int i = 1; i <= nr_persons; i++) {
        printf("Osoba %d:\n", i);

    do {
        // użytkownik wprowadza wagę i wzrost
        printf("Podaj wage (kg): \n");
        scanf("%lf", &weight);
        
        printf("Podaj wzrost (cm): \n");
        scanf("%lf", &height);

        if (height < 0 || weight < 0) {
        printf("Wartosc nie moze byc ujemna.\n");
        continue; // wracasz na początek pętli jeśli wartość jest ujemna. w sesnie znow bedziesz wpisywac wartosci
    }
        
        // obliczanie BMI
        double bmi = calculateBMI(weight, height);
        printf("BMI = %.2f\n", bmi);

        printf("Wpisz 'x' aby wyjsc lub inny znak aby kontynuowac: \n");

    scanf(" %c", &exit);
if (exit == 'x')
    break; // wychodzisz z pętli jeśli użytkownik wpisze 'x'
        
    } while (true);
        break; // bez tego nawet jak klikniesz x program przekieruje cie do case 'b'
   

    case 'b':

    do {
        printf("Podaj obwód bioder (cm)\n");
        scanf("%lf", &hips);

        printf("Podaj obwd tali (cm)\n"); // to jest to samo co w case a, ale inny zapis
        scanf("%lf", &waist);

        if (hips < 0 || waist < 0) {
        printf("Wartosc nie moze byc ujemna.\n");
        continue; 
    }

        printf("BMI = %.2f\n", calculateBMI(weight, height));

        printf("Wpisz 'x' aby wyjsc lub inny znak aby kontynuowac: \n");

        scanf(" %c", &exit);
if (exit == 'x')
    break;

    } while (true);
        break;
  

    case 'q': //wyjscie z programu
                printf("Koniec programu.\n");
                return 0;

    default: // kazda inna opcja oprcz a, b, q doprowadzi do zakonczenia programu
        printf("Niepoprawny wybor\n");
        break;

}

    return 0;
}}