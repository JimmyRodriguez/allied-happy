package com.foreign.Fuse.Controls.VideoImpl.Android;

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

public class MediaPlayer
{
    static void debug_log(Object message)
    {
        android.util.Log.d("company", (message==null ? "null" : message.toString()));
    }

    public static Object CreateMediaPlayer172(final Object _this, final Object surfaceHandle)
    {
        android.media.MediaPlayer player = new android.media.MediaPlayer();
        			player.setAudioStreamType(android.media.AudioManager.STREAM_MUSIC);
        			player.setOnPreparedListener(new android.media.MediaPlayer.OnPreparedListener() {
        				public void onPrepared(android.media.MediaPlayer mp) {
        					ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared173(_this);
        				}
        			});
        			player.setOnCompletionListener(new android.media.MediaPlayer.OnCompletionListener() {
        				public void onCompletion(android.media.MediaPlayer mp) {
        					ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion174(_this);
        				}
        			});
        			player.setOnErrorListener(new android.media.MediaPlayer.OnErrorListener() {
        				public boolean onError(android.media.MediaPlayer mp, int what, int extra) {
        					ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError175(_this,what,extra);
        					return false;
        				}
        			});
        			player.setOnBufferingUpdateListener(new android.media.MediaPlayer.OnBufferingUpdateListener() {
        				public void onBufferingUpdate(android.media.MediaPlayer mp, int percent) {
        					ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer176(_this,percent);
        				}
        			});
        			player.setSurface(((android.view.Surface)surfaceHandle));
        			return player;
    }
    
    public static Object CreateSurface177(final Object _this, final Object surfaceTexture)
    {
        return new android.view.Surface(((android.graphics.SurfaceTexture)surfaceTexture));
    }
    
    public static Object CreateSurfaceTexture178(final Object _this, final int glHandle)
    {
        android.graphics.SurfaceTexture surfaceTexture = new android.graphics.SurfaceTexture(glHandle);
        			surfaceTexture.setOnFrameAvailableListener(new android.graphics.SurfaceTexture.OnFrameAvailableListener() {
        				public void onFrameAvailable(android.graphics.SurfaceTexture surfaceTexture) {
        					ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable179(_this);
        				}
        			});
        			return surfaceTexture;
    }
    
    public static void Dispose1180(final Object mediaplayerHandle,final Object surfaceHandle,final Object surfaceTextureHandle)
    {
        android.media.MediaPlayer player = (android.media.MediaPlayer)mediaplayerHandle;
        			player.reset();
        			player.release();
        
        			android.view.Surface surface = (android.view.Surface)surfaceHandle;
        			surface.release();
        
        			android.graphics.SurfaceTexture surfaceTexture = (android.graphics.SurfaceTexture)surfaceTextureHandle;
        			surfaceTexture.release();
    }
    
    public static int GetCurrentPosition181(final Object handle)
    {
        return ((android.media.MediaPlayer)handle).getCurrentPosition();
    }
    
    public static int GetDuration182(final Object handle)
    {
        return ((android.media.MediaPlayer)handle).getDuration();
    }
    
    public static int GetHeight183(final Object handle)
    {
        return ((android.media.MediaPlayer)handle).getVideoHeight();
    }
    
    public static int GetWidth184(final Object handle)
    {
        return ((android.media.MediaPlayer)handle).getVideoWidth();
    }
    
    public static boolean IsHardwareAccelerated185()
    {
        android.view.Window window = com.apps.company.company.GetRootActivity().getWindow();
        
        			if (window != null) {
        				if ((window.getAttributes().flags & android.view.WindowManager.LayoutParams.FLAG_HARDWARE_ACCELERATED) != 0) {
        					return true;
        				}
        			}
        
        			try
        			{
        				android.content.pm.ActivityInfo info = com.apps.company.company.GetRootActivity().getPackageManager().getActivityInfo(com.apps.company.company.GetRootActivity().getComponentName(), 0);
        				if ((info.flags & android.content.pm.ActivityInfo.FLAG_HARDWARE_ACCELERATED) != 0) {
        					return true;
        				}
        			}
        			catch (android.content.pm.PackageManager.NameNotFoundException e)
        			{
        
        			}
        
        			return false;
    }
    
    public static void LoadAsyncAsset186(final Object _this, final Object handle,final String assetName)
    {
        android.media.MediaPlayer player = (android.media.MediaPlayer)handle;
        			android.content.res.AssetFileDescriptor afd = null;
        			try
        			{
        				afd = com.apps.company.company
        					.GetRootActivity()
        					.getAssets()
        					.openFd(assetName);
        			}
        			catch (Exception e)
        			{
        				// checked exceptions suck (ﾉಥДಥ)ﾉ︵┻━┻･/
        				android.util.Log.e("Fuse.Video", e.getMessage());
        				ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred187(_this,e.getMessage());
        			}
        
        			/// AAAAAAAAAA JAVA
        			if (afd == null)
        			{
        				// (ﾉಥДಥ)ﾉ︵┻━┻･/
        				return;
        			}
        
        			player.reset();
        			try
        			{
        				// (ﾉಥДಥ)ﾉ︵┻━┻･/
        				player.setDataSource(afd.getFileDescriptor(), afd.getStartOffset(), afd.getLength());
        			}
        			// (ﾉಥДಥ)ﾉ︵┻━┻･/
        			catch (Exception e)
        			{
        				// (ﾉಥДಥ)ﾉ︵┻━┻･/
        				android.util.Log.e("Fuse.Video", e.getMessage());
        				ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred187(_this,e.getMessage());
        			}
        
        			player.prepareAsync();
    }
    
    public static void LoadAsyncUrl188(final Object _this, final Object handle,final String url)
    {
        android.media.MediaPlayer player = (android.media.MediaPlayer)handle;
        			player.reset();
        			try
        			{
        				player.setDataSource(url);
        			}
        			catch(Exception e)
        			{
        				android.util.Log.e("Fuse.Video", e.getMessage());
        				ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred187(_this,e.getMessage());
        			}
        			player.prepareAsync();
    }
    
    public static void Pause1189(final Object handle)
    {
        android.media.MediaPlayer player = (android.media.MediaPlayer)handle;
        			if (player.isPlaying())
        			{
        				android.media.AudioManager am = (android.media.AudioManager)com.apps.company.company.GetRootActivity().getSystemService(android.content.Context.AUDIO_SERVICE);
        				am.abandonAudioFocus(null);
        				player.pause();
        			}
    }
    
    public static void Play1190(final Object handle)
    {
        android.media.MediaPlayer player = (android.media.MediaPlayer)handle;
        			if (!player.isPlaying())
        			{
        				android.media.AudioManager am = (android.media.AudioManager)com.apps.company.company.GetRootActivity().getSystemService(android.content.Context.AUDIO_SERVICE);
        				am.requestAudioFocus(null, android.media.AudioManager.STREAM_MUSIC, android.media.AudioManager.AUDIOFOCUS_GAIN);
        				player.start();
        			}
    }
    
    public static void SeekTo191(final Object handle,final int position)
    {
        ((android.media.MediaPlayer)handle).seekTo(position);
    }
    
    public static void SetVolume192(final Object handle,final float left,final float right)
    {
        ((android.media.MediaPlayer)handle).setVolume(left, right);
    }
    
    public static void UpdateTexture1193(final Object surfaceTextureHandle)
    {
        ((android.graphics.SurfaceTexture)surfaceTextureHandle).updateTexImage();
    }
    
}
