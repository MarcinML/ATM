#include "pinverificationcomponent.h"

PinVerificationComponent::PinVerificationComponent()
{

}
void PinVerificationComponent::handle(const Message& message)
{
    if(message.type == MessageId::PinVerification )
    {
        std::cout << "Pin Verification message: " << message.content << std::endl;
    }
    else if(message.type == MessageId::IncorrectPin)
    {
         std::cout << "Incorrect pin message: " << message.content << std::endl;
    }
    else if ( next != nullptr )
    {
       next->handle(message);
    }
}
