#pragma once
// Here: pragma once is a header card. They prevent "class redifinatio conficts as show in fig"
// by defaul class members are private 


// All declaration are here, but the definition will be later added in .cpp files
class Car{
    private:
        float fuel ;  // remeber initialization (with zero /nullptr) is important. Here we will make constructor to do that
        float speed ;
        int passengers;
    public:
        Car();
        void FillFuel(float amount);
        void Accelerate();
        void Brake();
        void AddPassengers(int count);
        void Dashboard();

};

 


