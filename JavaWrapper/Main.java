public class Main {
    static {
        System.loadLibrary("JavaWrapper");
    }

    public static void main(String[] args) {
        System.out.println("Java start");

        CppData data = new CppData();
        System.out.println("Object created");

        System.out.println("getBool initital value: " + data.getBool());
        data.setBool(true);
        System.out.println("getBool updated value: " + data.getBool());

        data.close();
        System.out.println("Object disposed");

        System.out.println("Java end");
    }
}

