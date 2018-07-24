#include "insufficientmoneycomponent.h"
#include <iostream>

InsufficientMoneyComponent::InsufficientMoneyComponent()
{

}

void InsufficientMoneyComponent::handle(const Message& message)
{
    if(message.type == MessageId::LackOfFounds )
    {
        std::cout << "Lack of money message: " << message.content << std::endl;
    }
    else if ( next != nullptr )
    {
       next->handle(message);
    }
}
