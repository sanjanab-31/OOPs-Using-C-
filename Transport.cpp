// Develop a transport amanagemnt sytem with heirarchical classes
// i nned in heirarchical classes
#include<iostream>
#include<string>
using namespace std;
class Transport
{
    protected:
        string vehicle_type;
        string vehicle_number;
        float fare_per_km;
    public:
        Transport(string vt, string vn, float fpk) : vehicle_type(vt), vehicle_number(vn), fare_per_km(fpk) {}
        virtual void display_info() = 0; // Pure virtual function
};
class Bus : public Transport
{
    private:
        int seating_capacity;
    public:
        Bus(string vn, float fpk, int sc) : Transport("Bus", vn, fpk), seating_capacity(sc) {}
        void display_info() override
        {
            cout << "Vehicle Type: " << vehicle_type << endl;
            cout << "Vehicle Number: " << vehicle_number << endl;
            cout << "Fare per KM: " << fare_per_km << endl;
            cout << "Seating Capacity: " << seating_capacity << endl;
        }
};
class Taxi : public Transport
{
    private:
        string driver_name;
    public:
        Taxi(string vn, float fpk, string dn) : Transport("Taxi", vn, fpk), driver_name(dn) {}
        void display_info() override
        {
            cout << "Vehicle Type: " << vehicle_type << endl;
            cout << "Vehicle Number: " << vehicle_number << endl;
            cout << "Fare per KM: " << fare_per_km << endl;
            cout << "Driver Name: " << driver_name << endl;
        }
};
class Truck : public Transport
{
    private:
        float load_capacity;
    public:
        Truck(string vn, float fpk, float lc) : Transport("Truck", vn, fpk), load_capacity(lc) {}
        void display_info() override
        {
            cout << "Vehicle Type: " << vehicle_type << endl;
            cout << "Vehicle Number: " << vehicle_number << endl;
            cout << "Fare per KM: " << fare_per_km << endl;
            cout << "Load Capacity: " << load_capacity << endl;
        }
};
int main()
{
    Bus bus("KA-01-1234", 10.0, 50);
    Taxi taxi("KA-02-5678", 15.0, "John Doe");
    Truck truck("KA-03-9101", 20.0, 1000.0);

    cout << "Bus Information:" << endl;
    bus.display_info();
    cout << endl;

    cout << "Taxi Information:" << endl;
    taxi.display_info();
    cout << endl;

    cout << "Truck Information:" << endl;
    truck.display_info();
    cout << endl;

    return 0;
}
