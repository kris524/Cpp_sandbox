#include <iostream>


class Character {

    public:
        virtual void attack(){}

        virtual void defence(){}

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



class CharacterFactory {

    public:
        virtual std::unique_ptr<Character> create_warrior(){};
        virtual std::unique_ptr<Character> create_mage() {};

};



class HumanCharacterFactory : public CharacterFactory {
    public:
       std::unique_ptr<Character> create_warrior() {        
            return std::make_unique<HumanWarrior>();
        };
        std::unique_ptr<Character> create_mage() {
            return std::make_unique<HumanMage>();
        };

};

class OrcCharacterFactory : public CharacterFactory {
    public:
       std::unique_ptr<Character> create_warrior() {        
            return std::make_unique<OrcWarrior>();
        };
        std::unique_ptr<Character> create_mage() {
            return std::make_unique<OrcMage>();
        };
};


void Client(CharacterFactory &factory ) {

        auto warrior = factory.create_warrior();
        auto mage = factory.create_mage();

        warrior->attack();
        warrior->defence();

        mage->attack();
        mage->defence();

}

int main() {

    OrcCharacterFactory* orc_factory = new OrcCharacterFactory();
    Client(*orc_factory); 

    delete orc_factory;


    HumanCharacterFactory* human_factory = new HumanCharacterFactory();
    Client(*human_factory); 

    delete human_factory;

}