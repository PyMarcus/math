#include <iostream>


const float g = 9.80665;


float _weight(float physical_mass)
{
    /**
     * physical_mass: kg
     * return: N
     */
    return physical_mass * g;
}


float buoyancy(float weight, float volume)
{
    /**
     * weight: kg
     * volume: m3
     * return: N
     */
    float var_buoyancy = (weight * volume * g) * 100;
    return var_buoyancy;
}

bool will_it_float(float physical_mass, float weight, float volume)
{
    /*
     * physical_mass: kg
     * weight: kg
     * volume: m3
     * return: N
     * */
    std::cout << "P=" << _weight(physical_mass) << "N & " << buoyancy(weight, volume) << "N" <<'\n';
    if(_weight(physical_mass) > buoyancy(weight, volume)){
        return false;
    }
    return true;
}


int main()
{
    /*
     * Buoyancy is a force that a fluid
     * exerts on a body immersed or partially
     * immersed in it. This is the force
     * responsible for making, for example, a piece
     * of Styrofoam float in water, and it can be
     * called the buoyancy force.
     * */
    std::ios_base::sync_with_stdio(false);
    bool response = will_it_float(10, 10, 0.002);
    if(response) std::cout << "will float! ";
    else std::cout << "will not float!";

    return EXIT_SUCCESS;
}