#pragma once
#include <unordered_set>
#include <string>
#include <fstream>
#include <variant>


// This class implements various conversion functions.
// They are used in each other when reducing subtasks.
class Converter {
public:
    explicit Converter(std::ifstream& input, std::ofstream& output);

    void convert(std::ifstream& input, std::ofstream& output);
    void convert_line(const std::string& input_str, std::ofstream& output);
    std::string convert_left_of_as(const std::string& input_str, std::ofstream& output);
    void convert_exp(const std::string& input_str, std::ofstream& output);
    void convert_input(const std::string& input_str, std::ofstream& output);
    void convert_elem(const std::string& input_str, std::ofstream& output);

private:
    size_t _input_len;
    size_t _cur_line = 0;

    bool is_input_val = false;
    std::string v_for_input{};
    std::unordered_set<std::string> _vals{};
    std::unordered_set<std::string> _vars{};

};

