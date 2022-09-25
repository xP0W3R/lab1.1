#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define Name "Антон"
#define LastName "Дробітько"
#define GroupName "РЕ-22"
#define Faculty "РТФ"
#define University "КПІ Ігоря Сікорського"
unsigned int age;      //оголошення змінної
unsigned int age = 18;  //ініціалізація змінної
unsigned int semestr;
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
    printf("%s %s Виконайте наступні дії.\n", Name, LastName);
    printf("Введіть номер семестру: ");
    scanf("%u" , &semestr);

    printf("Введіть свій вступний бал: ");
    scanf("%f", &admissionScore);

    printf("Введіть оцінку за предмет №1: ");
    scanf("%d", &grade1);

    printf("Введіть оцінку за предмет №2: ");
    scanf("%d", &grade2);

    printf("Введіть оцінку за предмет №3: ");
    scanf("%d", &grade3);

    printf("Введіть оцінку за предмет №4: ");
    scanf("%d", &grade4);

    printf("Введіть оцінку за предмет №5: ");
    scanf("%d", &grade5);

    printf("Введіть свій вік: ");
    scanf("%u", &age);

    averageGrade = (double)(grade1+grade2+grade3+grade4+grade5)/5;

    printf("\n\t average grade = %.3lf", averageGrade);

    system("cls");
    printf("%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", GroupName);
    printf("\n***************");
    printf("\nстудент: %s %s", Name, LastName);
    printf("\nвік: %u", age);
    printf("\nсеместр: %u", semestr);
    printf("\n===============");
    printf("\nвступний бал: %.1f", admissionScore);
    printf("\nсередній бал = %.2lf", averageGrade);
    printf("\n");


    return 0;

}
