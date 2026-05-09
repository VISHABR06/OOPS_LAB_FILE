#include <iostream>
using namespace std;

// Engine class (part of Car)
class Engine
{
public:
    void start()
    {
        cout << "Engine started" << endl;
    }

    void stop()
    {
        cout << "Engine stopped" << endl;
    }
};

// Car class (has-a Engine)
class Car
{
private:
    Engine eng;   // Composition: Car HAS-A Engine

public:
    void startCar()
    {
        eng.start();
        cout << "Car is ready to go" << endl;
    }

    void stopCar()
    {
        eng.stop();
        cout << "Car stopped" << endl;
    }
};

int main()
{
    Car c;

    c.startCar();
    c.stopCar();

    return 0;
}