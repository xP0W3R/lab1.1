#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#define Name "�����"
#define LastName "��������"
#define GroupName "��-22"
#define Faculty "���"
#define University "�ϲ ����� ѳ���������"
unsigned int age;      //���������� �����
unsigned int age = 18;  //����������� �����
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
    printf("%s %s ��������� ������� 䳿.\n", Name, LastName);
    printf("������ ����� ��������: ");
    scanf("%u" , &semestr);

    printf("������ ��� �������� ���: ");
    scanf("%f", &admissionScore);

    printf("������ ������ �� ������� �1: ");
    scanf("%d", &grade1);

    printf("������ ������ �� ������� �2: ");
    scanf("%d", &grade2);

    printf("������ ������ �� ������� �3: ");
    scanf("%d", &grade3);

    printf("������ ������ �� ������� �4: ");
    scanf("%d", &grade4);

    printf("������ ������ �� ������� �5: ");
    scanf("%d", &grade5);

    printf("������ ��� ��: ");
    scanf("%u", &age);

    averageGrade = (double)(grade1+grade2+grade3+grade4+grade5)/5;

    printf("\n\t average grade = %.3lf", averageGrade);

    system("cls");
    printf("%s", University);
    printf("\n%s", Faculty);
    printf("\n%s", GroupName);
    printf("\n***************");
    printf("\n�������: %s %s", Name, LastName);
    printf("\n��: %u", age);
    printf("\n�������: %u", semestr);
    printf("\n===============");
    printf("\n�������� ���: %.1f", admissionScore);
    printf("\n������� ��� = %.2lf", averageGrade);
    printf("\n");


    return 0;

}
