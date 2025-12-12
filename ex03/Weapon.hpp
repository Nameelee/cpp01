#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
    std::string _type;

public:
    Weapon(std::string type);
    ~Weapon();

    // getType은 수정 불가능한 참조자(const &)를 반환해야 합니다.
    // 이렇게 하면 복사 비용도 줄이고, 외부에서 type을 함부로 못 바꾸게 막을 수 있습니다.
    const std::string& getType(void);
    
    void setType(std::string newType);
};

#endif