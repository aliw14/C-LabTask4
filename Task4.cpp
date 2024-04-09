#include <iostream>
#include <cstdlib>
#include <cstdio> 

using namespace std;

int main() {
    char var[] = "100";
    int n[12];
    int i;

    for (i = 0; i < 12; i++) {
        scanf("%d", &n[i]);
    }

    printf("Elements of array n: ");
    for (i = 0; i < 12; i++) {
        printf("%d ", n[i]);
    }

    n[5] = atoi(var);

    printf("\nArray after changing the 6th element to 100: ");
    for (int i = 0; i < 12; ++i) {
        printf("%d ", n[i]);
    }

    return 0;
}

