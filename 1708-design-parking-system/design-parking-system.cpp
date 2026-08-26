class ParkingSystem {
public:
    int b,m,s;
    ParkingSystem(int big, int medium, int small) {
        b = big;
        m = medium;
        s = small;
    }
    
    bool addCar(int cartype) {

        if((cartype == 1 && b == 0) || (cartype == 2 && m == 0) || (cartype == 3 && s == 0))
        return false;

        if(cartype == 1)
        b--;
        else if(cartype == 2)
        m--;
        else
        s--;

        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */