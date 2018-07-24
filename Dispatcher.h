#ifndef DISPATCHER_H
#define DISPATCHER_H

#include "Message.h"
#include "Component.h"

class Dispatcher
{
public:
    virtual ~Dispatcher() = default;

    virtual void registerComponent(Component& component) = 0; //how about reference instead of shared_ptr?
    virtual void forwardMessage(const Message& message) = 0;           //shared_ptr makes copy of component, in this case we need only one original component
};

#endif //DISPATCHER_H
