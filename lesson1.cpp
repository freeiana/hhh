// Кузьмина
// В любой задаче при ошибке ввода происходит выход в основное меню

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int task1();
int task2();
int task3();
int task4();
int task5();
int task6();
int task7();
int task8();
int task9();
int task10();
int task11();
int task12();
int task13();
int task14();
void menu();

int main()
{
    int sel = 0;
    do
    {
        menu();
        scanf("%i", &sel);
        rewind(stdin);
        switch (sel)
        {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 4: task4(); break;
            case 5: task5(); break;
            case 6: task6(); break;
            case 7: task7(); break;
            case 8: task8(); break;
            case 9: task9(); break;
            case 10: task10(); break;
            case 11: task11(); break;
            case 12: task12(); break;
            case 13: task13(); break;
            case 14: task14(); break;
            case 0: break;
            default: printf("Wrong selected\n");
        }
    } while (sel != 0);
    return 0;
}

///////////////////////////// Task 1 //////////////////////////////
// Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле
//I = m / (h * h), где m – масса тела в килограммах, h – рост в метрах.
int task1()
{
    printf ("\n******************** TASK_1 SOLUTION ********************\n");
	int w;
	float g, I;
	printf ("\nInput WEIGHT (in kilo): "); // считаем целым числом
	if ( scanf("%d", &w) == 0 )
	{
        rewind(stdin);
		printf("Incorrect data! Try again! \n");
		return 0; // здесь и далее зевершение 0 так как ошибка ввода не является ошибкой программы
	}	
	printf("Input GROWTH (in meters): ");
    if ( scanf("%g", &g) == 0 ) // вещественное число
    {
        rewind(stdin);
        printf("Incorrect data! Try again! \n");
        return 0;
    }
    rewind(stdin);
	printf("BODY MASS INDEX: I = %g", I = w / (g * g));
    if (I<16) {printf(" - large mass deficit!\n"); return 0;}
    if (I<18.5) {printf(" - mass deficit!\n"); return 0; }
    if (I<24.99) {printf(" - norma!\n"); return 0; }
    if (I<30) {printf(" - low overweight!\n"); return 0; }
    if (I<35) {printf(" - overweight!\n"); return 0; }
    if (I<40) {printf(" - large overweight!\n"); return 0; }
    if (I>40) {printf(" - too large overweight!\n"); return 0; }
    return 0;
}

///////////////////////////// Task 2 //////////////////////////////
// Найти максимальное из четырёх чисел. Массивы не использовать.
int task2()
{
    printf ("\n******************** TASK_2 SOLUTION ********************\n");
    float n1, n2, n3, n4, max;
    printf ("\nInput 4 numbers (float or integer): "); // ввод целых или вещественных чисел
    scanf ("%f %f %f %f", &n1, &n2, &n3, &n4);
    rewind(stdin);
    printf ("You input numbers: %g %g %g %g\n", n1, n2, n3, n4);
    max = n1;
    if (max < n2) max = n2;
    if (max < n3) max = n3;
    if (max < n4) max = n4;
    printf ("Max number: %g\n", max);
    return 0;
}

///////////////////////////// Task 3 //////////////////////////////
// Написать программу обмена значениями двух целочисленных переменных:
// a. С использованием третьей переменной.
// b. *Без использования третьей переменной.

int task3()
{
    printf ("\n******************** TASK_3 SOLUTION ********************\n");
    int n1, n2, temp;
    printf ("\nInput 2 integer numbers: ");
    scanf ("%d %d", &n1, &n2);
    rewind(stdin);
    printf("Number 1: %d\nNumber 2: %d\n", n1, n2);
// a. С использованием третьей переменной.
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("RESULT (with extra variable):\nNumber 1: %d\nNumber 2: %d\n", n1, n2);
// Возврат значений в исходное состояние для повторного решения задачи
    temp = n1;
    n1 = n2;
    n2 = temp;
// b. *Без использования третьей переменной.
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("RESULT (without extra variable):\nNumber 1: %d\nNumber 2: %d\n", n1, n2);
    return 0;
}

