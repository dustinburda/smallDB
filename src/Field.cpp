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

void Field::Serialize(std::ostream& o) {
    o.write(reinterpret_cast<char*>(&type_), sizeof( int));

    o.write(reinterpret_cast<char*>(&length_), sizeof( std::size_t ));

    o.write(reinterpret_cast<char*>( data_ ), length_);
}



void Field::Deserialize(std::istream& i, Field& f) {
    FieldType type;
    i.read(reinterpret_cast<char *>(&type), sizeof (int));

    int length;
    i.read(reinterpret_cast<char *>(&length), sizeof (std::size_t));


}

Field Field::Deserialize(std::istream& i) {
    return Field(0);
}