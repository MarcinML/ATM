#include "cardcomponent.h"
#include <iostream>

CardComponent::CardComponent()
{

}

void CardComponent::handle(const Message& message)
{
    if(message.type == MessageId::CardInsertion )
    {
        std::cout << "Card insertion message: " << message.content << std::endl;
    }
    else if(message.type == MessageId::CardEjection)
    {
         std::cout << "Card ejection message: " << message.content << std::endl;
    }
    else if(message.type == MessageId::CardBanned)
    {
         std::cout << "Card banned message: " << message.content << std::endl;
    }
    else if ( next != nullptr )
    {
       next->handle(message);
    }
}
