public class NativeClass {
    static {
        System.loadLibrary("JniLib");
    }

    private long nativeObjAddr;
    private boolean ownsNativeInstance;

    private native void jniCreateNativeObject();
    public native float getNumber();
    public native void setNumber(float value);
    public native int getInt();
    public native void setInt(int value);
    public native int square(int n);
    public native float halve(float n);
    public native int throwJavaException();

    public NativeClass() {
        jniCreateNativeObject();
    }

    public static void main(String[] args) {
        NativeClass nc = new NativeClass();

        try {
            nc.setInt(5);
            int ncInt = nc.getInt();
            System.out.println(String.format("Expected Int to be 5 and it was %d", ncInt));

            nc.setNumber(1.1f);
            float number = nc.getNumber();
            System.out.println(String.format("Expected Number to be 1.1 and it was %f", number));

            System.out.println(String.format("5^2 = %d", nc.square(5)));
            System.out.println(String.format("11 ÷ 2 = %f", nc.halve(11f)));
        }
        catch (Exception ex) {
            ex.printStackTrace(System.out);
        }

    }

    public void makeThisAUt() {
        NativeClass nc = new NativeClass();
        try {
            nc.throwJavaException();
        }
        catch (Exception ex) {
            ex.printStackTrace(System.out);
        }
    }
}