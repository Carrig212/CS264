package lab5java.exercise1;

public class Car {
    // Traits
    private int maxSpeed;
    private int engineValves;
    private String colour;
    private String name;

    // Constructor
    public Car(String name, String colour) {
        this.name = name;
        this.colour = colour;
        maxSpeed = 95;
        engineValves = 4;
    }

    // Getters
    public int getMaxSpeed() {
        return maxSpeed;
    }

    public int getEngineValves() {
        return engineValves;
    }

    public String getColour() {
        return colour;
    }

    public String getName() {
        return name;
    }

    // Setters

    public void setMaxSpeed(int maxSpeed) {
        this.maxSpeed = ((maxSpeed >= 0 && maxSpeed < 250) ? maxSpeed : 40);
    }

    public void setEngineValves(int engineValves) {
        this.engineValves = ((engineValves >= 0 && engineValves < 50) ? engineValves : 4);
    }

    // Printer
    public void print() {
        System.out.printf("Car: %s is %s and has a %d-valve engine. MAX SPEED = %d mph.%n", name, colour, engineValves, maxSpeed);
    }
}
