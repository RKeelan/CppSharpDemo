public class NativeClass {
    static {
        System.loadLibrary("JniLib");
    }

    private long nativeObjAddr;
    private boolean ownsNativeInstance;

    private native void jniCreateNativeObject();
    public native int getInt();
    public native int throwJavaException();

    public NativeClass() {
        jniCreateNativeObject();
    }

    public static void main(String[] args) {
        NativeClass nc = new NativeClass();

        try {
            int ncInt = nc.getInt();
            System.out.println(ncInt);
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