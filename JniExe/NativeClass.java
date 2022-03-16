public class NativeClass {
    static {
        System.loadLibrary("JniLib");
    }

    private long nativeObjAddr;
    private boolean ownsNativeInstance;

    private native void jniCreateNativeObject();
    private native void jniDestroyNativeObject();
    private native float getNumber();
    private native void setNumber(float value);
    private native int getInt();
    private native void setInt(int value);
    private native int square(int n);
    private native float halve(float n);
    private native int throwJavaException();

    public NativeClass() {
        jniCreateNativeObject();
    }

    public void dispose() {
        if (!ownsNativeInstance) {
            // The Java wrapper doesn't own the instance
            return;
        }

        if (nativeObjAddr == 0) {
            // Object was already disposed
            return;
        }

        jniDestroyNativeObject();
    }

    public static void main(String[] args) {
        try {
            NativeClass nc = new NativeClass();
            System.out.println("Native class instantiated");

            nc.setInt(5);
            int ncInt = nc.getInt();
            System.out.println(String.format("Expected Int to be 5 and it was %d", ncInt));

            nc.setNumber(1.1f);
            float number = nc.getNumber();
            System.out.println(String.format("Expected Number to be 1.1 and it was %f", number));

            System.out.println(String.format("5^2 = %d", nc.square(5)));
            System.out.println(String.format("11 ÷ 2 = %f", nc.halve(11f)));

            nc.dispose();
            System.out.println("Native class disposed");
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