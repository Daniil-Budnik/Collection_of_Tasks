#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Hello_World(void);
void Task_Find(int Num);

void Task_1(void);
void Task_2(void);
void Task_3(void);
void Task_4(void);
void Task_5(void);
void Task_6(void);
void Task_7(void);
void Task_8(void);

void Task_9(void);
void Task_10(void);
void Task_11(void);
void Task_12(void);
void Task_13(void);
void Task_14(void);
void Task_15(void);
void Task_16(void);

void Task_17(void);
void Task_18(void);
void Task_19(void);
void Task_20(void);
void Task_21(void);
void Task_22(void);
void Task_23(void);
void Task_24(void);

void Task_25(void);
void Task_26(void);
void Task_27(void);
void Task_28(void);
void Task_29(void);
void Task_30(void);
void Task_31(void);
void Task_32(void);

void Task_33(void);
void Task_34(void);
void Task_35(void);
void Task_36(void);
void Task_37(void);
void Task_38(void);
void Task_39(void);
void Task_40(void);

void Task_41(void);
void Task_42(void);
void Task_43(void);
void Task_44(void);
void Task_45(void);
void Task_46(void);
void Task_47(void);
void Task_48(void);

void Task_49(void);
void Task_50(void);
void Task_51(void);
void Task_52(void);
void Task_53(void);
void Task_54(void);
void Task_55(void);
void Task_56(void);

void Task_57(void);
void Task_58(void);
void Task_59(void);
void Task_60(void);
void Task_61(void);
void Task_62(void);
void Task_63(void);
void Task_64(void);

int main()
{
    setlocale(LC_ALL, "Ru");
    Hello_World();printf("\n");
}

void Hello_World(){
    int Num_Task;
    printf("\t<<< Решебник от White_Pirate >>>\n");
    do {
        printf("Введите номер задачи (1 - 64): ");
        scanf("%i", &Num_Task);
        if(Num_Task > 64 || Num_Task < 1){printf("Задача не найдена!!!");}
    } while (Num_Task > 64 || Num_Task < 1);
    Task_Find(Num_Task);
}

void Task_Find(int Num){
    printf("Задача №%i\n",Num);
    if(Num == 1){Task_1();}
    else if(Num == 2){Task_2();}
    else if(Num == 3){Task_3();}
    else if(Num == 4){Task_4();}
    else if(Num == 5){Task_5();}
    else if(Num == 6){Task_6();}
    else if(Num == 7){Task_7();}
    else if(Num == 8){Task_8();}

    else if(Num == 9){Task_9();}
    else if(Num == 10){Task_10();}
    else if(Num == 11){Task_11();}
    else if(Num == 12){Task_12();}
    else if(Num == 13){Task_13();}
    else if(Num == 14){Task_14();}
    else if(Num == 15){Task_15();}
    else if(Num == 16){Task_16();}

    else if(Num == 17){Task_17();}
    else if(Num == 18){Task_18();}
    else if(Num == 19){Task_19();}
    else if(Num == 20){Task_20();}
    else if(Num == 21){Task_21();}
    else if(Num == 22){Task_22();}
    else if(Num == 23){Task_23();}
    else if(Num == 24){Task_24();}

    else if(Num == 25){Task_25();}
    else if(Num == 26){Task_26();}
    else if(Num == 27){Task_27();}
    else if(Num == 28){Task_28();}
    else if(Num == 29){Task_29();}
    else if(Num == 30){Task_30();}
    else if(Num == 31){Task_31();}
    else if(Num == 32){Task_32();}

    else if(Num == 33){Task_33();}
    else if(Num == 34){Task_34();}
    else if(Num == 35){Task_35();}
    else if(Num == 36){Task_36();}
    else if(Num == 37){Task_37();}
    else if(Num == 38){Task_38();}
    else if(Num == 39){Task_39();}
    else if(Num == 40){Task_40();}

    else if(Num == 41){Task_41();}
    else if(Num == 42){Task_42();}
    else if(Num == 43){Task_43();}
    else if(Num == 44){Task_44();}
    else if(Num == 45){Task_45();}
    else if(Num == 46){Task_46();}
    else if(Num == 47){Task_47();}
    else if(Num == 48){Task_48();}

    else if(Num == 49){Task_49();}
    else if(Num == 50){Task_50();}
    else if(Num == 51){Task_51();}
    else if(Num == 52){Task_52();}
    else if(Num == 53){Task_53();}
    else if(Num == 54){Task_54();}
    else if(Num == 55){Task_55();}
    else if(Num == 56){Task_56();}

    else if(Num == 57){Task_57();}
    else if(Num == 58){Task_58();}
    else if(Num == 59){Task_59();}
    else if(Num == 60){Task_60();}
    else if(Num == 61){Task_61();}
    else if(Num == 62){Task_62();}
    else if(Num == 63){Task_63();}
    else if(Num == 64){Task_64();}
}

