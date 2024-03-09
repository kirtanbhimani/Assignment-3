//26.Convert temperature Fahrenheit to Celsius

#include <stdio.h>
int main(){
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;                //formula fpr coverting temp.
    printf("Temperature in Celsius: %.2f\n", celsius);
}
