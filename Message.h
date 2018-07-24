#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

enum MessageId
{
    CardInsertion,
    CardEjection,
    CardBanned,

    PinVerification,
    IncorrectPin,

    Withdraw,
    CancelTransaction,
    AccountBalance,

    LackOfFounds,
};

struct Message
{
    MessageId type;
    std::string content;
};

#endif //MESSAGE_H
