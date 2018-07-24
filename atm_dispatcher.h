#ifndef ATM_DISPATCHER_H
#define ATM_DISPATCHER_H
#include "Component.h"
#include "Dispatcher.h"


class ATM_Dispatcher : public Dispatcher
{
public:
    ATM_Dispatcher();
    void registerComponent(Component& component) override;
    void forwardMessage(const Message& message) override;
private:
    Component* firstElement = nullptr;
    Component* lastElement = nullptr;

};

#endif // ATM_DISPATCHER_H
