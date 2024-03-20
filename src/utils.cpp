#include "../include/utils.hpp"

std::string caesar_encryption(std::string s, int shift)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = ((s[i] - 'A') + shift) % 26 + 'A';
        }
        else if (islower(s[i]))
        {
            s[i] = ((s[i] - 'a') + shift) % 26 + 'a';
        }
    }
    return s;
}

std::string caesar_decryption(std::string s, int shift)
{
    for (size_t i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            s[i] = ((s[i] - 'A' - shift + 26) % 26) + 'A';
        }
        else if (islower(s[i]))
        {
            s[i] = ((s[i] - 'a' - shift + 26) % 26) + 'a';
        }
    }
    return s;
}

std::string convert_from_ASCII(const std::vector<int> &indices)
{
    std::string result;
    for (int index : indices)
    {
        result += static_cast<char>(index);
    }
    return result;
}

std::string convert_to_string(const std::string &input)
{
    std::stringstream ss(input);
    std::string result;
    int ascii_value;
    while (ss >> ascii_value)
    {
        result += static_cast<char>(ascii_value); //transforming into characters
    }
    return result;
}

std::vector<int> convert_to_ASCII(const std::string &str)
{
    std::vector<int> indices;
    for (char c : str)
    {
        indices.push_back(static_cast<int>(c));
    }
    return indices;
}

void print_menu() {
    std::cout << "********** MENU **********\n";
    std::cout << "1. Caesar Encryption\n";
    std::cout << "2. Caesar Decryption\n";
    std::cout << "3. ASCII Table Encryption\n";
    std::cout << "4. ASCII Table Decryption\n";
    std::cout << "5. Exit\n";
    std::cout << "**************************\n";
}

short get_user_choice() {
    short user_choice;
    std::cout << "Enter your choice: ";
    std::cin >> user_choice;
    return user_choice;
}

std::string get_user_input() {
    std::string user_input;
    std::cout << "Enter the string: ";
    std::cin.ignore();
    std::getline(std::cin, user_input);
    return user_input;
}

int get_shift_value() {
    int shift_value;
    std::cout << "Enter the shift value: ";
    std::cin >> shift_value;
    return shift_value;
}