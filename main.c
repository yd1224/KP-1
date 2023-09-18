#include <stdio.h>
//#include <conio.h>
int roman (int,int,char);
int myroman (int, int, char[]);

int main(void){
    int a;
    printf("Welcome to roman numeral converter! Enter a year you would like to convert(input must be between 0 and 10000)\n");
    
    scanf("%u",&a);
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
//        getch();
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
