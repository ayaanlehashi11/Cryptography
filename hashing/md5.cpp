#include <openssl/md5.h>
#include <openssl/evp.h>
#include <fstream>
#include <iostream>
std::string HashFileMD5(const std::string& filename) {
    std::ifstream file(filename, std::ios::binary);
    if (!file) {
        throw std::runtime_error("Failed to open file: " + filename);
    }
    EVP_MD_CTX* md5Context = EVP_MD_CTX_new();
    EVP_MD_CTX_init(md5Context);
    EVP_DigestInit_ex(md5Context, EVP_md5(), nullptr);
    const size_t bufferSize = 4096;
    char buffer[bufferSize];
    while (!file.eof()) {
        file.read(buffer, bufferSize);
        EVP_DigestUpdate(md5Context, buffer, file.gcount());
    }
    std::array<uint8_t, 16> result;
    EVP_DigestFinal_ex(md5Context, result.data(), nullptr);
    file.close();
    EVP_MD_CTX_free(md5Context);
    return convertToHex(result);
}


int main(int argc , char ** argv)
{
  
}
