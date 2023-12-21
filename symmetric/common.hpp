#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <openssl/evp.h>

int aes_init(unsigned char *key_data, int key_data_len, 
             unsigned char *salt, 
             EVP_CIPHER_CTX *e_ctx, 
             EVP_CIPHER_CTX *d_ctx);

std::vector<unsigned char> aes_128_gcm_encrypt(std::string plaintext, std::string key);

std::string aes_128_gcm_decrypt(std::vector<unsigned char> ciphertext, std::string key);








