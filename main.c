#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
int roman (int,int,char);
int myroman (int, int, char[]);
double getInput(void);
bool isScientificNotation(const char *input);

int main(void){
    int a;
    printf("Welcome to roman numeral converter!Enter a year you would like to convert(input must be between 0 and 10000): \n");
    
 
    while (1){
        a = getInput();

      

           if(a <= 0 || a > 9999){
               printf("\n");
               printf("Input must be between 0 and 10000.Please, try again: ");
              

           }
           else{
               break;

           }
       }

        a=roman(a,1000,'M');
        a=myroman(a,900, "CM");
        a=roman(a,500,'D');
        a=myroman(a,400, "CD");
        a=roman(a,100,'C');
        a=myroman(a,90, "XC");
        a=roman(a,50,'L');
        a=myroman(a,40, "XL");
        a=roman(a,10,'X');
        a=myroman(a,9, "IX");
        a=roman(a,5,'V');
        a=myroman(a,4, "IV");
        a=roman(a,1,'I');
    printf("\n");
          return 0;

}
int roman(int i,int j,char c){
       while (i>=j){
           putchar(c);
           i=i-j;
           }

    return (i);
}
int myroman (int i2,int j2,char c[]){
    while (i2>=j2){
        printf("%s", c);
        i2=i2-j2;
        }
    return (i2);

}
double getInput(void) {
    char input[15];
    double number;

    do {

        scanf("%s", input);

        int invalidInput = 0;
        for (int i = 0; input[i] != '\0'; i++) {
            if (isdigit(input[i]) == 0 && input[i] != '.' && input[i] != '-' && !isScientificNotation(input)) {
                printf("\nYour input is invalid, try again: ");
                invalidInput = 1;
                break;
            }
        }

        if (!invalidInput) {
            number = atof(input);
            break;
        }
    } while (1);

    return number;
}
bool isScientificNotation(const char *input) {
    int len = strlen(input);
    int eCount = 0;
    int digitsBeforeE = 0;
    int digitsAfterE = 0;

    for (int i = 0; i < len; i++) {
        char c = input[i];
        if (c == 'e' || c == 'E') {
            eCount++;
        } else if (isdigit(c) && eCount == 0) {
            digitsBeforeE++;
        } else if (isdigit(c) && eCount == 1) {
            digitsAfterE++;
        }
    }


    return (eCount == 1) && (digitsBeforeE > 0) && (digitsAfterE > 0);
}
