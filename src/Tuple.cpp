//
// Created by Dustin on 2/8/25.
//

#include "../include/Tuple.h"


void Tuple::Serialize(std::ostream& o) {
    for (auto& field : fields_) {
        field.Serialize(o);
    }
}

