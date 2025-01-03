#ifndef COMEDY_CATEGORY_H
#define COMEDY_CATEGORY_H

#include "Category.h"

//clasa derivata
class ComedyCategory : public Category {
public:
    //constr explicit
    explicit ComedyCategory(const std::string& name);

    ~ComedyCategory() override =default;

    // suprascriere
    [[nodiscard]] std::string GetCategoryName() const override;

};

#endif