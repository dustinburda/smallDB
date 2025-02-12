//
// Created by Dustin on 2/11/25.
//

#ifndef SMALLDB_FIELD_H
#define SMALLDB_FIELD_H

#include <string>
#include <variant>

enum class FieldType {
    Int,
    String
};

class Field {
public:
    explicit Field(std::string s) : value_(std::move(s)), type_{FieldType::String} {}
    explicit Field(std::int64_t num) : value_(num), type_{FieldType::Int} {}
private:
    std::variant<std::int64_t, std::string> value_;
    FieldType type_;
};


#endif //SMALLDB_FIELD_H
