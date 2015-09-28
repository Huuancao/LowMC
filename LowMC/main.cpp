#include "LowMC.h"
#include <iostream>


//////////////////
//     MAIN     //
//////////////////

int main () {
    LowMC cipher(1);
    block a = 0x5;

    std::cout << "Plaintext:" << std::endl;
    std::cout << a << std::endl;
    a = cipher.encrypt( a );
    std::cout << "Ciphertext:" << std::endl;
    std::cout << a << std::endl;
    a = cipher.decrypt( a );
    std::cout << "Encryption followed by decryption of plaintext:" << std::endl;
    std::cout << a << std::endl;

    return 0;
}
