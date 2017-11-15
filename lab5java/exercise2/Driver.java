package lab5java.exercise2;

public class Driver {
    public static void main(String[] args) {
        Vehicle car = new Vehicle(2, 6, "blue", 14.6, 3);
        Taxi cab = new Taxi(3.3);
        Truck mack = new Truck(7.54);

        mack.setCargo(true);

        car.print();
        cab.print();
        mack.print();
    }
}
