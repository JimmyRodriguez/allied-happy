[Uno.Compiler.UxGenerated]
public partial class Login: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal Fuse.Reactive.EventBinding temp_eb2;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router"
    };
    static Login()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Login(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new Fuse.Controls.DockPanel();
        var temp2 = new Fuse.Controls.StackPanel();
        var temp3 = new Fuse.Controls.Panel();
        var temp4 = new Fuse.Controls.Text();
        var temp5 = new Fuse.Controls.Panel();
        var temp6 = new Fuse.Controls.Text();
        var temp7 = new Fuse.Controls.Panel();
        var temp8 = new Fuse.Controls.Panel();
        var temp9 = new Fuse.Controls.Rectangle();
        var temp10 = new Fuse.Drawing.StaticSolidColor(float4(0f, 0.7215686f, 0.8313726f, 1f));
        var temp11 = new Fuse.Controls.Button();
        var temp12 = new Fuse.Controls.Text();
        var temp13 = new Fuse.Effects.DropShadow();
        temp_eb2 = new Fuse.Reactive.EventBinding("goHome");
        var temp14 = new Fuse.Gestures.WhilePressed();
        var temp15 = new Fuse.Animations.Scale();
        temp.LineNumber = 4;
        temp.FileName = "pages/login.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../js/login.js"));
        temp1.Children.Add(temp2);
        temp2.ItemSpacing = 40f;
        temp2.Children.Add(temp3);
        temp2.Children.Add(temp5);
        temp2.Children.Add(temp7);
        temp3.Children.Add(temp4);
        temp4.Value = "User";
        temp5.Children.Add(temp6);
        temp6.Value = "Password";
        temp7.Children.Add(temp8);
        temp8.Alignment = Fuse.Elements.Alignment.Center;
        temp8.Margin = float4(20f, 20f, 20f, 20f);
        temp8.Padding = float4(20f, 20f, 20f, 20f);
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp11);
        temp8.Children.Add(temp14);
        temp9.CornerRadius = float4(15f, 15f, 15f, 15f);
        temp9.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp9.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp9.Layer = Fuse.Layer.Background;
        temp9.Fill = temp10;
        temp11.Width = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
        temp11.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        global::Fuse.Gestures.Clicked.AddHandler(temp11, temp_eb2.OnEvent);
        temp11.Effects.Add(temp13);
        temp11.Children.Add(temp12);
        temp11.Bindings.Add(temp_eb2);
        temp12.Value = "Login";
        temp12.FontSize = 20f;
        temp12.TextColor = float4(1f, 1f, 1f, 1f);
        temp12.Alignment = Fuse.Elements.Alignment.Center;
        temp14.Animators.Add(temp15);
        temp15.Factor = 0.9f;
        temp15.Easing = Fuse.Animations.Easing.BounceOut;
        temp15.EasingBack = Fuse.Animations.Easing.BounceIn;
        temp15.Duration = 0.1;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
