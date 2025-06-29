#include "d_array.h"

int main() {
    D_Array* my_array = d_array_new(sizeof(char));
    for (int i = 0; i < 10; i++) {
        char c = (char) '0' + i;
        d_array_append(my_array, &c);
    }



    for (int i = 0; i < my_array->size; i++) {
        printf("%c", *(char*)d_array_get(my_array, i));

    }
    printf("\n");

    d_array_free(my_array);
    return 0;
}
