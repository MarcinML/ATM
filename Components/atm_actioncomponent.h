#ifndef ATM_ACTIONCOMPONENT_H
#define ATM_ACTIONCOMPONENT_H
#include "../Message.h"
#include "../Component.h"

class ATM_ActionComponent : public Component
{
public:
    ATM_ActionComponent();
    void handle(const Message& message) override;
};

#endif // ATM_ACTIONCOMPONENT_H
