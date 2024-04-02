#include "3-3.h"

int Max_Min(int arr[10],int maximum,int minimum) {
    int temp;
    for (int i = 0; i < 10;i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
	}
    arr[0] = minimum;
    arr[10] = maximum;
    return maximum;
}