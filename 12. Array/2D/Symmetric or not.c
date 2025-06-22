#include <stdio.h>

int main() {
    int n = 3, mat[3][3], sym = 1;

    // Input matrix
    printf("Enter 3x3 matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    // Checking symmetry (only upper triangle)
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Skip diagonal and below
            if (mat[i][j] != mat[j][i]) {
                sym = 0; // Mark as not symmetric
                break;
            }
        }
        if (sym == 0) break;
    }

    // Output result
    printf(sym ? "Symmetric\n" : "Not Symmetric\n");

    return 0;
}

