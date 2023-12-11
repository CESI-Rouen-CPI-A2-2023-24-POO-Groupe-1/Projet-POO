#include "Tax.h"

int Tax::getId()
{
    return id;
}

int Tax::getPercentage()
{
    return percentage;
}

void Tax::setPercentage(int newPercentage)
{
    if (newPercentage >= 0 && newPercentage <= 100)
    {
        percentage = newPercentage;
    }
    else
    {
        System::Console::WriteLine("Erreur : Le pourcentage doit être compris entre 0 et 100.");
    }
}
Tax::Tax(int id, int percentage) {
    this->id = id;
    this->percentage = percentage;
}
Tax::Tax( int percentage) {
    this->percentage = percentage;
}