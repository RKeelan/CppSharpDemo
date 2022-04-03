/**
 * ----------------------------------------------------------------------------
 * <auto-generated>
 * This is autogenerated code by CppSharp.
 * Do not edit this file or all your changes will be lost after re-generation.
 * </auto-generated>
 * ----------------------------------------------------------------------------
 */

public class CppData {
    private long nativeInstanceAddr;
    private boolean ownsNativeInstance;

    private native void createInstanceJni();
    public CppData()
    {
        createInstanceJni();
    }

    private native void destroyInstanceJni();

    public void close()
    {
        if (!ownsNativeInstance)
        {
            return;
        }

        if (nativeInstanceAddr == 0)
        {
            return;
        }

        destroyInstanceJni();
    }

    private native boolean getBoolJni();
    public boolean getBool()
    {
        return getBoolJni();
    }

    private native void setBoolJni(boolean value);
    public void setBool(boolean value)
    {
        setBoolJni(value);
    }

    private native byte getInt8Jni();
    public byte getInt8()
    {
        return getInt8Jni();
    }

    private native void setInt8Jni(byte value);
    public void setInt8(byte value)
    {
        setInt8Jni(value);
    }

    private native short getInt16Jni();
    public short getInt16()
    {
        return getInt16Jni();
    }

    private native void setInt16Jni(short value);
    public void setInt16(short value)
    {
        setInt16Jni(value);
    }

    private native int getInt32Jni();
    public int getInt32()
    {
        return getInt32Jni();
    }

    private native void setInt32Jni(int value);
    public void setInt32(int value)
    {
        setInt32Jni(value);
    }

    private native long getInt64Jni();
    public long getInt64()
    {
        return getInt64Jni();
    }

    private native void setInt64Jni(long value);
    public void setInt64(long value)
    {
        setInt64Jni(value);
    }

    private native float getFloatJni();
    public float getFloat()
    {
        return getFloatJni();
    }

    private native void setFloatJni(float value);
    public void setFloat(float value)
    {
        setFloatJni(value);
    }

    private native double getDoubleJni();
    public double getDouble()
    {
        return getDoubleJni();
    }

    private native void setDoubleJni(double value);
    public void setDouble(double value)
    {
        setDoubleJni(value);
    }
}
