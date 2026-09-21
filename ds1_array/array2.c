#include <stdio.h>

int main() {
    int n;
    
    printf("Jumlah deret: ");
    scanf("%d", &n);
    
    // Validasi input minimal 1
    if(n <= 0) {
        printf("Masukkan bilangan positif!\n");
        return 1;
    }
    
    int fib[n]; // VLA (Variable Length Array) sesuai input user
    
    // Pembuatan deret Fibonacci
    for(int i = 0; i < n; i++) {
        if(i == 0)      fib[i] = 0;
        else if(i == 1) fib[i] = 1;
        else            fib[i] = fib[i-1] + fib[i-2]; // Rumus utama
        
        printf("%d%s", fib[i], (i < n-1) ? ", " : "\n");
    }
    
    return 0;
}