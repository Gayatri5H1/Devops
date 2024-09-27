#include <stdio.h>
#include <stdlib.h>

int main() {
    int M[2][2], i, j, start, Q[20], f = -1, r = -1, v[2] = {0};

    printf("Enter the elements into the array:\n");
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            scanf("%d", &M[i][j]);

    printf("Enter the starting index: ");
    scanf("%d", &start);

    f = r = 0;
    Q[r] = start;
    v[start] = 1;

    printf("BFS Traversal starting from vertex %d:\n", start);

    while (f <= r) {
        i = Q[f];
        printf("%5d", i);

        for (j = 0; j < 2; j++) {
            if (M[i][j] == 1 && v[j] == 0) {
                r++;
                Q[r] = j;
                v[j] = 1;
            }
        }

        f++;
    }

    return 0;
}
