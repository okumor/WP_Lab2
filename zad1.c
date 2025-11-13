#include <stdio.h>
#include <stdbool.h>
// biblioteka aby użyć funkcji potęgowania - pow() (opcjonalnie)
#include <math.h> 

double calculateBMI(double weight, double height) {
    // oblicz BMI i zwróć wartość
}
double calculateWHR(double hips, double waist) {}

int main() {
    double weight, height;
    char choice;
    double hips, waist;

    printf("wybierz przelicznik dla\n 'a' -> przelicznik IBM\n i dla\n 'b' -> przelicznik WHR\n:");
        scanf("%c", &choice);

    switch (choice) {

    
        case 'a':

    do {
        // użytkownik wprowadza wagę i wzrost
        printf("Podaj wage (kg): \n");
        scanf("%lf", &weight);
        
        printf("Podaj wzrost (cm): \n");
        scanf("%lf", &height);
        
        // obliczanie BMI
        double bmi = calculateBMI(weight, height);
        printf("BMI = %.2f\n", bmi);
        
        break;
    } while (true);
    break;

    case 'b':

    do {
        printf("Podaj obwód bioder (cm)\n");
        scanf("%lf", &hips);

        printf("Podaj obwd tali (cm)\n");
        scanf("%lf", &waist);

        double WHR = calculateWHR(hips, waist);
        printf("WHR = %.2f", WHR);

        break;
    } while (true);
   break;

    default:
        printf("Niepoprawny wybor\n");
        break;

}

    return 0;
}