void Task_1(){
    int n;
    printf("Введите n: ");
    scanf("%i", &n);
    printf("Это число: %i", n * 2);
}

void Task_2(){
    int n;
    printf("Введите n: ");
    scanf("%i", &n);
    printf("Это число: %i", n * 2 + 1);
}

void Task_3(){
    int a = 0, b;
    printf("Введите a: ");
    scanf("%i", &a);
    printf("Введите b: ");
    scanf("%i", &b);
    printf("Кол-во нечётных чисел между %i и %i (включительно) равно: %i",a,b,(b-a+1)/2);
}

void Task_4(){
    float Sec,Min,Clock;
    printf("Введите кол-во секунд: ");
    scanf("%f", &Sec);
    printf("Полных минут: %i\n", (int)Sec/60);
    printf("Полных часов: %i\n", (int)Sec/3600);
    Clock = Sec/3600;
    Sec = Sec - (int)Clock * 3600;
    Min = Sec / 60;
    Sec = Sec - (int)Min*60;
    printf("Итоговое время: %i:%i:%i",(int)Clock,(int)Min,(int)Sec);
}

void Task_5(){
    int num, heigh, x, y;
    printf("Введите номер квартиры: ");
    scanf("%i", &num);
    heigh = 9*4;
    x = (int)(num / heigh)+1;
    y = (int)((num - (x-1)*heigh-1) / 4) + 1;
    printf("Подъезд №%i, этаж №%i ", x , y);
}

void Task_6(){
    int n,t;
    printf("Введите скорость: ");
    scanf("%i", &n);
    printf("Введите время: ");
    scanf("%i", &t);
    printf("Угол поворота равен: %i", n*t-(((n*t)/360)*360));
}

void Task_7(){
    int x,y,n;
    printf("Введите расстояние от вас до фанаря: ");
    scanf("%i", &x);
    printf("Введите расстояние от фаноря до фанаря: ");
    scanf("%i", &y);
    printf("Введите номер столба: ");
    scanf("%i", &n);
    printf("Расстояние от вас до %i фанаря состовляет: %i ",n,x + y * n);
}

void Task_8(){
    int n;
    float g;
    printf("Введите число: ");
    scanf("%i",&n);
    g = n/10;
    n = n - (int)g*10;
    printf("Последняя цифра: %i", n);
}

void Task_9(){
    int n;
    printf("Введите число: ");
    scanf("%i",&n);
    printf("Первая цифра: %i", n/1000);
}

void Task_10(){
    int x,y,z;
    printf("Введите x: ");
    scanf("%i", &x);
    printf("Введите y: ");
    scanf("%i", &y);
    z = x/y;
    printf("Ответ: %i", x - (z*y));
}

void Task_11(){
    int x,y;
    printf("Введите длину бревна: ");
    scanf("%i", &x);
    printf("Введите длину куска: ");
    scanf("%i", &y);
    printf("Кол-во кусков: %i", x/y);
}

void Task_12(){
    int x,y;
    printf("Введите длину бревна: ");
    scanf("%i", &x);
    printf("Введите кол-во разрезов: ");
    scanf("%i", &y);
    printf("Длина кусков: %i", x/y);
}

void Task_13(){
    int x,y;
    double P;
    printf("Введите диаметр кольца: ");
    scanf("%i", &x);
    printf("Введите кол-во разрезов: ");
    scanf("%i", &y);
    P = x*3.14;
    printf("Длина кусков: %f", P/y);
}

void Task_14(){
    int n;
    printf("Введите трёхзначное число:");
    scanf("%i", &n);
    printf("Первая цифра %i\n",n/100);
    printf("Первая цифра %i\n",(n-(n/100)*100)/10);
    printf("Первая цифра %i\n",n - ((n/100)*100) - ((n-(n/100)*100)/10)*10);
}

