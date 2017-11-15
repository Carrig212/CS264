package lab5java.exercise2;

public class Vehicle {
    // Traits
    private final int numberOfDoors;
    private final int numberOfCylinders;
    private String vehicleColor;
    private double fuelLevel;
    private final int transmissionType;
    private String className;

    // Constructor
    public Vehicle(int numberOfDoors, int numberOfCylinders, String vehicleColor, double fuelLevel, int transmissionType) {
        this.numberOfDoors = numberOfDoors;
        this.numberOfCylinders = numberOfCylinders;
        this.vehicleColor = vehicleColor;
        this.fuelLevel = fuelLevel;
        this.transmissionType = transmissionType;
        className = "Car";
    }

    // Getters
    public int getNumberOfDoors() {
        return numberOfDoors;
    }

    public int getNumberOfCylinders() {
        return numberOfCylinders;
    }

    public String getVehicleColor() {
        return vehicleColor;
    }

    public double getFuelLevel() {
        return fuelLevel;
    }

    public int getTransmissionType() {
        return transmissionType;
    }

    public String getClassName() {
        return className;
    }

    // Setters
    public void setVehicleColor(String vehicleColor) {
        this.vehicleColor = vehicleColor;
    }

    public void setFuelLevel(double fuelLevel) {
        this.fuelLevel = fuelLevel;
    }

    public void setClassName(String className) {
        this.className = className;
    }

    // Printer
    public void print() {
        System.out.println(className + ":");
        System.out.println("\tNumber Of Doors = " + numberOfDoors);
        System.out.println("\tNumber Of Cylinders = " + numberOfCylinders);
        System.out.println("\tVehicle Color = " + vehicleColor);
        System.out.println("\tFuel Level = " + fuelLevel);
        System.out.println("\tTransmission Type = " + transmissionType);
    }
}
