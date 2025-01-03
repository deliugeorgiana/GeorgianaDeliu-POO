#ifndef LEAD_ACTOR_H
#define LEAD_ACTOR_H

#include "Actor.h"

// clasa derivata
class LeadActor : public Actor {
public:
    // constr
    [[maybe_unused]] explicit LeadActor([[maybe_unused]] std::string name);

    ~LeadActor() override =default;

    [[nodiscard]] std::string GetMainRole() const override;

    [[nodiscard]] std::string GetRoleType() const override;
};

#endif