void  Task_15(){
    double a,b,c,X1,X2,D;
    printf("Введите число a: ");
    scanf("%lf", &a);
    printf("Введите число b: ");
    scanf("%lf", &b);
    printf("Введите число c: ");
    scanf("%lf", &c);
    D = (b*b) - (4 * a * c);
    if(D >= 0){printf("Нет корней");}
    X1 = (-b + sqrt(D) ) / (2*a);
    X2 = (-b + sqrt(D) ) / (2*a);
    printf("Первый корень: %f; Второй корень: %f");
}

void Task_16(void){
    double x,y, S;
    printf("Введите число x: ");
    scanf("%lf", &x);
    printf("Введите число y: ");
    scanf("%lf", &y);
    S = ((((x*x)/(y*y*y))+(1/x))/((x/(y*y))-(1/y)+(1/x)))/((((x-y)*(x-y))+4*x*y)/(1+y*(1/x)));
    printf("Ответ: %f",S);
}

void Task_17(void){
    double a;
    printf("Введите число a: ");
    scanf("%lf", &a);
    printf("Ответ: %lf",		pow(((pow(1+pow(a,-(1/2)),1/6))/pow(pow(a,(1/2))+1,-(1/3)))-
                                    ((pow(pow(a,1/2)-1,1/3))/(pow(1-pow(a,-(-1/3)),-(1/6)))),-2)*
           ((pow(a,1/12)/3)/(pow(a,1/2)+pow(1-a,1/2))));
}

void Task_18(void){
    // Пропустил
}

int signE1(int a){
    if(a > 0){return 1;}
    if(a < 0){return -1;}
    return 0;
}

void Task_19(void){
    int x;
    printf("Введите число x: ");
    scanf("%i",&x);
    printf("%i",signE1(x));
}

int MaxE1(int x, int y){
    if(x > y){ return x;}
    return y;
}

int MinE1(int x, int y){
    if(x > y){ return y;}
    return x;
}

void Task_20(void){
    int x,y,z;
    printf("Введите число x: ");
    scanf("%i",&x);
    printf("Введите число y: ");
    scanf("%i",&y);
    printf("Введите число z: ");
    scanf("%i",&z);
    printf("%i\t%i",MaxE1(x,MinE1(y,z)),MinE1(MinE1(x,y),z));
}

void Task_21(void){
    double a,b,c,X1,X2,D;
    printf("Введите число a: ");
    scanf("%lf", &a);
    printf("Введите число b: ");
    scanf("%lf", &b);
    printf("Введите число c: ");
    scanf("%lf", &c);
    printf("Вычисляем...\n");
    D = (b*b) - (4 * a * c);
    D = sqrt(D);
    if(D > 0){
        X1 = (-b+D)/(2*a);
        X2 = (-b-D)/(2*a);
        printf("Два корня; X1 = %f; X2 = %f",X1,X2);
    }
    else if((int)(D*1000) == 0){
        X1 = (-b)/(2*a);
        printf("Один корень; X = %f;",X1);
    }
    else {
        printf("Корней нет!!!");
    }
    return;
}

int MaxE2(int x, int y, int z){
    if(x > y && x > z){return x;}
    if(y > x && y > z){return y;}
    return z;
}

void Task_22(void){
    int a = 0,b = 0,c = 0, M;
    printf("Введите число a: ");
    scanf("%i", &a);
    printf("Введите число b: ");
    scanf("%i", &b);
    printf("Введите число c: ");
    scanf("%i", &c);
    M = MaxE2(a,b,c);
    if((M*2 - a - b - c) >= 0){printf("Такого треугольника не существует"); return;}
    if((a == b) && (a == c)){printf("Треугольник равносторонний"); return;}
    if((a==b) || (a==c) || (b==c)){printf("Треугольник равнобедренный"); return;}
    if(M*M == a*a+b*b+c*c-M*M){printf("Треугольник прямоугольный"); return;}
    printf("Треугольник разносторонний");
}

void Task_23(void){
    signed int a;
    printf("Введите число a: ");
    scanf("%i", &a);
    if(a >= 5){printf("%i лет",a);return;}
    if(a > 1 && a < 5){printf("%i года", a);return;}
    printf("1 год");
}

void Task_24(void){
    for(int i = 1; i < 11; i++){
        printf("%i * 5 = %i\n", i, i*5);
    }
}

void Task_25(void){
    for(int i = 3; i < 26; i+=2){
        printf("%i\n",i);
    }
}

void Task_26(void){
    // Чо?
}

void Task_27(void){
    int a;
    double Coef, Arg;
    Arg = 0;
    printf("Введите число a: ");
    scanf("%i", &a);
    Coef = (3.14*2) / a;
    for(int i = 0; i <= a; i++){
        printf("%f\n", Arg);
        Arg+=Coef;
    }
}

void Task_28(void){
    int a = 0;
    int d = 0;
    printf("Введите число a: ");
    scanf("%i", &a);
    for(int i = 1; i <= a; i++){
        d+=i*i;
    }
    printf("Сумма квадратов: %i",d);
}

void Task_29(void){
    int a,s;
    printf("Введите число a: ");
    scanf("%i", &a);
    for(int i = 1; i <= a; i++){
        s = 0;
        for(int x = 1; x <= i; x++){
            s+=x;
        }
        printf("%i; ",s);
    }
}

int Fuctor(int a){
    int s = 1;
    if(a <= 0){return 0;}
    if(a == 1){return 1;}
    for(int i = 2; i <= a; i++){s*=i;}
    return s;
}

void Task_30(void){
    int a;
    printf("Введите число a: ");
    scanf("%i", &a);
    printf("Факториал: %i",Fuctor(a));
}

int StepUp(int x, int n){
    int s = 1;
    if(n  <  0){return 0;}
    if(n == 0){return 1;}
    for(int i = 0; i < n; i++){s*=x;}
    return s;
}

void Task_31(void){
    int x,n;
    printf("Введите число x: ");
    scanf("%i", &x);
    printf("Введите число n: ");
    scanf("%i", &n);
    printf("Ответ: %i", StepUp(x,n));
}

void Task_32(void){
    int x,s;
    printf("Введите число x: ");
    scanf("%i", &x);
    s = 1;
    for(int i = 2; i <= 10; i++){
        s+=StepUp(x,i);
    }
    printf("Ответ: %i", s);
}

void Task_33(void){
    int s = 1;
    int x;
    int f;
    printf("Введите число x: ");
    scanf("%i", &x);
    printf("Введите число i: ");
    scanf("%i", &f);
    for(int i = 2; i <= f; i++){
        s+= (StepUp(x,i))/(Fuctor(i));
    }
    printf("Ответ: %i", s);
}

void Task_34(void){

}

void Task_35(void){
    int A[5], B[5], C[5];
    for(int i = 0; i < 5; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
        B[i] = i;
        C[i] = rand() % 10;
    }
    for(int x = 0; x < 3; x++){
        for(int i = 0; i < 5; i ++){
            if(x==0){printf("%i; ",A[i]);}
            if(x==1){printf("%i; ",B[i]);}
            if(x==2){printf("%i; ",C[i]);}
        }
        printf("\n");
    }
}

void Task_36(void){
    int x;
    char Triger = 0;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    for(int i = 0; i < x; i++){
        if((A[i] - ((A[i]/2)*2)) != 0 ){ Triger = 1;}
    }
    if(Triger == 1){printf("В массиве есть нечётные числа");return;}
    printf("В массиве только чётные числа");
}

void Task_37(void){
    int x;
    char Triger = 0;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    for(int i = 0; i < x-1; i++){
        if(A[i] > A[i+1]){ Triger = 1;}
    }
    if(Triger == 1){printf("Массив не упорядочен");return;}
    printf("Массив упорядочен");
}

void Task_38(void){
    int x;
    int Max = -999999;
    int Min =  999999;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    for(int i = 0; i < x-1; i++){
        if(Max < A[i]){Max = A[i];}
        if(Min > A[i]){Min = A[i];}
    }
    printf("Максимум: %i; Минимум: %i",Max,Min);
}

void Task_39(void){
    int x, Buble;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    for(int Y = 0; Y < x; Y++){
        for(int X = 0; X < x; X++){
            if(A[Y] > A[X] && X>Y){
                Buble = A[Y];
                A[Y] = A[X];
                A[X] = Buble;
            }
        }
    }
    for(int i = 0; i < x; i++){
        printf("%i; ",A[i]);
    }
}

void Task_40(void){
    int x, Buble;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    Buble = A[x-1];
    A[x-1] = A[0];
    A[0] = Buble;
    for(int i = 0; i < x; i++){
        printf("%i; ",A[i]);
    }
}

