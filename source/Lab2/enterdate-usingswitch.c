/* Making use of a switch statement (based on the month) to write a program to read in a month and day.
Your program should then print out an appropriate error message ONLY when an invalid date is input. */

#define JAN 1
#define FEB 2
#define MAR 3
#define APR 4
#define MAY 5
#define JUN 6
#define JUL 7
#define AUG 8 
#define SEP 9
#define OCT 10 
#define NOV 11 
#define DEC 12 


#include <stdio.h>

void printreturn(day,month) {
    printf("The date chosen is %i/%i", day, month);
}

void errordate() {
    printf("Invalid date entered");
}

int main() {

int month; 
int day; 

// enter the date in format of day month, for example 25 12 (december 12th)
printf("Enter date in format date month");
scanf("%d %d,", &day, &month);


switch (month) {

    case JAN:
    case MAR:
    case MAY: 
    case JUL:
    case AUG:
    case OCT:
    case DEC:

        if (day < 1 || day > 31) {
            errordate() ;
        }
        else {
        printreturn(day, month);
        }
        break;

    case APR:
    case JUN:
    case SEP:
    case NOV:

        if (day < 1 || day > 30) {
            errordate() ;
        }
        else {
        printreturn(day, month) ; 
        }
        break;

    case FEB: 
        if (day < 1 || day > 28) {
            errordate() ;
        }
        else {
        printreturn(day, month) ;
        }
        break; 

    default:
        errordate();

//end of switch
}
        
//end of main()
}