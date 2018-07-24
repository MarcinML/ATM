#ifndef PINVERIFICATIONCOMPONENT_H
#define PINVERIFICATIONCOMPONENT_H
#include "../Message.h"
#include "../Component.h"


class PinVerificationComponent : public Component
{
public:
    PinVerificationComponent();
    void handle(const Message& message) override;
};

#endif // PINVERIFICATIONCOMPONENT_H
