#include <stdio.h>
#include <locale.h>
#include <math.h>

float square(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
void name(int a) {
    if (a == 3) {
        printf("Треугольник\n");
    }
    else if (a == 4) {
        printf("Четырехугольник\n");
    }
    else if (a == 5) {
        printf("Пятиугольник\n");
    }
    else if (a == 5) {
        printf("Шестиугольник\n");
    }
    else {
        printf("Неизвестно\n");
    }
}
void draw(int R, char symbol) {
    for (int i = 0; i <= R; i++) {
        for (int j = 0; j <= 2 * R; j++) {
            if (j >= R - i && j <= R + i) {
                printf("%c", symbol);
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    setlocale(LC_ALL, "RUS");
    int choice;
    printf("Выберите операцию:\n");
    printf("1. Рассчитать площадь\n");
    printf("2. Вывести название фигуры\n");
    printf("3. Нарисовать фигуру\n");
    scanf_s("%d", &choice);

    if (choice == 1) {
        float a, b, c;
        printf("Введите стороны треугольника: ");
        scanf_s("%f %f %f", &a, &b, &c);
        printf("Площадь треугольника: %.2f\n", square(a, b, c));
    }
    else if (choice == 2) {
        int sides;
        printf("Введите количество сторон фигуры: ");
        scanf_s("%d", &sides);
        name(sides);
    }
    else if (choice == 3) {
        int R;
        char symbol;
        printf("Введите символ для заполнения треугольника: ");
        scanf_s(" %c", &symbol, 1);
        printf("Введите R: ");
        scanf_s("%d", &R);
        draw(R, symbol);
    }

}