#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <vector>
#include <sstream>
#include <iostream>

std::string caesar_encryption(std::string s, int shift);

std::string caesar_decryption(std::string s, int shift);

std::string convert_from_ASCII(const std::vector<int> &indices);

std::string convert_to_string(const std::string &input);

std::vector<int> convert_to_ASCII(const std::string &str);

void print_menu();

short get_user_choice();

std::string get_user_input();

int get_shift_value();

#endif