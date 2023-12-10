#pragma once
public ref class Tax
{
private:
    int id;
    int percentage;
public:
    Tax::Tax(int id, int percentage);
    int Tax::getId();
    int Tax::getPercentage();
    void setPercentage(int percentage);

};