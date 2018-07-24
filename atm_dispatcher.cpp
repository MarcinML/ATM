#include "atm_dispatcher.h"

ATM_Dispatcher::ATM_Dispatcher()
{

}

void ATM_Dispatcher::forwardMessage(const Message& message)
{
     if(firstElement)
     {
         firstElement->handle(message);
     }
}

void ATM_Dispatcher::registerComponent(Component& component)
{
    if(lastElement == nullptr)
    {
        firstElement = component;
        lastElement = component;
        return;
    }
    lastElement->setNext(component);
    lastElement = component;
}

