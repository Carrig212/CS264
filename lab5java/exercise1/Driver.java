package lab5java.exercise1;

public class Driver {
    public static void main(String[] args) {
        Car chevy = new Car("Chevrolet", "Black");

        System.out.println("Chevy: ");
        chevy.print();

        Racecar f1 = new Racecar("Ferrari", "red", "Bug2Bug");

        f1.setEngineValves(40);
        f1.setMaxSpeed(220);
        f1.setGearbox(7);
        f1.useParachute();

        System.out.println("\n\nf1:");
        f1.print();
    }
}
