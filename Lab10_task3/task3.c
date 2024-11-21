#include <stdio.h>
#include <locale.h>
#include <math.h>

float square(float a, float b, float c) {
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
void name(int a) {
    if (a == 3) {
        printf("�����������\n");
    }
    else if (a == 4) {
        printf("���������������\n");
    }
    else if (a == 5) {
        printf("������������\n");
    }
    else if (a == 5) {
        printf("�������������\n");
    }
    else {
        printf("����������\n");
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
    printf("�������� ��������:\n");
    printf("1. ���������� �������\n");
    printf("2. ������� �������� ������\n");
    printf("3. ���������� ������\n");
    scanf_s("%d", &choice);

    if (choice == 1) {
        float a, b, c;
        printf("������� ������� ������������: ");
        scanf_s("%f %f %f", &a, &b, &c);
        printf("������� ������������: %.2f\n", square(a, b, c));
    }
    else if (choice == 2) {
        int sides;
        printf("������� ���������� ������ ������: ");
        scanf_s("%d", &sides);
        name(sides);
    }
    else if (choice == 3) {
        int R;
        char symbol;
        printf("������� ������ ��� ���������� ������������: ");
        scanf_s(" %c", &symbol, 1);
        printf("������� R: ");
        scanf_s("%d", &R);
        draw(R, symbol);
    }

}