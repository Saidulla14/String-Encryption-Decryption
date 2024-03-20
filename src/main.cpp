#include <iostream>
#include "../include/utils.hpp"

int main()
{
    short user_choice = 0;
    std::string text_to_encrypt = "";
    do
    {
        print_menu();
        user_choice = get_user_choice();
        std::string decrypted_text = "";
        int encryption_shift = 0, decryption_shift = 0;
        std::vector<int> asciiIndices;
        switch (user_choice)
        {
        case 1:
            text_to_encrypt = get_user_input();
            encryption_shift = get_shift_value();
            std::cout << "Encrypted text: " << caesar_encryption(text_to_encrypt, encryption_shift) << std::endl;
            break;
        case 2:
            text_to_encrypt = get_user_input();
            decryption_shift = get_shift_value();
            std::cout << "Decrypted text: " << caesar_decryption(text_to_encrypt, decryption_shift) << std::endl;
            break;
        case 3:
            text_to_encrypt = get_user_input();
            asciiIndices = convert_to_ASCII(text_to_encrypt);
            std::cout << "ASCII Indices of characters in \"" << text_to_encrypt << "\": ";
            for (int index : asciiIndices)
            {
                std::cout << index << " ";
            }
            std::cout << std::endl;
            break;
        case 4:
            decrypted_text = convert_to_string(text_to_encrypt);
            std::cout << "Decrypted text: " << decrypted_text << std::endl;
            break;
        case 5:
            std::cout << "Exiting the program..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
        }
    } while (user_choice != 5);
    return 0;
}
