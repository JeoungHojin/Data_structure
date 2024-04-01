#include "calendar.h"
#include <stdio.h>

void printCalendar() {
    int month = 3;
    int days[6][7] = { 0 }; // 최대 6주 x 7일

    int daysInMonth = 31;
    int startingDay = 5; // 2024년 3월 1일은 금요일

    int day = 1;
    for (int i = 0; i < 6; ++i) {
        for (int j = (i == 0 ? startingDay : 0); j < 7 && day <= daysInMonth; ++j) {
            days[i][j] = day++;
        }
    }
    printf("------2024년 3월 달력------\n");
    printf("일  월  화  수  목  금  토\n");
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
