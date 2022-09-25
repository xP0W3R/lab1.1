#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define Name "Anton"
#define LastName "Drobitko"
#define GroupName "RE-22"
#define Faculty "RTF"
#define University "Igor Sikorsky KPI"
unsigned int age;
unsigned int age = 17;
unsigned int semester;
float admissionScore;
int grade1;
int grade2;
int grade3;
int grade4;
int grade5;
double averageGrade;

int main ()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP (1251);
    printf("%s %s Follow next steps.\n", Name, LastName);
    printf("Enter the semester number: ");
    scanf("%u" , &semester);

    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);

    printf("Enter a grade for the subject #1: ");
    scanf("%d", &grade1);

    printf("Enter a grade for the subject #2: ");
    scanf("%d", &grade2);

    printf("Enter a grade for the subject #3: ");
    scanf("%d", &grade3);

    printf("Enter a grade for the subject #4: ");
    scanf("%d", &grade4);

    printf("Enter a grade for the subject #5: ");
    scanf("%d", &grade5);

    printf("Enter your age: ");
    scanf("%u", &age);

    averageGrade = (double)(grade1+grade2+grade3+grade4+grade5)/5;

    printf("\n\t average grade = %.3lf", averageGrade);

    system("cls");
    printf("%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", GroupName);
    printf("\n***************");
    printf("\nstudent: %s %s", Name, LastName);
    printf("\nage: %u", age);
    printf("\nsemester: %u", semester);
    printf("\n===============");
    printf("\nadmission score: %.1f", admissionScore);
    printf("\naverage grade = %.2lf", averageGrade);
    printf("\n");


    return 0;

}