///////////////////////////// Task 4 //////////////////////////////
//Написать программу нахождения корней заданного квадратного уравнения.

int task4()
{
    printf ("\n******************** TASK_4 SOLUTION ********************\n");
    float a, b, c, D, x1, x2;
    printf("Quadric equation of the form  ax^2 + bx + c = 0  solution.\nInput a: ");
    scanf("%f", &a);
    rewind(stdin);
    printf("Input b: ");
    scanf("%f", &b);
    rewind(stdin);
    printf("Input c: ");
    scanf("%f", &c);
    rewind(stdin);
    printf("\nQuadric equation  %gx^2%+gx%+g = 0; \n", a, b, c);
    D=b*b-4*a*c;
    printf("%g", D);
    if (D>0)
    {
        x1=(-b-sqrtf(D))/(2*a);
        x2=(-b+sqrtf(D))/(2*a);
        printf("Solution:\nx1=%g\nx2=%g\n", x1, x2);
        return 0;
    }
    if (D==0)
    {
        x1=(-b)/(2*a);
        printf("Solution:\nx1=%g\n", x1);
        return 0;
    }
    printf ("No roots!");
    return 0;
}

///////////////////////////// Task 5 //////////////////////////////
// С клавиатуры вводится номер месяца.
// Требуется определить, к какому времени года он относится.

int task5()
{
    printf ("\n******************** TASK_5 SOLUTION ********************\n");
    int n;
    printf("Input mounth number: ");
    scanf("%i", &n);
    rewind(stdin);
    switch (n)
    {
        case 1: case 2: case 12:
            printf("RESULT: Winter");
            break;
        case 3: case 4: case 5:
            printf("RESULT: Spring");
            break;
        case 6: case 7: case 8:
            printf("RESULT: Summer");
            break;
        case 9: case 10: case 11:
            printf("RESULT: Autumn");
            break;
        default:
            printf("Incorrect number\n");
    }
    return 0;
}

///////////////////////////// Task 6 //////////////////////////////
// Ввести возраст человека (от 1 до 150 лет) и вывести его вместе со словом «год», «года» или «лет».

int task6()
{
    printf ("\n******************** TASK_6 SOLUTION ********************\n");
    int n, r;
    printf("Input number of years (from 1 to 150): ");
    scanf("%i", &n);
    rewind(stdin);
    if (n<1 || n>150) // Проверка принадлежности диапазону
    {
        printf("Incorrect number!\n");
        return 0;
    }
    r=n%10;
    if (r==1 && n!=11) // все числа, оканчивающиеся на 1 кроеме 11
    {
        printf("%d год\n", n);
        return 0;
    }
    if ((r==2 || r==3 || r==4) && n!=12 && n!=13 && n!=14) // все числа, сканчивающиеся на 2, 3 и 4, кроме 12, 13, 14
    {
        printf("%d года\n", n);
        return 0;
    }
    printf("%d лет\n", n); // все остальные
    return 0;
}

///////////////////////////// Task 7 //////////////////////////////
// С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1, y1, x2, y2).
// Требуется определить, относятся ли к поля к одному цвету или нет.

int task7()
{
    printf ("\n******************** TASK_7 SOLUTION ********************\n");
    int x1, y1, x2, y2;
    printf("Input first position in format x1;y1: ");
    scanf ("%d;%d", &x1, &y1);
    rewind(stdin);
    if (x1<1 || x1>8 || y1<1 || y1>8)
    {
        printf("Incorrect number!\n");
        return 0;
    }
    printf("Input second position in format x2;y2: ");
    scanf ("%d;%d", &x2, &y2);
    rewind(stdin);
    if (x2<1 || x2>8 || y2<1 || y2>8)
    {
        printf("Incorrect number!\n");
        return 0;
    }
    if ((x1+y1)%2 == (x2+y2)%2) // если сумма х и у клетки четная - один цвет (черный или белый), нечетная - другой
        printf("Positions %d;%d and %d;%d has one color", x1, y1, x2, y2);
    else
        printf("Positions %d;%d and %d;%d has different colors", x1, y1, x2, y2);
    return 0;
}

