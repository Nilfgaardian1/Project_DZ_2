#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include <locale.h>

#include <stdio.h>

#define      D       2.54
#define      OldLitva       2.7076
#define      M1       1.8520
#define      M2       1.6090
#define      M3       14750
#define      M4       7.4680000
#define      M5       7412.60000

#define      AE      63241.1

void laba2_task3();
void laba3_task2();
void laba3_task3();
void laba3_DZ_15();

void main() {
    
    setlocale(LC_ALL, "RUS"); // ��� ������������ ������� ���������
    //laba2_task3();
    //laba3_task2();
    //laba3_task3();
    laba3_DZ_15();
}

void laba2_task3() {

    int L = 1333;
    int n = 3;
    int k = 4; 
    int m = 6; 

    double result = (double)n / L;

    printf("����:\n\t%4d \n\t%4d \n\t---------\n�����:\n\t%+0*.*f \n", n, L, k + m + 2, m, result);

    return 0;
}

void laba3_task2() {

    int dum;
    float result, result1, result2, result3, result4, result5, result6;
    
    puts("������� �������� ��� �������");

    scanf("%d", &dum);
    result = D * dum;
    result1 = OldLitva * dum;
    result2 = M1 * dum;
    result3 = M2 * dum;
    result4 = M3 * dum;
    result5 = M4 * dum;
    result6 = M5 * dum;
   
    printf("% d ������ � ��� % .1f ��\n" , dum, result);
    printf("% d ������� ���� � ��� % .1f ��\n" , dum, result6);
    printf("% d ���������� ���� � ��� % .1f ��\n" , dum, result2);
    printf("% d ������� ���� � ��� % .1f ��\n" , dum, result3);
    printf("% d ������������ ���� � ��� % .1f ��\n" , dum, result4);
    printf("% d �������������� ���� � ��� % .1f ��\n" , dum, result5);
    printf("% d �������������� � ��� % .1f ��\n" , dum, result1);
}

void laba3_task3() {

    float a, b;

    puts("������� �������� a");
    scanf("%d", &a);
    puts("������� �������� b");
    scanf("%d", &b);

    // ���������� ��������
    float mul = a * b;
    float sum = a + b;
    float min = a - b;

    // ����� �������
    printf("_______________________________\n");
    printf("| a * b  | a + b  | a - b  |\n");
    printf("-------------------------------\n");

    // ���������� ������ %7.2f ��� ������������ ����� � 2 ������� ����� �������
    // 7 �������� �������� ����� �����, ������� �����, ����� � ��������� �����
    printf("| %7.2f | %7.2f | %7.2f |\n", a, b, mul);
    printf("-------------------------------\n");

    // ���������� ��� �� ������ ��� ����������� ��������, ��������� � ���������
    printf("| %7.2f | %7.2f | %7.2f |\n", mul, sum, min);
    printf("-------------------------------\n");

    return 0;
}

void laba3_DZ_15() {

    int lightAge;
    float resuitDZ;

    puts("������� �������� �������� ��� ��� ��������� ��������������� �������");

    scanf("%d", &lightAge);
    resuitDZ = AE * lightAge;

    printf("% d ��������������� ������ ����� = % .1f\n", lightAge, resuitDZ);

}