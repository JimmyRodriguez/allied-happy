package com.foreign.Fuse.Controls.Native.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import java.util.HashMap;
import java.util.Map;

public class JavaMap
{
    static void debug_log(Object message)
    {
        android.util.Log.d("company", (message==null ? "null" : message.toString()));
    }

    public static boolean ContainsKey161(final Object handle,final Object key)
    {
        @SuppressWarnings("unchecked")
        			Map<Object, Object> map = (Map<Object, Object>)handle;
        			return map.containsKey(key);
    }
    
    public static Object Create62()
    {
        return new HashMap<Object, Object>();
    }
    
    public static Object Get163(final Object handle,final Object key)
    {
        @SuppressWarnings("unchecked")
        			Map<Object, Object> map = (Map<Object, Object>)handle;
        			return map.get(key);
    }
    
    public static void Put64(final Object handle,final Object key,final Object value)
    {
        @SuppressWarnings("unchecked")
        			Map<Object, Object> map = (Map<Object, Object>)handle;
        			map.put(key, value);
    }
    
    public static void Remove165(final Object handle,final Object key)
    {
        @SuppressWarnings("unchecked")
        			Map<Object, Object> map = (Map<Object, Object>)handle;
        			map.remove(key);
    }
    
}
