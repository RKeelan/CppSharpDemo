public class Main {
    static {
        System.loadLibrary("JavaWrapper");
    }

    public static void main(String[] args) {
        System.out.println("Java start");

        CppData data = new CppData();
        System.out.println("Object created");

        data.close();
        System.out.println("Object disposed");

        System.out.println("Java end");
    }
}

