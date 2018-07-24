
#include <iostream>

#include "atm_dispatcher.h"

#include "Message.h"

#include "Components/atm_actioncomponent.h"

#include "Components/cardcomponent.h"

#include "Components/insufficientmoneycomponent.h"

#include "Components/pinverificationcomponent.h"


int main()

{

    ATM_Dispatcher atm;


    ATM_ActionComponent actionComponent;

    CardComponent cardComponent;

    InsufficientMoneyComponent insufficientMoneyComponent;

    PinVerificationComponent PinVerificationComponent;


    atm.registerComponent(actionComponent);

    atm.registerComponent(cardComponent);

    atm.registerComponent(insufficientMoneyComponent);

    atm.registerComponent(PinVerificationComponent);


    for (int message_id = 0; message_id < 10; message_id++) {

        Message message;

        message.type = static_cast<MessageId>(message_id);

        message.content = "Test message";


        atm.forwardMessage(message);

    }


    return 0;

}
