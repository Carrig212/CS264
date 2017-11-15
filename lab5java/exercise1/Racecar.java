package lab5java.exercise1;

public class Racecar extends Car {
    private int gearbox;
    private String sponsor;
    private boolean parachuteDeployed;

    // Constructor
    public Racecar(String name, String colour, String sponsor) {
        super(name, colour);
        this.sponsor = sponsor;
        gearbox = 6;
        parachuteDeployed = false;
    }

    // Setter
    public void setGearbox(int gearbox) {
        this.gearbox = ((gearbox <= 10 && gearbox >= 0) ? gearbox : 6);
    }

    // Custom Method
    public void useParachute() {
        parachuteDeployed = true;
    }

    // Printer
    public void print() {
        super.print();
        System.out.printf("%s also had %d gears and is sponsored by %s.%n", this.getName(), gearbox, sponsor);

        if (parachuteDeployed)
            System.out.printf("%s has used it's parachute.%n", super.getName());

        else
            System.out.printf("%s has not used it's parachute.%n", super.getName());
    }
}
