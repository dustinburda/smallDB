//
// Created by Dustin on 2/11/25.
//

#include "../include/Field.h"


Field::Field(int data)
    : type_{FieldType::Int}, length_{ sizeof(int) } {
    std::memcpy(data_, &data, sizeof(int) );
}

Field::Field(float data)
        : type_{FieldType::Float}, length_{ sizeof(float) } {
    std::memcpy(data_, &data, sizeof(float) );
}

Field::Field(std::string data)
        : type_{FieldType::String}, length_{ sizeof(char) * data.length() } {
    std::memcpy(data_, data.data(), length_);
}

Field::Field(bool data)
        : type_{FieldType::Bool}, length_{ sizeof(bool) } {
    std::memcpy(data_, &data, sizeof(bool) );
}