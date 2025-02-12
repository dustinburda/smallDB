//
// Created by Dustin on 2/8/25.
//

#ifndef SMALLDB_TUPLE_H
#define SMALLDB_TUPLE_H

#include "../include/Field.h"

#include <vector>

class Tuple {
public:
    explicit Tuple(Field f) : tuples_{ std::vector<Field>{f} } {};
    explicit Tuple(std::vector<Field> tuples) : tuples_{tuples} {};

private:
    std::vector<Field> tuples_;
};


#endif //SMALLDB_TUPLE_H
