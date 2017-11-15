package lab5java.exercise2;

public class Taxi extends Vehicle {
    // Trait
    private boolean customers;

    // Constructor
    public Taxi(double fuelLevel) {
        super(4, 6, "yellow", fuelLevel, 5);
        customers = false;
        setClassName("Taxi");
    }

    // Getter
    public boolean hasCustomers() {
        return customers;
    }

    // Setter
    public void setCustomers(boolean customers) {
        this.customers = customers;
    }

    // Printer
    public void print() {
        System.out.println(getClassName() + ":");
        System.out.println("\tNumber Of Doors = " + getNumberOfDoors());
        System.out.println("\tNumber Of Cylinders = " + getNumberOfCylinders());
        System.out.println("\tVehicle Color = " + getVehicleColor());
        System.out.println("\tFuel Level = " + getFuelLevel());
        System.out.println("\tTransmission Type = " + getTransmissionType());

        if(customers)
            System.out.println("\tThe taxi has passengers.");

        else
            System.out.println("\tThe taxi has no passengers.");
    }
}
