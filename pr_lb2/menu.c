#include <stdio.h>
#include "index_first_negative.h"
#include "index_last_negative.h"
#include "multi_between_negative.h"
#include "multi_before_and_after_negative.h"

#define MAX_SIZE 20

int input_array(int *array, int array_size);
void result(int num_solution, int *array, int array_size);

int main() {
    int array[MAX_SIZE];
    int array_size = 0;
    int num_solution;

    scanf("%d", &num_solution); 
    input_array(array, array_size);
    result(num_solution,array, array_size);
    return 0;
}

int input_array(int *array, int array_size){
    while (getchar() != '\n') {
        scanf("%d", &array[array_size]);
        ++array_size;
    }

    return *array;
}

void result(int num_solution, int *array, int array_size){
    switch (num_solution) {
    case 0:
        printf("%d\n", index_first_negative(array, array_size));
        break;
    case 1:
        printf("%d\n", index_last_negative(array, array_size));
        break;
    case 2:
        printf("%d\n", multi_between_negative(array, array_size));
        break;
    case 3:
        printf("%d\n", multi_before_and_after_negative(array, array_size));
        break;
    default:
        printf("%s\n", "Данные некорректны");
        break;
    }
}
