#include <stdio.h>
#include <string.h>

int main() {
    char sen[100];

    printf("Enter anything here: ");
    fgets(sen, sizeof(sen), stdin);

    for(int i = 0; i < strlen(sen); i++ ) {
        for(int j = 0; j < i; j++) {
            printf("%c ", sen[j]);
        }
        printf("\n");
    }
}