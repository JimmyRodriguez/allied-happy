[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        internal readonly MainView __parent;
        public Template(MainView parent): base("landing", false)
        {
            __parent = parent;
        }
        static Template()
        {
        }
        public override object New()
        {
            var self = new Landing(__parent.router);
            self.Name = __selector0;
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "landing";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        internal readonly MainView __parent;
        public Template1(MainView parent): base("login", false)
        {
            __parent = parent;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var self = new Login(__parent.router);
            self.Name = __selector0;
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "login";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        internal readonly MainView __parent;
        public Template2(MainView parent): base("home", false)
        {
            __parent = parent;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var self = new Home(__parent.router);
            self.Name = __selector0;
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "home";
    }
    internal Fuse.Navigation.Router router;
    static MainView()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Reactive.FuseJS.TimerModule();
        var temp1 = new Fuse.Reactive.FuseJS.Http();
        var temp2 = new Fuse.Storage.StorageModule();
        var temp3 = new Fuse.GeoLocation.GeoLocation();
        var temp4 = new Polyfills.Window.WindowModule();
        var temp5 = new FuseJS.Globals();
        var temp6 = new FuseJS.Lifecycle();
        var temp7 = new FuseJS.Environment();
        var temp8 = new FuseJS.Base64();
        var temp9 = new FuseJS.Bundle();
        var temp10 = new FuseJS.FileReaderImpl();
        var temp11 = new FuseJS.UserEvents();
        router = new Fuse.Navigation.Router();
        var temp12 = new Fuse.Controls.ClientPanel();
        var temp13 = new Fuse.Triggers.OnBackButton();
        var temp14 = new HomeScreen();
        var temp15 = new Fuse.Controls.Navigator();
        var landing = new Template(this);
        var login = new Template1(this);
        var home = new Template2(this);
        var temp16 = new Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp17 = new Fuse.Controls.StatusBarBackground();
        var temp18 = new Fuse.Controls.BottomBarBackground();
        this.Background = float4(1f, 1f, 1f, 1f);
        router.Name = __selector0;
        temp12.Background = temp16;
        temp12.Children.Add(temp13);
        temp12.Children.Add(temp15);
        temp13.Actions.Add(temp14);
        temp14.Type = HomeScreenType.Finish;
        temp15.DefaultTemplate = "landing";
        temp15.Templates.Add(landing);
        temp15.Templates.Add(login);
        temp15.Templates.Add(home);
        global::Fuse.Controls.DockPanel.SetDock(temp17, Fuse.Layouts.Dock.Top);
        global::Fuse.Controls.DockPanel.SetDock(temp18, Fuse.Layouts.Dock.Bottom);
        this.Children.Add(router);
        this.Children.Add(temp12);
        this.Children.Add(temp17);
        this.Children.Add(temp18);
    }
    static global::Uno.UX.Selector __selector0 = "router";
}
