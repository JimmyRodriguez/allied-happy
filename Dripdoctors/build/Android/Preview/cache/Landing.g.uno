[Uno.Compiler.UxGenerated]
public partial class Landing: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<Uno.UX.Size> landing_Width_inst;
    [global::Uno.UX.UXGlobalResource("logoDripDoctors")] public static readonly Fuse.Resources.FileImageSource logoDripDoctors;
    internal Fuse.Controls.Image landing;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "landing"
    };
    static Landing()
    {
        logoDripDoctors = new Fuse.Resources.FileImageSource();
        global::Uno.UX.Resource.SetGlobalKey(logoDripDoctors, "logoDripDoctors");
        logoDripDoctors.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../Assets/dripDoctors.png"));
    }
    [global::Uno.UX.UXConstructor]
    public Landing(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        landing = new Fuse.Controls.Image();
        landing_Width_inst = new Dripdoctors_FuseControlsImage_Width_Property(landing, __selector0);
        var temp = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new Fuse.Controls.DockPanel();
        var temp2 = new Fuse.Effects.DropShadow();
        var temp3 = new Fuse.Navigation.ActivatingAnimation();
        var temp4 = new Fuse.Animations.Change<Uno.UX.Size>(landing_Width_inst);
        temp.LineNumber = 10;
        temp.FileName = "pages/landing.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../js/landing.js"));
        temp1.Children.Add(landing);
        temp1.Children.Add(temp3);
        landing.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        landing.Width = new Uno.UX.Size(10f, Uno.UX.Unit.Unspecified);
        landing.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        landing.Name = __selector1;
        landing.Source = global::Landing.logoDripDoctors;
        landing.Effects.Add(temp2);
        temp2.Size = 10f;
        temp2.Angle = 90f;
        temp2.Distance = 5f;
        temp2.Spread = 0.4f;
        temp2.Color = float4(0.4588235f, 0.4588235f, 0.4588235f, 1f);
        temp3.Animators.Add(temp4);
        temp4.Value = new Uno.UX.Size(270f, Uno.UX.Unit.Unspecified);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(landing);
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
    static global::Uno.UX.Selector __selector0 = "Width";
    static global::Uno.UX.Selector __selector1 = "landing";
}
