#include "calendar.h"
#include <stdio.h>

void printCalendar() {
    int month = 3;
    int days[6][7] = { 0 }; // �ִ� 6�� x 7��

    int daysInMonth = 31;
    int startingDay = 5; // 2024�� 3�� 1���� �ݿ���

    int day = 1;
    for (int i = 0; i < 6; ++i) {
        for (int j = (i == 0 ? startingDay : 0); j < 7 && day <= daysInMonth; ++j) {
            days[i][j] = day++;
        }
    }
    printf("------2024�� 3�� �޷�------\n");
    printf("��  ��  ȭ  ��  ��  ��  ��\n");
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (days[i][j] == 0)
                printf("    ");
            else
                printf("%2d  ", days[i][j]);
        }
        printf("\n");
    }
}
