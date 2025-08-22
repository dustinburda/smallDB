//
// Created by Dustin on 2/8/25.
//

#ifndef SMALLDB_TUPLE_H
#define SMALLDB_TUPLE_H

#include "../include/Field.h"

#include <ostream>
#include <vector>

class Tuple {
public:
    explicit Tuple(Field f) : fields_{ std::vector<Field>{f} } {};
    explicit Tuple(std::vector<Field> fields) : fields_{fields} {};

    void Serialize(std::ostream& o);


private:
    std::vector<Field> fields_;
};


#endif //SMALLDB_TUPLE_H
