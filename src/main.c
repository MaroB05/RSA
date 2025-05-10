#include "helperfunctions.h"
#include <stdint.h>

// Example usage
int main() {
    // Generate keys
    uint64_t e, d, n;
    gen_keys(&e, &d, &n);
    
    printf("Public key (e, n): (%lu, %lu)\n", e, n);
    printf("Private key (d, n): (%lu, %lu)\n", d, n);
    
    // Simple message encryption/decryption
    uint64_t message = 42;
    printf("\nOriginal message: %lu\n", message);
    
    uint64_t encrypted = encrypt(message, e, n);
    printf("Encrypted message: %lu\n", encrypted);
    
    uint64_t decrypted = decrypt(encrypted, d, n);
    printf("Decrypted message: %lu\n", decrypted);
    
    // String encryption/decryption
    const char* text = "Hello, RSA!";
    printf("\nOriginal text: %s\n", text);
    
    uint64_t* encrypted_text;
    int length;
    encrypt_string(text, e, n, &encrypted_text, &length);
    
    printf("Encrypted text (as numbers): ");
    for (int i = 0; i < length; i++) {
        printf("%lu ", encrypted_text[i]);
    }
    printf("\n");
    
    char* decrypted_text = decrypt_string(encrypted_text, length, d, n);
    printf("Decrypted text: %s\n", decrypted_text);
    
    // Free allocated memory
    free(encrypted_text);
    free(decrypted_text);
    
    return 0;
}
