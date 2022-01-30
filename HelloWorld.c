#include <stdio.h>

int main(){
    int x;

    printf("\nHow old are you?");
    scanf("%d", &x);

    printf("You are %d years old", x);

    return 0;
}

/*

printf

// =                    one line comment
multi line comment =    this

\" = use " in string
\n = newline
\t = tab

*/

/*

int x;        declaration
x = 123;      initialization
int x = 123;  declaration + initialization

int x = 21;        Integer                  %d
float a = 21.12;   Floating point number    %f
char b = 'C';      Single Character         %c
char c[] = "Bro";    Array of characters    %s

Examples:
    printf("Hello %s\n", c);
    printf("You are %d years old\n", x);
    printf("Your avarage grade is %c\n", b);
    printf("Your gpa is %f\n", a);
*/

/*
float       32 bits of precision    #f
double      64 bits of precision    %fl

printf("% -> 0.15 <- f", float or double variable)      Choiche the precision       if the variable is not double we'll lost the precision

bool        true or false           %d

char            You can use to store single characters      %d to show "normal" or      %c to show single characters    -128 TO +127
unsigned char   Like char                                   %d to show "normal" or      %c to show single characters    0 to +255

short int           -32,768 to +32,767          %d      You can use "short int" or "short"
unsigned short int  0 to +65,535                %d      You can use "unsigned short int" or "unsigned short"

int             -2,147,483,648 to +2,127,483,647        %d
unsigned int    0 to +4,294,967,295                     %u

long long int               -9 quintillion to +9 quintillion        %lld
unsigned long long int      0 to +18 quintuillion                   %llu
*/

/*
%.1     decimal precision
%1      minimum field width
%-      left align
*/

/*
constant = fixed value that cannot be altered by the program during its execution

const int NAME = 0;
*/

/*

+       addition
-       subtraction   
*       multiplication
/       division
%       modulus
++      increment
--      decrement

(float) x       convert x to float

Pay attention on float division
*/

/*

x = x + 1;
x += 1;

x = x * 1;
x *= 1;

x = x / 1;
x /= 1;

x = x % 1;
x %= 1;

*/

/*

prinf("\nSome Question?")   show the quest
scanf("%d", &variable);     quest to user

*/