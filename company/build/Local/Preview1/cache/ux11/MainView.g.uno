[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
    global::Uno.UX.Property<string> temp6_Value_inst;
    internal Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
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
        var temp7 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp8 = new Fuse.Reactive.FuseJS.Http();
        var temp9 = new Fuse.Triggers.BusyTaskModule();
        var temp10 = new Fuse.FileSystem.FileSystemModule();
        var temp11 = new Fuse.Storage.StorageModule();
        var temp12 = new Polyfills.Window.WindowModule();
        var temp13 = new FuseJS.Globals();
        var temp14 = new FuseJS.Lifecycle();
        var temp15 = new FuseJS.Environment();
        var temp16 = new FuseJS.Base64();
        var temp17 = new FuseJS.Bundle();
        var temp18 = new FuseJS.FileReaderImpl();
        var temp19 = new FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Controls.TextInput();
        temp_Value_inst = new company_FuseControlsTextInput_Value_Property(temp, __selector0);
        var temp1 = new Fuse.Controls.TextInput();
        temp1_Value_inst = new company_FuseControlsTextInput_Value_Property(temp1, __selector0);
        var temp2 = new Fuse.Controls.TextInput();
        temp2_Value_inst = new company_FuseControlsTextInput_Value_Property(temp2, __selector0);
        var temp3 = new Fuse.Controls.TextInput();
        temp3_Value_inst = new company_FuseControlsTextInput_Value_Property(temp3, __selector0);
        var temp4 = new Fuse.Controls.TextInput();
        temp4_Value_inst = new company_FuseControlsTextInput_Value_Property(temp4, __selector0);
        var temp5 = new Fuse.Controls.TextInput();
        temp5_Value_inst = new company_FuseControlsTextInput_Value_Property(temp5, __selector0);
        var temp6 = new Fuse.Controls.Text();
        temp6_Value_inst = new company_FuseControlsText_Value_Property(temp6, __selector0);
        var temp20 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp21 = new Fuse.Controls.StackPanel();
        var temp22 = new Fuse.Controls.Text();
        var temp23 = new Fuse.Controls.Panel();
        var temp24 = new Fuse.Controls.Grid();
        var temp25 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "idCompany");
        var temp26 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp27 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "idState");
        var temp28 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp29 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "nameCompany");
        var temp30 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp31 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "emailCompany");
        var temp32 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp33 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "telCompany");
        var temp34 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp35 = new Fuse.Reactive.DataBinding<string>(temp5_Value_inst, "dirCompany");
        var temp36 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp37 = new Fuse.Controls.Panel();
        var temp38 = new Fuse.Controls.Grid();
        var temp39 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("insertarEmpresaForPost");
        var temp40 = new Fuse.Reactive.DataBinding<string>(temp6_Value_inst, "error");
        temp20.LineNumber = 3;
        temp20.FileName = "MainView.ux";
        temp20.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../js/MainView.js"));
        temp21.Margin = float4(16f, 16f, 16f, 16f);
        temp21.Padding = float4(20f, 20f, 20f, 20f);
        temp21.Children.Add(temp22);
        temp21.Children.Add(temp23);
        temp21.Children.Add(temp37);
        temp22.Value = "COMPANY";
        temp22.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp22.TextColor = float4(0f, 0f, 0f, 1f);
        temp23.Padding = float4(10f, 10f, 10f, 10f);
        temp23.Children.Add(temp24);
        temp24.RowCount = 6;
        temp24.CellSpacing = 20f;
        temp24.Opacity = 0.2f;
        temp24.Children.Add(temp);
        temp24.Children.Add(temp1);
        temp24.Children.Add(temp2);
        temp24.Children.Add(temp3);
        temp24.Children.Add(temp4);
        temp24.Children.Add(temp5);
        temp.PlaceholderText = "idCompany";
        temp.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp.Background = temp26;
        temp.Bindings.Add(temp25);
        temp1.PlaceholderText = "idState";
        temp1.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp1.Background = temp28;
        temp1.Bindings.Add(temp27);
        temp2.PlaceholderText = "nameCompany";
        temp2.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp2.Background = temp30;
        temp2.Bindings.Add(temp29);
        temp3.PlaceholderText = "emailCompany";
        temp3.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp3.Background = temp32;
        temp3.Bindings.Add(temp31);
        temp4.PlaceholderText = "telCompany";
        temp4.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp4.Background = temp34;
        temp4.Bindings.Add(temp33);
        temp5.PlaceholderText = "dirCompany";
        temp5.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp5.Background = temp36;
        temp5.Bindings.Add(temp35);
        temp37.Width = new Uno.UX.Size(400f, Uno.UX.Unit.Unspecified);
        temp37.Height = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp37.Children.Add(temp38);
        temp38.RowCount = 2;
        temp38.Children.Add(temp39);
        temp38.Children.Add(temp6);
        temp39.Text = "Guardar";
        temp39.Alignment = Fuse.Elements.Alignment.Center;
        temp39.LimitHeight = new Uno.UX.Size(50f, Uno.UX.Unit.Points);
        temp39.LimitWidth = new Uno.UX.Size(150f, Uno.UX.Unit.Points);
        global::Fuse.Gestures.Clicked.AddHandler(temp39, temp_eb0.OnEvent);
        temp39.Bindings.Add(temp_eb0);
        temp6.Alignment = Fuse.Elements.Alignment.Center;
        temp6.Bindings.Add(temp40);
        __g_nametable.This = this;
        this.Children.Add(temp20);
        this.Children.Add(temp21);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
