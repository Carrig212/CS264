package lab5java.exercise2;

public class Truck extends Vehicle{
    // Trait
    private boolean cargo;

    // Constructor
    public Truck(double fuelLevel) {
        super(2, 16, "black", fuelLevel, 8);
        cargo = false;
        setClassName("Truck");
    }

    // Getter
    public boolean hasCargo() {
        return cargo;
    }

    // Setter
    public void setCargo(boolean cargo) {
        this.cargo = cargo;
    }

    // Printer
    public void print() {
        System.out.println(getClassName() + ":");
        System.out.println("\tNumber Of Doors = " + getNumberOfDoors());
        System.out.println("\tNumber Of Cylinders = " + getNumberOfCylinders());
        System.out.println("\tVehicle Color = " + getVehicleColor());
        System.out.println("\tFuel Level = " + getFuelLevel());
        System.out.println("\tTransmission Type = " + getTransmissionType());

        if (cargo)
            System.out.println("\tThe truck is carrying cargo.");

        else
            System.out.println("\tThe truck is not carrying cargo.");
    }
}
