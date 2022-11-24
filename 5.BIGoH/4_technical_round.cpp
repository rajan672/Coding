#include <bits/stdc++.h>
using namespace std;

class Customer{
    private:string Cus_name;
    private:string Cus_noOfVehicle;
    private:string Cus_vehicle1;
    private:string Cus_vehicle2;

    public:void setCustomerDetails(string newname, string newnoOfVehicle, string newvehicle1, string newvehicle2){
        this->Cus_name = newname;
        this->Cus_noOfVehicle = newnoOfVehicle;
        this->Cus_vehicle1 = newvehicle1;
        this->Cus_vehicle2 = newvehicle2;
    }
    public:void getCustomerDetails(){
        cout << Cus_name << " has " << Cus_noOfVehicle << " vehicle,one is " << Cus_vehicle1 << " and another is " << Cus_vehicle2 << endl;
    }
};

class Vehicle{
    protected:string Veh_fuel;
    protected:string Veh_uses;
    protected:string Veh_operating;
};

class hondacar : public Vehicle{
    public:void sethondaAccordCar(string newfuel, string uses, string madein){
        this->Veh_fuel = newfuel;
        this->Veh_uses = uses;
        this->Veh_operating = madein;
    }
    public:void getHondaAccordCar1(){
        cout << "Honda accord car runs on fuel called " << Veh_fuel << endl;
    }
    public:void getHondaAccordCar2(){
        cout << "Honda accord is " << Veh_uses << " and " << Veh_operating << " in India" << endl;
    }
};

class ducati : public Vehicle{
    public:void setDucatiBike(string newFuel, string uses, string imported){
        this->Veh_fuel = newFuel;
        this->Veh_uses = uses;
        this->Veh_operating = imported;
    }
    public:void getDucatiBike(){
        cout << "Ducati runs on fuel called " << Veh_fuel << endl;
        cout << "Ducati is " << Veh_uses << " and " << Veh_operating << " vehicle" << endl;
    }
};

int main()
{
    Customer c1;
    hondacar car;
    ducati bik;

    c1.setCustomerDetails("Sourabh", "two", "honda accord car", "Ducati Bike");
    car.sethondaAccordCar("diesel", "new", "made");
    bik.setDucatiBike("petrol", "used", "imported");

    c1.getCustomerDetails();
    car.getHondaAccordCar1();
    bik.getDucatiBike();
    car.getHondaAccordCar2();
}