void Task_41(void){
    int x;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    int a,b;
    printf("Введите число a: ");
    scanf("%i", &a);
    printf("Введите число b: ");
    scanf("%i", &b);
    if(a < 0 || b < 0 || a >= x || b >= x){printf("Ошибка ввода..."); return;}
    if(a > b){printf("А не может быть больше Б..."); return;}
    for(int i = a; i <= b; i++){
        A[i] = 0;
    }
    for(int i = 0; i < x; i++){
        printf("%i; ",A[i]);
    }
}

void Task_42(void){
    int x;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    for(int i = x-1; i >= 0; i--){
        printf("%i; ",A[i]);
    }
}

void Task_43(void){
    int x;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    int N;
    printf("Введите число n: ");
    scanf("%i", &N);
    for(int i = 0; i < x; i++){
        if(A[i] < N){A[i] = N;}
    }
    for(int i = 0; i < x; i++){
        printf("%i; ",A[i]);
    }
}

void Task_44(void){
    int x, Buble;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x], B[x];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    B[0] = A[x-1];
    for(int i = 1; i < x; i++){
        B[i] = A[i-1];
    }

    for(int i = 0; i < x; i++){
        printf("%i; ",B[i]);
    }
}

void Task_45(void){
    int x, Buble;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    for(int i = 0; i < x-1; i++){
        if(i/2 == 0){
            Buble = A[i];
            A[i] = A[i+1];
            A[i+1] = Buble;
        }
    }
    for(int i = 0; i < x; i++){
        printf("%i; ",A[i]);
    }
}

void Task_46(void){
    int x;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x+1];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    int S,N;
    printf("Введите число S: ");
    scanf("%i", &S);
    printf("Введите число N: ");
    scanf("%i", &N);
    for(int i = x+1; i > N; i--){
        A[i]=A[i-1];
    }
    A[N]=S;
    for(int i = 0; i < x; i++){
        printf("%i; ",A[i]);
    }
}

void Task_47(void){
    int x, SRED, OTK, DISP;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x+1];
    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    SRED = 1;
    for(int i = 0; i < x; i++){
        SRED += A[i];
    }
    SRED = SRED / x;
    OTK = 1;
    for(int i = 0; i < x; i++){
        OTK += A[i]-SRED;
    }
    OTK = OTK / x;
    DISP = OTK*OTK;
    printf("Среднее: %i; Отклонение: %i; Дисперсия: %i;", SRED, OTK, DISP);
}

void Task_48(void){
    int x, SRED, OTK, DISP;
    printf("Введите число x: ");
    scanf("%i", &x);
    int A[x+1];

    for(int i = 0; i < x; i++){
        printf("Введите число %i в массив А: ", i+1);
        scanf("%i", &A[i]);
    }
    SRED = 1;

    for(int i = 0; i < x; i++){
        SRED += A[i];
        printf("Отладка 811 строки: SRED = %i",SRED);
    }
    SRED = SRED / x;
    OTK = 1;

    for(int i = 0; i < x; i++){
        OTK += A[i]-SRED;
    }
    OTK = OTK / x;
    DISP = OTK*OTK;
    printf("Среднее: %i; Отклонение: %i; Дисперсия: %i;", SRED, OTK, DISP);
}

// Обнуление n - го бита x
unsigned char Bit_Null(unsigned char x, unsigned char n){ x &= ~(1 << n); return x;}

// Установка n - го бита x
unsigned char Bit_One(unsigned char x, unsigned char n){x |= (1 << n); return x;}

// Вывод n - го бита x
unsigned char Bit_Info(unsigned char x, unsigned char n){return (x >> n) & 1u;}

void Task_49(void){
    unsigned char x, n;
    unsigned int X , N;
    printf("Введите число X: "); scanf("%u",&X);
    printf("Введите число N: "); scanf("%u",&N);
    x = (unsigned char)X; n = (unsigned char)N;
    printf("Ответ: %u", Bit_Null(x,n));
}

void Task_50(void){
    unsigned char x, n;
    unsigned int X , N;
    printf("Введите число X: "); scanf("%u",&X);
    printf("Введите число N: "); scanf("%u",&N);
    x = (unsigned char)X; n = (unsigned char)N;
    printf("Ответ: %u", Bit_Info(x,n));
}

