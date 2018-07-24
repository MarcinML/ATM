#ifndef CARDCOMPONENT_H
#define CARDCOMPONENT_H
#include "../Message.h"
#include "../Component.h"


class CardComponent : public Component
{
public:
    CardComponent();
    void handle(const Message& message) override;
};

#endif // CARDCOMPONENT_H
