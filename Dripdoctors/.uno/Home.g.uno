[Uno.Compiler.UxGenerated]
public partial class Home: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Reactive.EventBinding temp_eb1;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static Home()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Home(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new Dripdoctors_FuseControlsText_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.Text();
        temp1_Value_inst = new Dripdoctors_FuseControlsText_Value_Property(temp1, __selector0);
        var temp2 = new Fuse.Controls.Text();
        temp2_Value_inst = new Dripdoctors_FuseControlsText_Value_Property(temp2, __selector0);
        var temp3 = new Fuse.Controls.StatusBarBackground();
        var temp4 = new Fuse.Controls.BottomBarBackground();
        var temp5 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new Fuse.Controls.DockPanel();
        var temp7 = new Fuse.Controls.Panel();
        var temp8 = new Fuse.Controls.StackPanel();
        var temp9 = new Fuse.Controls.Panel();
        var temp10 = new Fuse.Controls.Grid();
        var temp11 = new Fuse.Controls.Text();
        var temp12 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "immediateLocation");
        var temp13 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp14 = new Fuse.Controls.Panel();
        var temp15 = new Fuse.Controls.Grid();
        var temp16 = new Fuse.Controls.Text();
        var temp17 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "timeoutLocation");
        var temp18 = new Fuse.Drawing.StaticSolidColor(float4(0.6980392f, 0.9215686f, 0.9490196f, 1f));
        var temp19 = new Fuse.Controls.Panel();
        var temp20 = new Fuse.Controls.Grid();
        var temp21 = new Fuse.Controls.Text();
        var temp22 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "continuousLocation");
        var temp23 = new Fuse.Drawing.StaticSolidColor(float4(0.5019608f, 0.8705882f, 0.9176471f, 1f));
        var temp24 = new Fuse.Controls.Panel();
        var temp25 = new Fuse.Controls.Grid();
        var temp26 = new Fuse.Controls.Panel();
        var temp27 = new Fuse.Controls.Button();
        var temp28 = new Fuse.Effects.DropShadow();
        temp_eb0 = new Fuse.Reactive.EventBinding("startContinuousListener");
        var temp29 = new Fuse.Controls.Rectangle();
        var temp30 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0f, 0f, 1f));
        var temp31 = new Fuse.Gestures.WhilePressed();
        var temp32 = new Fuse.Animations.Scale();
        var temp33 = new Fuse.Controls.Panel();
        var temp34 = new Fuse.Controls.Rectangle();
        var temp35 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0f, 0f, 1f));
        var temp36 = new Fuse.Controls.Button();
        var temp37 = new Fuse.Effects.DropShadow();
        temp_eb1 = new Fuse.Reactive.EventBinding("stopContinuousListener");
        var temp38 = new Fuse.Gestures.WhilePressed();
        var temp39 = new Fuse.Animations.Scale();
        global::Fuse.Controls.DockPanel.SetDock(temp3, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Bottom);
        temp5.LineNumber = 8;
        temp5.FileName = "pages/home.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../js/geolocation.js"));
        temp6.Children.Add(temp7);
        temp7.Alignment = Fuse.Elements.Alignment.Center;
        temp7.Margin = float4(20f, 20f, 20f, 20f);
        temp7.Children.Add(temp8);
        temp8.ItemSpacing = 40f;
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp14);
        temp8.Children.Add(temp19);
        temp8.Children.Add(temp24);
        temp9.Background = temp13;
        temp9.Children.Add(temp10);
        temp10.RowCount = 2;
        temp10.ColumnCount = 1;
        temp10.Children.Add(temp11);
        temp10.Children.Add(temp);
        temp11.Value = "Immediate:";
        temp.FontSize = 11f;
        temp.Bindings.Add(temp12);
        temp14.Background = temp18;
        temp14.Children.Add(temp15);
        temp15.RowCount = 2;
        temp15.ColumnCount = 1;
        temp15.Children.Add(temp16);
        temp15.Children.Add(temp1);
        temp16.Value = "Timeout:";
        temp1.Bindings.Add(temp17);
        temp19.Background = temp23;
        temp19.Children.Add(temp20);
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp2);
        temp21.Value = "Continuous:";
        temp2.FontSize = 11f;
        temp2.Bindings.Add(temp22);
        temp24.Children.Add(temp25);
        temp25.RowCount = 1;
        temp25.ColumnCount = 2;
        temp25.Children.Add(temp26);
        temp25.Children.Add(temp33);
        temp26.Alignment = Fuse.Elements.Alignment.Center;
        temp26.Margin = float4(20f, 20f, 20f, 20f);
        temp26.Padding = float4(20f, 20f, 20f, 20f);
        temp26.Children.Add(temp27);
        temp26.Children.Add(temp29);
        temp26.Children.Add(temp31);
        temp27.Text = "Start Service";
        temp27.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp27.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        global::Fuse.Gestures.Clicked.AddHandler(temp27, temp_eb0.OnEvent);
        temp27.Effects.Add(temp28);
        temp27.Bindings.Add(temp_eb0);
        temp29.CornerRadius = float4(8f, 8f, 8f, 8f);
        temp29.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp29.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp29.Layer = Fuse.Layer.Background;
        temp29.Fill = temp30;
        temp31.Animators.Add(temp32);
        temp32.Factor = 0.9f;
        temp32.Easing = Fuse.Animations.Easing.BounceOut;
        temp32.EasingBack = Fuse.Animations.Easing.BounceIn;
        temp32.Duration = 0.1;
        temp33.Alignment = Fuse.Elements.Alignment.Center;
        temp33.Margin = float4(20f, 20f, 20f, 20f);
        temp33.Padding = float4(20f, 20f, 20f, 20f);
        temp33.Children.Add(temp34);
        temp33.Children.Add(temp36);
        temp33.Children.Add(temp38);
        temp34.CornerRadius = float4(8f, 8f, 8f, 8f);
        temp34.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp34.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp34.Layer = Fuse.Layer.Background;
        temp34.Fill = temp35;
        temp36.Text = "Stop Service";
        temp36.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp36.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        global::Fuse.Gestures.Clicked.AddHandler(temp36, temp_eb1.OnEvent);
        temp36.Effects.Add(temp37);
        temp36.Bindings.Add(temp_eb1);
        temp38.Animators.Add(temp39);
        temp39.Factor = 0.9f;
        temp39.Easing = Fuse.Animations.Easing.BounceOut;
        temp39.EasingBack = Fuse.Animations.Easing.BounceIn;
        temp39.Duration = 0.1;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
