#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
    std::string _name;
    Weapon&     _weapon; // 핵심: 참조자(&)로 무기를 저장

public:
    // 생성자에서 무기를 반드시 받아야 합니다.
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();

    void attack(void);
};

#endif