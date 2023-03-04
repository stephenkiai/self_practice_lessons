#include <stdio.h>

int main() {
    int arr[3][5][2];
    int count = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 2; k++) {
                arr[i][j][k] = count;
                count++;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }


        ........................................................................................................
          for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 5; k++)
                {
                    printf("The array element at index [0][0][0] is: %d\n", arr[0][0][0]);
                }
                //return (0);
            }
        }
    }
}