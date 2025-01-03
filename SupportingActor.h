#ifndef SUPPORTING_ACTOR_H
#define SUPPORTING_ACTOR_H

#include "Actor.h"

//claa derivata

class SupportingActor : public Actor {
public:
    // accepta nume si l scrie
    [[maybe_unused]] explicit SupportingActor(const std::string& name);
    
    ~SupportingActor() override =default;

    [[nodiscard]] std::string GetMainRole() const override;

    [[nodiscard]] std::string GetRoleType() const override;
};

#endif
