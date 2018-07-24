#ifndef INSUFFICIENTMONEYCOMPONENT_H
#define INSUFFICIENTMONEYCOMPONENT_H
#include "../Message.h"
#include "../Component.h"


class InsufficientMoneyComponent : public Component
{
public:
    InsufficientMoneyComponent();
    void handle(const Message& message) override;
};

#endif // INSUFFICIENTMONEYCOMPONENT_H
