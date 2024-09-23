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
    
    setlocale(LC_ALL, "RUS"); // дл€ переключени€ русской кодировки
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

    printf("ƒано:\n\t%4d \n\t%4d \n\t---------\nќтвет:\n\t%+0*.*f \n", n, L, k + m + 2, m, result);

    return 0;
}

void laba3_task2() {

    int dum;
    float result, result1, result2, result3, result4, result5, result6;
    
    puts("¬ведите значение дл€ расчЄта");

    scanf("%d", &dum);
    result = D * dum;
    result1 = OldLitva * dum;
    result2 = M1 * dum;
    result3 = M2 * dum;
    result4 = M3 * dum;
    result5 = M4 * dum;
    result6 = M5 * dum;
   
    printf("% d дюймов Ц это % .1f см\n" , dum, result);
    printf("% d морска€ мил€ Ц это % .1f см\n" , dum, result6);
    printf("% d сухопутна€ мил€ Ц это % .1f см\n" , dum, result2);
    printf("% d римска€ мил€ Ц это % .1f см\n" , dum, result3);
    printf("% d старорусска€ мил€ Ц это % .1f см\n" , dum, result4);
    printf("% d географическа€ мил€ Ц это % .1f см\n" , dum, result5);
    printf("% d старолитовское Ц это % .1f см\n" , dum, result1);
}

void laba3_task3() {

    float a, b;

    puts("¬ведите значение a");
    scanf("%d", &a);
    puts("¬ведите значение b");
    scanf("%d", &b);

    // ¬ычисление значений
    float mul = a * b;
    float sum = a + b;
    float min = a - b;

    // ¬ывод таблицы
    printf("_______________________________\n");
    printf("| a * b  | a + b  | a - b  |\n");
    printf("-------------------------------\n");

    // »спользуем формат %7.2f дл€ выравнивани€ чисел с 2 знаками после зап€той
    // 7 символов включает целую часть, дробную часть, точку и возможный минус
    printf("| %7.2f | %7.2f | %7.2f |\n", a, b, mul);
    printf("-------------------------------\n");

    // »спользуем тот же формат дл€ результатов сложени€, вычитани€ и умножени€
    printf("| %7.2f | %7.2f | %7.2f |\n", mul, sum, min);
    printf("-------------------------------\n");

    return 0;
}

void laba3_DZ_15() {

    int lightAge;
    float resuitDZ;

    puts("¬ведите значение световых лет дл€ пересчЄта астрономические еденицы");

    scanf("%d", &lightAge);
    resuitDZ = AE * lightAge;

    printf("% d астрономических еденец будет = % .1f\n", lightAge, resuitDZ);

}