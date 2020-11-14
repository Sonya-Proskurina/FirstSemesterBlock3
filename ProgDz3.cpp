// ProgDz3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include<stdio.h>
#include <locale.h>
#include <math.h>

int factorial(int count) {
    int  a = 1;
    for (int i = 1; i <= count; i++)
        a = a * i;
    return a;
}

void r1() {
    float num;
    int numB;
    int n;
    float sinS;
    float x;
    printf("Ввведите номер задачи (77, 80, 86):\n");
    scanf("%f", &num);
    switch (int(num))
    {
    case 77:
        printf("Введите номер буквы (а-1, б-2, в-3, г-4, д-5)\n");
        scanf("%i", &numB);
        printf("Введите n:\n");
        scanf("%i", &n);
        switch (numB)
        {
        case 1:
            printf("Ответ: %i\n", int(pow(2, n)));
            break;
        case 2:
          printf("Ответ: %i\n", factorial(n));
            break;
        case 3:
            num = 1;
            for (int i = 1; i <= n; i++) {
                num *= (1+1./(i*i));
            }
            printf("Ответ: %f\n", num);
            break;
        case 4:
            num = 0;
            sinS = 0;
            for (int i = 1; i <= n; i++) {
                sinS += sinf(i);
                num += 1./(sinS);
            }
            printf("Ответ: %f\n", num);
            break;
        case 5:
            num = sqrtf(2);
            if (n!=1)
            for (int i = 2; i <= n; i++) {
                num = sqrtf(2+num);
            }
            printf("Ответ: %f\n", num);
            break;
        }
        break;
    case 80:
        printf("Введите x:\n");
        scanf("%f", &x);
        num = x;
        for (int i = 1; i <7;i++) {
            if (i%2!=0)
            num -= powf(x,2*i+1)/factorial(2 * i + 1);
            else  num += powf(x, 2 * i + 1) / factorial(2 * i + 1);
        }
        printf("Ответ: %f\n", num);
        break;
    case 86:
        printf("Введите номер буквы (а-1, б-2, в-3)\n");
        scanf("%i", &numB);
        printf("Введите n:\n");
        scanf("%i", &n);
        switch (numB)
        {
        case 1:
            num = 0;
            while (n>0)
            {
                n /= 10;
                num++;
            }
            printf("Ответ: %.0f\n", num);
            break;
        case 2:
            num = 0;
            while (n > 0)
            {
                num += n % 10;
                n /= 10;
            }
            printf("Ответ: %.0f\n", num);
            break;
        case 3:
            num = 0;
            while (n > 0)
            {
                num= n % 10;
                n /= 10;
            }
            printf("Ответ: %.0f\n", num);
            break;
       }
        break;
 
    }
}

void r2() {
    int n;
    printf("Введите длину катета\n");
    scanf("%i",&n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
void r3() {
    int n;
    printf("Введите высоту:\n");
    scanf("%i", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            printf(" ");
        }
        for (int j = 0; j < 1 + (2 * i); j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    bool go = true;
    int again = 1;
    //программирование. дз3
    while (again) {
        go = true;
        while (go)
        {
            printf("Введите номер задания (1- задачи из задачника, 2- треугольник с вводом катета, 3-треугольник с вводом высоты ):\n ");
            scanf("%i", &num);
            switch (num)
            {
            case 1:
                r1();
                go = false;
                break;
            case 2:
                r2();
                go = false;
                break;
            case 3:
                r3();
                go = false;
                break;
            default:
                printf("Данное число не доступно\n");
                break;
            }
        }
        printf("Чтобы закончить введите 0, а чтобы продолжить 1\n");
        scanf("%i", &again);
    }
    _getch();
}