///////////////////////////// Task 8 //////////////////////////////
// Ввести a и b и вывести квадраты и кубы чисел от a до b.

int task8()
{
    printf ("\n******************** TASK_8 SOLUTION ********************\n");
    int a, b, i;
    printf("Input a and b: "); // целые
    scanf ("%d %d", &a, &b);
    rewind(stdin);
    if (b<a) // неверный диапазон
    {
        printf("Incorrect numbers!\n");
        return 0;
    }
    for (i=a; i<=b;i++)
        printf("%d^2=%d; %d^3=%d\n", i, i*i, i, i*i*i);
    return 0;
}

///////////////////////////// Task 9 //////////////////////////////
// Даны целые положительные числа N и K. Используя только операции сложения и вычитания,
// найти частное от деления нацело N на K, а также остаток от этого деления.

int task9()
{
    printf ("\n******************** TASK_9 SOLUTION ********************\n");
    int N, K, c=0;
    printf("Input N and K: ");
    scanf ("%d %d", &N, &K);
    rewind(stdin);
    if (N<0 || K<0 || N<K) // проверка, что делимое больше делителя (обрабатывать иную ситуцию не стала, хотя можно)
    {
        printf("Incorrect numbers!\n");
        return 0;
    }
    do
    {
        N=N-K; // остаток
        c++; // целая часть от деления
    }     while (N>=K); // пока уменьшаемое не будет меньше вычитаемого
    printf("Quotient = %d, remainder = %d", c, N);
    return 0;
}


///////////////////////////// Task 10 //////////////////////////////
// Дано целое число N > 0. С помощью операций деления нацело и взятия остатка от деления определить,
// имеются ли в записи числа N нечётные цифры.
// Если имеются, то вывести True, если нет – вывести False.

int task10()
{
    printf ("\n******************** TASK_10 SOLUTION ********************\n");
    int N, r;
    printf("Input N: ");
    scanf ("%d", &N);
    rewind(stdin);
    if (N<=0)
    {
        printf("Incorrect number!\n");
        return 0;
    }
    do
    {
        r=(N%10)%2; // проверка четности последнего разряда числа
        N=N/10; // отбразывание последнего разряда числа
        if (r!=0) // если рассматриваемая цифра числа нечетная, печать TRUE и выход из функции
        {
            printf("True");
            return 0;
        }
    }     while (N!=0);
    printf("False"); // если ни одной нечетной цифры нет в числе
    return 0;
}

///////////////////////////// Task 11 //////////////////////////////
// С клавиатуры вводятся числа, пока не будет введён 0.
// Подсчитать среднее арифметическое всех положительных чётных чисел, оканчивающихся на 8.

int task11()
{
    printf ("\n******************** TASK_11 SOLUTION ********************\n");
    int N=-1, c=0, sum=0;
    printf("Input numbers (for stop input 0): ");
    while (N!=0) // ввод чисел в цикле пока не будет введен 0
    {
        scanf ("%d", &N);
        rewind(stdin);
        if ((N>0) && (N%10==8)) // проверка, что введенное число положительное и заканчивается на 8 (четное)
        {
            sum+=N;
            c++;
        }
    }
    if (c==0) //если чисел, удовлетворяющих условию, нет
    {
        printf("0");
        return 0;
    }
    printf("%g\n", float(sum)/float(c)); //расчет среднего арифметического введенных чисел
    return 0;
}

///////////////////////////// Task 12 //////////////////////////////
// Написать функцию нахождения максимального из трёх чисел.

float max3n (float a, float b, float c) // функция нахождения максимума из 3 чисел
{
    if (b>a)
        a=b;
    if (c>a)
        a=c;
    return a;
}

int task12()
{
    printf ("\n******************** TASK_12 SOLUTION ********************\n");
    float n1, n2, n3;
    printf("Input 3 numbers: ");
    scanf ("%f %f %f", &n1, &n2, &n3); // считывание 3 чисел
    printf("max(%g, %g, %g) = %g\n", n1, n2, n3, max3n(n1, n2, n3)); // вызов функции и вывод результата
    return 0;
}