void Task_51(void){
    unsigned int x;
    unsigned char X;
    printf("Введите число: ");
    scanf("%u",&x);
    X = (unsigned char)x;
    for(int i = 7; i >= 0; i--){
        printf("%i",(int)Bit_Info(X,(unsigned char)i));
    }
    printf("'b'");
}

void Bit_Triger(unsigned char x, unsigned char n, unsigned char Command){
    if(Command == 1){printf("%i",(int)Bit_Null(x,n));}
    if(Command == 2){printf("%i",(int)Bit_One(x,n));}
    if(Command == 3){printf("%i",(int)Bit_Info(x,n));}
}

void Task_52(void){
    unsigned int x,n,c;
    unsigned char X,N,C;
    printf("Введите число x: "); scanf("%u",&x);
    printf("Введите число n: "); scanf("%u",&n);
    printf("Введите команду (1 - Сброс бита; 2 - Установка бита; 3 - Состояние бита;): "); scanf("%u",&c);
    X = (unsigned char)x; N = (unsigned char)n; C = (unsigned char)c;
    Bit_Triger(X,N,C); // X - число, N - номер бита, F - значение (если требуется), С - номер команды
}

void Task_53(void){

}

void Task_54(void){

}

void Task_55(void){

}

void Task_56(void){

}

void Task_57(void){

}

void Task_58(void){
    FILE *F = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/58.txt","r");
    int S = fgetc(F);
    int Mass[50]; Mass[0] = 0;
    int Num = 0;
    char Tr = 1;

    while (S!=EOF) {
        if(S >= 48 && S <= 58){ Mass[Num] = Mass[Num]*10 + S - 48;}
        if(S == 45){Tr = 0;}
        if(S == 10){Mass[Num] = Mass[Num] * ( (-1) + Tr*2 ); Num++; Mass[Num] = 0; Tr = 1; }
        S = fgetc(F);
    }

    for(int i = 0; i <= Num; i++){
        printf("%i;\t%i;\n",Mass[i],Mass[i]*2);
    }

    fclose(F);
}

void Task_59(void){
    FILE *F = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/59.txt","r");
    int S = fgetc(F);
    int Mass[50]; Mass[0] = 0;
    int Num = 0;
    char Tr = 1;
    char Fg = 0;
    while (S!=EOF) {
        if(S == 45){Tr = 0;Fg = 1;}
        else if(S >= 48 && S <= 58){ Mass[Num] = Mass[Num]*10 + S - 48; Fg = 1;}
        else if(Fg == 1){Mass[Num] = Mass[Num] * ( (-1) + Tr*2 ); Num++; Mass[Num] = 0; Tr = 1; Fg = 0;}
        S = fgetc(F);
    }

    for(int i = 0; i <= Num; i++){
        if(Mass[i] >= -100 && Mass[i] <= 100){
            printf("%i;\n",Mass[i]);
        }
    }

    fclose(F);
}

void Task_60(void){
    FILE *F = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/60.txt","r");
    int S = fgetc(F);
    int Mass[2]; Mass[0] = 0;
    int Num = 0;
    char Tr = 1;
    char Fg = 0;
    while (S!=EOF && Num != 2) {
        if(S == 45){Tr = 0;Fg = 1;}
        else if(S >= 48 && S <= 58){ Mass[Num] = Mass[Num]*10 + S - 48; Fg = 1;}
        else if(Fg == 1){Mass[Num] = Mass[Num] * ( (-1) + Tr*2 ); Num++; Mass[Num] = 0; Tr = 1; Fg = 0;}
        S = fgetc(F);
    }

    fclose(F);


    int Meand[Mass[1]];
    int G = Mass[0] / 2;
    int Tt = 0;

    for(int i = 0; i < Mass[1]; i++){
        if(Tt < G){
            Meand[i] = 0;
        }else{
            Meand[i] = 1;
        }
        Tt++;
        if(Tt == Mass[0]){Tt = 0;}
    }

    FILE *Fw = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/60W.txt","w+");

    for(int i = 0; i < Mass[1]; i++){
        fprintf(Fw,"%i\n",Meand[i]);
    }

    fclose(Fw);


}

void Task_61(void){
    FILE *Fw = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/Signal.txt","w+");
    int M;
    int Per2 = 10/2;
    int Tt = 0;
    for(int i = 0; i < 20; i++){
        if(Tt < Per2){
            M = 1;
        }else{
            M = 5;
        }
        Tt++;
        if(Tt == Per2*2){Tt = 0;}
        fprintf(Fw,"%i;\t%i;\n",i,M);
    }
    fclose(Fw);
}

