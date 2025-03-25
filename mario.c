#include <stdio.h>
#include <string.h>

int main() {
int height;
char empty = ' ';
char hash = '#';

printf("Enter the height of the column between 1 and 8: ");

while (1){
    if (scanf("%d", &height) == 1 && height >= 1 && height <= 8){
        break;
    } else {
        while (getchar() != '\n');

        printf("invalid input please enter a number between 1 through 8 : ");
    }
}
for (int c = 1; c <= height; c++){
// print spaces
int column = c;
for (int i = 8 - column; i >= 1; i--) {
    printf("%c", empty);   
}
for ( int i = 1; i <= column; i++) {
    printf("%c", hash);
}
printf("  ");
for (int i = 1; i <= column; i++) {
    printf("%c", hash);
}
column--;
printf("\n");
}

if (height > 0) {
    printf("       #  #\n");
}
if (height > 1) {
    printf("      ##  ##\n");
}
if (height > 2) {
    printf("     ###  ###\n");
}
if (height > 3) {
    printf("    ####  ####\n");
}
if (height > 4) {
    printf("   #####  #####\n");
}
if (height > 5) {
    printf("  ######  ######\n");
}
if (height > 6) {
    printf(" #######  #######\n");
}
if (height > 7) {
    printf("########  ########\n");
}



return 0;
}
