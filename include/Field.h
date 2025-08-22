//
// Created by Dustin on 2/11/25.
//

#ifndef SMALLDB_FIELD_H
#define SMALLDB_FIELD_H

#include <ostream>
#include <istream>
#include <string>


class Field {
public:
    Field() = delete;

    explicit Field(int data);
    explicit Field(float data);
    explicit Field(std::string data);
    explicit Field(bool data);

    void Serialize(std::ostream& o);

    void Deserialize(std::istream& i, Field& f);
    Field Deserialize(std::istream& i);

private:
    enum class FieldType {
        Int,
        Float,
        String,
        Bool
    };

    FieldType type_;
    std::size_t length_;
    char* data_;
};


#endif //SMALLDB_FIELD_H
