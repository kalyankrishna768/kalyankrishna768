#include <stdio.h>

int main() {
    int grade = 80;
    char letterGrade;
    
    switch(grade) {
        case 90:
            letterGrade = 'A';
            break;
        case 80:
            letterGrade = 'B';
            break;
        case 70:
            letterGrade = 'C';
            break;
        case 60:
            letterGrade = 'D';
            break;
        default:
            letterGrade = 'F';
            break;
    }
    
    printf("Grade = %d, Letter grade = %c", grade, letterGrade);
    