void Task_62(void){


    FILE *F = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/Signal.txt","r");

    int Mass1[99]; int Mass2[99]; char TM = 0; Mass1[0] = 0; Mass2[0] = 0;
    int S = fgetc(F);
    char Tr = 1;
    char Fg = 0;
    int Num1 = 0;
    int Num2 = 0;

    while (S != EOF) {

        if(TM == 0){
            if(S == 45){Tr = 0;Fg = 1;}
            else if(S >= 48 && S <= 58){ Mass1[Num1] = Mass1[Num1]*10 + S - 48; Fg = 1;}
            else if(Fg == 1){Mass1[Num1] = Mass1[Num1] * ( (-1) + Tr*2 ); Num1++; Mass1[Num1] = 0; Tr = 1; Fg = 0;TM = 1;}
        }else{
            if(S == 45){Tr = 0;Fg = 1;}
            else if(S >= 48 && S <= 58){ Mass2[Num2] = Mass2[Num2]*10 + S - 48; Fg = 1;}
            else if(Fg == 1){Mass2[Num2] = Mass2[Num2] * ( (-1) + Tr*2 ); Num2++; Mass2[Num2] = 0; Tr = 1; Fg = 0;TM = 0;}
        }

        S = fgetc(F);
    }


    FILE *Fw = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/Signal2.txt","w+");

    for(int i = 0; i < 20; i++){
        fprintf(Fw,"%i;\t%i;\n",Mass1[i]-1,Mass2[i]*2);
    }

    fclose(F);
    fclose(Fw);

}

void Task_63(void){

    //FILE *F = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/Signal.txt","r");
    FILE *F = fopen("D:/Signal.txt","r");


    int Mass1[99]; int Mass2[99]; char TM = 0; Mass1[0] = 0; Mass2[0] = 0;
    int S = fgetc(F);
    char Tr = 1;
    char Fg = 0;
    int Num1 = 0;
    int Num2 = 0;

    while (S != EOF) {

        if(TM == 0){
            if(S == 45){Tr = 0;Fg = 1;}
            else if(S >= 48 && S <= 58){ Mass1[Num1] = Mass1[Num1]*10 + S - 48; Fg = 1;}
            else if(Fg == 1){Mass1[Num1] = Mass1[Num1] * ( (-1) + Tr*2 ); Num1++; Mass1[Num1] = 0; Tr = 1; Fg = 0;TM = 1;}
        }else{
            if(S == 45){Tr = 0;Fg = 1;}
            else if(S >= 48 && S <= 58){ Mass2[Num2] = Mass2[Num2]*10 + S - 48; Fg = 1;}
            else if(Fg == 1){Mass2[Num2] = Mass2[Num2] * ( (-1) + Tr*2 ); Num2++; Mass2[Num2] = 0; Tr = 1; Fg = 0;TM = 0;}
        }

        S = fgetc(F);
    }

    //FILE *Fw = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/Signal.dat","w+");
    FILE *Fw = fopen("D:/Signal.dat","w+");

    char B1;
    for(int i = 0; i < 20; i++){

        B1 = (char)(Mass1[i] - (Mass1[i]/256)*256);
        fprintf(Fw,"%c", B1);
        fprintf(Fw,"%c",Mass1[i] - B1);

        B1 = (char)(Mass2[i] - (Mass2[i]/256)*256);
        fprintf(Fw,"%c",B1);
        fprintf(Fw,"%c",Mass2[i] - B1);
    }

    fclose(F);
    fclose(Fw);

}

void Task_64(void){
    //FILE *F = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/Signal.dat","r");
    //FILE *Fw = fopen("/media/saigen/Локальный диск/Project Files/C++/C-TEST/64.txt","w+");

    FILE *F = fopen("D:/Signal.dat","r");
    FILE *Fw = fopen("D:/64.txt","w+");


    int S = fgetc(F);
    int Num;
    while (S != EOF) {
        Num = S; S = fgetc(F);
        Num+= S*256; S = fgetc(F);
        fprintf(Fw,"%i\t", Num);

        Num = S;  S = fgetc(F);
        Num+= S*256; S = fgetc(F);
        fprintf(Fw,"%i\n", Num);
    }

    fclose(F);
    fclose(Fw);

}
