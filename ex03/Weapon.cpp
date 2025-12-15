#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType(void) //std::string& (참조자 반환) -> "복사하지 말고 원본을 보여줘"
{
    return (this->_type);
}

void Weapon::setType(std::string newType)
{
    this->_type = newType;
}