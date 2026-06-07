#include <iostream>

class Entity {
protected:
    std::string name;

public:
    
    Entity(std::string name) : name(name) {}
    virtual ~Entity(){ std::cout << "Destruido desde Entity " << name <<std::endl; }

    virtual void update() {
        std::cout << "Entity\n";
    }
};

class Player : public Entity {

public:
    
    
    Player(std::string name) : Entity(name) {}
    ~Player(){ std::cout << "Desde Player " << name << std::endl; }

    void update() override {
        std::cout << "Player\n";
    }
};


int main() {
  
    Player e{"1"};
    e.update();
    
    Entity* p = new Player("2");
    p->update();
    
    delete p;
    return 0;
}
