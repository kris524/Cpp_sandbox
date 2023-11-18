#include <iostream>


class Character {

    public:
        virtual void attack(){}

        virtual defence(){}

};

class HumanMage : public Character {

    public:
        void attack() override {
            std::cout<<"Human Spell Attack 35"<<std::endl;
        };

        void defence() override {
            std::cout<<"Human Spell Defence 45"<<std::endl;
        };

};


class HumanWarrior : public Character {

    public:
        void attack() override {
            std::cout<<"Human Warrior Attack 35"<<std::endl;
        };

        void defence() override {
            std::cout<<"Human Warrior Defence 45"<<std::endl;
        };

};


class OrcMage : public Character {

    public:
        void attack() override {
            std::cout<<"Orc Spell Attack 65" << std::endl;
        };

        void defence() override {
            std::cout<<"Orc Spell Defence 412" << std::endl;
        };

};


class OrcWarrior : public Character {

    public:
        void attack() override {
            std::cout<<"Orc Warrior Attack 85" << std::endl;
        };

        void defence() override {
            std::cout<<"Orc Warrior Defence 95" << std::endl;
        };

};



class CharacterFactory{

    public:
        virtual create_character{
            
        }

}