///////////////////////////// Task 13 //////////////////////////////
// * Написать функцию, генерирующую случайное число от 1 до 100:
// a. С использованием стандартной функции rand().
// b. Без использования стандартной функции rand().

int task13()
{
    printf ("\n******************** TASK_13 SOLUTION ********************\n");
    int seed=1;
    printf("Input seed (from 1 and more): "); // с зерном псевдослучайной последовательности
    scanf ("%d", &seed);
    srand(seed);
    printf("RANDOM NUMBER (with usind function rand()): %d\n", rand()%100+1); //генерация числа функцией rand()
    printf("RANDOM NUMBER (with usind function time()): %d\n", int(time(0)%100+1)); // с использованием  time();
    printf("RANDOM NUMBER (with usind own function): %d\n", abs((847885*(seed%9)-467571*(seed/4))%100+1)); // cобственная функция
    return 0;
}

///////////////////////////// Task 14 //////////////////////////////
// * Автоморфные числа. Натуральное число называется автоморфным, если оно равно последним цифрам своего квадрата.
// Например, 25 \ :sup: '2' = 625. Напишите программу, которая получает на вход натуральное число N
// и выводит на экран все автоморфные числа, не превосходящие N.

int task14()
{
    printf ("\n******************** TASK_14 SOLUTION ********************\n");
    long double n, a=259918212890625, b=740081787109376, null=0, temp1=0, temp2=0; //  a и b - максимальные для longdouble автоморфные числа
    int i;
    printf("Input number: ");
    scanf ("%Lf", &n);
    if (n<=null) // проверка на ввод натурального числа
    {
        printf("Incorrect number!\n");
        return 0;
    }
    if (n>=1) // первые два автоморфные числа
        printf("0\n1\n");
    for (i=1;i<16;i++) //используем свойство, что аморфные числа можно получить из a и b путем отсечения старшего разряда
        //много проверок реализовано для того, чтобы числа выводились в порядке возрастания
    {
        if (n>fmodl(a,pow(10,i)) && fmodl(a,pow(10,i))!=temp1 && fmodl(a,pow(10,i))<fmodl(b,pow(10,i)))
        {
            printf("%.0Lf\n%.0Lf\n", temp1=fmodl(a,pow(10,i)),temp2=fmodl(b,pow(10,i)));
        }
        if (n>fmodl(a,pow(10,i)) && fmodl(a,pow(10,i))!=temp1 && fmodl(b,pow(10,i))==temp2)
        {
            printf("%.0Lf\n", temp1=fmodl(a,pow(10,i)));
        }
        if (n>fmodl(b,pow(10,i)) && fmodl(b,pow(10,i))!=temp2 && fmodl(a,pow(10,i))>fmodl(b,pow(10,i)))
        {
            printf("%.0Lf\n%.0Lf\n", temp2=fmodl(b,pow(10,i)),temp1=fmodl(a,pow(10,i)));
        }
    }
    return 0;
}

void menu()
{
    printf ("\n************************* MENU ***************************\n\n");
    printf("Task_1 -  Body mass index calculation\n");
    printf("Task_2 -  Max of 4 numbers finding\n");
    printf("Task_3 -  Value of 2 numbers exchange\n");
    printf("Task_4 -  Quadric equation solution\n");
    printf("Task_5 -  Season definition\n");
    printf("Task_6 -  Age status definition\n");
    printf("Task_7 -  Chess desk color definition\n");
    printf("Task_8 -  Number in 2 and 3 degree\n");
    printf("Task_9 -  Quotieny and remainder of division\n");
    printf("Task_10 - Number of &&& numbers definition\n");
    printf("Task_11 - The arithmetic mean of the positive numbers ended on 8\n");
    printf("Task_12 - Function of finding maximum of 3 numbers\n");
    printf("Task_13 - Random numbers\n");
    printf("Task_14 - Automorphic numbers\n");
    printf ("\n\033[1mInput task number or 0 for Exit: \033[m");

}
