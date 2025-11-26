#include <stdio.h>

int main() {

    float weight, height, bmi;

    printf("Enter your Weight(kg): ");
    scanf("%f", &weight);

    printf("Enter your Height(m): ");
    scanf("%f", &height);

    if (height <= 0)
    {
        printf("the height must be greater than 0.n");
    }

    bmi = weight / (height * height);

    printf(" Your BMI is %.2f.n", bmi);

    if (bmi < 18.5)
    {
        printf("Underweight.n");

    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("Normal Weight.n");
    } else
    {
        printf("Overweight.n");
    }

    return 0;
}
