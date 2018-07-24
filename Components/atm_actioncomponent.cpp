#include "atm_actioncomponent.h"
#include <iostream>

ATM_ActionComponent::ATM_ActionComponent()
{

}

void ATM_ActionComponent::handle(const Message& message)
{
    if(message.type == MessageId::Withdraw )
    {
        std::cout << "Action Withdraw message: " << message.content << std::endl;
    }
    else if(message.type == MessageId::CancelTransaction)
    {
         std::cout << "Cancel transaction acction message: " << message.content << std::endl;
    }
    else if(message.type == MessageId::AccountBalance)
    {
         std::cout << "Action AccBalance message: " << message.content << std::endl;
    }
    else if ( next != nullptr )
    {
       next->handle(message);
    }
}
