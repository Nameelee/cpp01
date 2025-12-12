#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
    std::string _name;
    Weapon* _weapon; // 핵심: 포인터(*)로 무기를 저장 (없을 수도 있으니까)

public:
    HumanB(std::string name);
    ~HumanB();

    void setWeapon(Weapon& weapon); // 무기를 나중에 장착하는 함수
    void attack(void);
};

#endif