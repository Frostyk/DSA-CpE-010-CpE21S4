#ifndef SHELL_SORT_H
#define SHELL_SORT_H


void shellSort(int array[], int size) {
    
    for (int interval = size / 2; interval > 0; interval /= 2) {
        for (int i = interval; i < size; i++) {
            int temp = array[i];
            int j = i;
                       while (j >= interval && array[j - interval] > temp) {
                array[j] = array[j - interval];
                j -= interval;
            }
            array[j] = temp;
        }
    }
}

#endif 
