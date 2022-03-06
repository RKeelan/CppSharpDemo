// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
using System;
using System.Runtime.InteropServices;
using System.Security;
using __CallingConvention = global::System.Runtime.InteropServices.CallingConvention;
using __IntPtr = global::System.IntPtr;

namespace CppLib
{
    public unsafe partial class CppData : IDisposable
    {
        [StructLayout(LayoutKind.Sequential, Size = 56)]
        public partial struct __Internal
        {
            internal byte prv_bool;
            internal byte prv_u8;
            internal short prv_i16;
            internal ushort prv_u16;
            internal int prv_i32;
            internal uint prv_u32;
            internal long prv_i64;
            internal ulong prv_u64;
            internal float prv_f32;
            internal double prv_f64;
            internal sbyte prv_char;

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "??0CppData@@QEAA@XZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern __IntPtr ctor(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("CppLib", EntryPoint = "??0CppData@@QEAA@AEBV0@@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern __IntPtr cctor(__IntPtr __instance, __IntPtr _0);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetBool@CppData@@QEAA_NXZ", CallingConvention = __CallingConvention.Cdecl)]
            [return: MarshalAs(UnmanagedType.I1)]
            internal static extern bool GetBool(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetBool@CppData@@QEAAX_N@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetBool(__IntPtr __instance, bool value);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetUint8@CppData@@QEAAEXZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern byte GetUint8(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetUint8@CppData@@QEAAXE@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetUint8(__IntPtr __instance, byte value);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetInt16@CppData@@QEAAFXZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern short GetInt16(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetInt16@CppData@@QEAAXF@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetInt16(__IntPtr __instance, short value);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetUint16@CppData@@QEAAGXZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern ushort GetUint16(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetUint16@CppData@@QEAAXG@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetUint16(__IntPtr __instance, ushort value);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetInt32@CppData@@QEAAHXZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern int GetInt32(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetInt32@CppData@@QEAAXH@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetInt32(__IntPtr __instance, int value);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetUint32@CppData@@QEAAIXZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern uint GetUint32(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetUint32@CppData@@QEAAXI@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetUint32(__IntPtr __instance, uint value);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetInt64@CppData@@QEAA_JXZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern long GetInt64(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetInt64@CppData@@QEAAX_J@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetInt64(__IntPtr __instance, long value);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetUint64@CppData@@QEAA_KXZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern ulong GetUint64(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetUint64@CppData@@QEAAX_K@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetUint64(__IntPtr __instance, ulong value);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetFloat@CppData@@QEAAMXZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern float GetFloat(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetFloat@CppData@@QEAAXM@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetFloat(__IntPtr __instance, float value);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetDouble@CppData@@QEAANXZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern double GetDouble(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetDouble@CppData@@QEAAXN@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetDouble(__IntPtr __instance, double value);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?GetChar@CppData@@QEAADXZ", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern sbyte GetChar(__IntPtr __instance);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?SetChar@CppData@@QEAAXD@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void SetChar(__IntPtr __instance, sbyte value);
        }

        public __IntPtr __Instance { get; protected set; }

        internal static readonly global::System.Collections.Concurrent.ConcurrentDictionary<IntPtr, global::CppLib.CppData> NativeToManagedMap = new global::System.Collections.Concurrent.ConcurrentDictionary<IntPtr, global::CppLib.CppData>();

        protected bool __ownsNativeInstance;

        internal static CppData __CreateInstance(__IntPtr native, bool skipVTables = false)
        {
            return new CppData(native.ToPointer(), skipVTables);
        }

        internal static CppData __GetOrCreateInstance(__IntPtr native, bool saveInstance = false, bool skipVTables = false)
        {
            if (native == __IntPtr.Zero)
                return null;
            if (NativeToManagedMap.TryGetValue(native, out var managed))
                return (CppData)managed;
            var result = __CreateInstance(native, skipVTables);
            if (saveInstance)
                NativeToManagedMap[native] = result;
            return result;
        }

        internal static CppData __CreateInstance(__Internal native, bool skipVTables = false)
        {
            return new CppData(native, skipVTables);
        }

        private static void* __CopyValue(__Internal native)
        {
            var ret = Marshal.AllocHGlobal(sizeof(__Internal));
            *(__Internal*) ret = native;
            return ret.ToPointer();
        }

        private CppData(__Internal native, bool skipVTables = false)
            : this(__CopyValue(native), skipVTables)
        {
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        protected CppData(void* native, bool skipVTables = false)
        {
            if (native == null)
                return;
            __Instance = new __IntPtr(native);
        }

        public CppData()
        {
            __Instance = Marshal.AllocHGlobal(sizeof(global::CppLib.CppData.__Internal));
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            __Internal.ctor(__Instance);
        }

        public CppData(global::CppLib.CppData _0)
        {
            __Instance = Marshal.AllocHGlobal(sizeof(global::CppLib.CppData.__Internal));
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            *((global::CppLib.CppData.__Internal*) __Instance) = *((global::CppLib.CppData.__Internal*) _0.__Instance);
        }

        public void Dispose()
        {
            Dispose(disposing: true, callNativeDtor : __ownsNativeInstance );
        }

        partial void DisposePartial(bool disposing);

        internal protected virtual void Dispose(bool disposing, bool callNativeDtor )
        {
            if (__Instance == IntPtr.Zero)
                return;
            NativeToManagedMap.TryRemove(__Instance, out _);
            DisposePartial(disposing);
            if (__ownsNativeInstance)
                Marshal.FreeHGlobal(__Instance);
            __Instance = IntPtr.Zero;
        }

        public static sbyte CHAR_RESET_VALUE { get; } = '\x00';

        public bool Bool
        {
            get
            {
                var __ret = __Internal.GetBool(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetBool(__Instance, value);
            }
        }

        public byte Uint8
        {
            get
            {
                var __ret = __Internal.GetUint8(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetUint8(__Instance, value);
            }
        }

        public short Int16
        {
            get
            {
                var __ret = __Internal.GetInt16(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetInt16(__Instance, value);
            }
        }

        public ushort Uint16
        {
            get
            {
                var __ret = __Internal.GetUint16(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetUint16(__Instance, value);
            }
        }

        public int Int32
        {
            get
            {
                var __ret = __Internal.GetInt32(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetInt32(__Instance, value);
            }
        }

        public uint Uint32
        {
            get
            {
                var __ret = __Internal.GetUint32(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetUint32(__Instance, value);
            }
        }

        public long Int64
        {
            get
            {
                var __ret = __Internal.GetInt64(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetInt64(__Instance, value);
            }
        }

        public ulong Uint64
        {
            get
            {
                var __ret = __Internal.GetUint64(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetUint64(__Instance, value);
            }
        }

        public float Float
        {
            get
            {
                var __ret = __Internal.GetFloat(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetFloat(__Instance, value);
            }
        }

        public double Double
        {
            get
            {
                var __ret = __Internal.GetDouble(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetDouble(__Instance, value);
            }
        }

        public sbyte Char
        {
            get
            {
                var __ret = __Internal.GetChar(__Instance);
                return __ret;
            }

            set
            {
                __Internal.SetChar(__Instance, value);
            }
        }
    }

    public enum Operation
    {
        Reset = 0,
        Increment = 1
    }

    public enum ScopeFlags
    {
        Bool = 1,
        Int = 2,
        Uint = 4,
        Float = 8,
        Char = 16,
        All = -1
    }

    public unsafe partial class CppOp : IDisposable
    {
        [StructLayout(LayoutKind.Sequential, Size = 1)]
        public partial struct __Internal
        {
            [SuppressUnmanagedCodeSecurity, DllImport("CppLib", EntryPoint = "??0CppOp@@QEAA@AEBV0@@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern __IntPtr cctor(__IntPtr __instance, __IntPtr _0);

            [SuppressUnmanagedCodeSecurity, DllImport("Cpp", EntryPoint = "?Do@CppOp@@SAXAEAVCppData@@W4Operation@@W4ScopeFlags@@@Z", CallingConvention = __CallingConvention.Cdecl)]
            internal static extern void Do(__IntPtr data, global::CppLib.Operation op, global::CppLib.ScopeFlags scope);

            [SuppressUnmanagedCodeSecurity, DllImport("CppLib", EntryPoint = "?InScope@@YA_NW4ScopeFlags@@0@Z", CallingConvention = __CallingConvention.Cdecl)]
            [return: MarshalAs(UnmanagedType.I1)]
            internal static extern bool InScope(global::CppLib.ScopeFlags scope, global::CppLib.ScopeFlags flags);
        }

        public __IntPtr __Instance { get; protected set; }

        internal static readonly global::System.Collections.Concurrent.ConcurrentDictionary<IntPtr, global::CppLib.CppOp> NativeToManagedMap = new global::System.Collections.Concurrent.ConcurrentDictionary<IntPtr, global::CppLib.CppOp>();

        protected bool __ownsNativeInstance;

        internal static CppOp __CreateInstance(__IntPtr native, bool skipVTables = false)
        {
            return new CppOp(native.ToPointer(), skipVTables);
        }

        internal static CppOp __GetOrCreateInstance(__IntPtr native, bool saveInstance = false, bool skipVTables = false)
        {
            if (native == __IntPtr.Zero)
                return null;
            if (NativeToManagedMap.TryGetValue(native, out var managed))
                return (CppOp)managed;
            var result = __CreateInstance(native, skipVTables);
            if (saveInstance)
                NativeToManagedMap[native] = result;
            return result;
        }

        internal static CppOp __CreateInstance(__Internal native, bool skipVTables = false)
        {
            return new CppOp(native, skipVTables);
        }

        private static void* __CopyValue(__Internal native)
        {
            var ret = Marshal.AllocHGlobal(sizeof(__Internal));
            *(__Internal*) ret = native;
            return ret.ToPointer();
        }

        private CppOp(__Internal native, bool skipVTables = false)
            : this(__CopyValue(native), skipVTables)
        {
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        protected CppOp(void* native, bool skipVTables = false)
        {
            if (native == null)
                return;
            __Instance = new __IntPtr(native);
        }

        public CppOp()
        {
            __Instance = Marshal.AllocHGlobal(sizeof(global::CppLib.CppOp.__Internal));
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        public CppOp(global::CppLib.CppOp _0)
        {
            __Instance = Marshal.AllocHGlobal(sizeof(global::CppLib.CppOp.__Internal));
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            *((global::CppLib.CppOp.__Internal*) __Instance) = *((global::CppLib.CppOp.__Internal*) _0.__Instance);
        }

        public void Dispose()
        {
            Dispose(disposing: true, callNativeDtor : __ownsNativeInstance );
        }

        partial void DisposePartial(bool disposing);

        internal protected virtual void Dispose(bool disposing, bool callNativeDtor )
        {
            if (__Instance == IntPtr.Zero)
                return;
            NativeToManagedMap.TryRemove(__Instance, out _);
            DisposePartial(disposing);
            if (__ownsNativeInstance)
                Marshal.FreeHGlobal(__Instance);
            __Instance = IntPtr.Zero;
        }

        public static void Do(global::CppLib.CppData data, global::CppLib.Operation op, global::CppLib.ScopeFlags scope)
        {
            if (ReferenceEquals(data, null))
                throw new global::System.ArgumentNullException("data", "Cannot be null because it is a C++ reference (&).");
            var __arg0 = data.__Instance;
            __Internal.Do(__arg0, op, scope);
        }

        public static bool InScope(global::CppLib.ScopeFlags scope, global::CppLib.ScopeFlags flags)
        {
            var __ret = __Internal.InScope(scope, flags);
            return __ret;
        }
    }
}
