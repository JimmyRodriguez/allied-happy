[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> temp3_Value_inst;
    global::Uno.UX.Property<string> temp4_Value_inst;
    global::Uno.UX.Property<string> temp5_Value_inst;
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
        var temp6 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp7 = new Fuse.Reactive.FuseJS.Http();
        var temp8 = new Fuse.Triggers.BusyTaskModule();
        var temp9 = new Fuse.FileSystem.FileSystemModule();
        var temp10 = new Fuse.Storage.StorageModule();
        var temp11 = new Polyfills.Window.WindowModule();
        var temp12 = new FuseJS.Globals();
        var temp13 = new FuseJS.Lifecycle();
        var temp14 = new FuseJS.Environment();
        var temp15 = new FuseJS.Base64();
        var temp16 = new FuseJS.Bundle();
        var temp17 = new FuseJS.FileReaderImpl();
        var temp18 = new FuseJS.UserEvents();
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
        var temp19 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp20 = new Fuse.Controls.StackPanel();
        var temp21 = new Fuse.Controls.Text();
        var temp22 = new Fuse.Controls.Panel();
        var temp23 = new Fuse.Controls.Grid();
        var temp24 = new Fuse.Reactive.DataBinding<string>(temp_Value_inst, "idCompany");
        var temp25 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp26 = new Fuse.Reactive.DataBinding<string>(temp1_Value_inst, "idState");
        var temp27 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp28 = new Fuse.Reactive.DataBinding<string>(temp2_Value_inst, "nameCompany");
        var temp29 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp30 = new Fuse.Reactive.DataBinding<string>(temp3_Value_inst, "emailCompany");
        var temp31 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp32 = new Fuse.Reactive.DataBinding<string>(temp4_Value_inst, "telCompany");
        var temp33 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp34 = new Fuse.Reactive.DataBinding<string>(temp5_Value_inst, "dirCompany");
        var temp35 = new Fuse.Drawing.StaticSolidColor(float4(0.8784314f, 0.9686275f, 0.9803922f, 1f));
        var temp36 = new Fuse.Controls.Panel();
        var temp37 = new Fuse.Controls.Button();
        temp_eb0 = new Fuse.Reactive.EventBinding("insertarEmpresaForPost");
        temp19.LineNumber = 3;
        temp19.FileName = "MainView.ux";
        temp19.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../js/MainView.js"));
        temp20.Margin = float4(16f, 16f, 16f, 16f);
        temp20.Padding = float4(20f, 20f, 20f, 20f);
        temp20.Children.Add(temp21);
        temp20.Children.Add(temp22);
        temp20.Children.Add(temp36);
        temp21.Value = "COMPANY";
        temp21.TextAlignment = Fuse.Controls.TextAlignment.Center;
        temp21.TextColor = float4(0f, 0f, 0f, 1f);
        temp22.Padding = float4(10f, 10f, 10f, 10f);
        temp22.Children.Add(temp23);
        temp23.RowCount = 6;
        temp23.CellSpacing = 20f;
        temp23.Opacity = 0.2f;
        temp23.Children.Add(temp);
        temp23.Children.Add(temp1);
        temp23.Children.Add(temp2);
        temp23.Children.Add(temp3);
        temp23.Children.Add(temp4);
        temp23.Children.Add(temp5);
        temp.PlaceholderText = "idCompany";
        temp.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp.Background = temp25;
        temp.Bindings.Add(temp24);
        temp1.PlaceholderText = "idState";
        temp1.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp1.Background = temp27;
        temp1.Bindings.Add(temp26);
        temp2.PlaceholderText = "nameCompany";
        temp2.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp2.Background = temp29;
        temp2.Bindings.Add(temp28);
        temp3.PlaceholderText = "emailCompany";
        temp3.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp3.Background = temp31;
        temp3.Bindings.Add(temp30);
        temp4.PlaceholderText = "telCompany";
        temp4.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp4.Background = temp33;
        temp4.Bindings.Add(temp32);
        temp5.PlaceholderText = "dirCompany";
        temp5.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp5.Background = temp35;
        temp5.Bindings.Add(temp34);
        temp36.Width = new Uno.UX.Size(400f, Uno.UX.Unit.Unspecified);
        temp36.Height = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp36.Children.Add(temp37);
        temp37.Text = "Guardar";
        temp37.Alignment = Fuse.Elements.Alignment.Center;
        temp37.LimitHeight = new Uno.UX.Size(50f, Uno.UX.Unit.Points);
        temp37.LimitWidth = new Uno.UX.Size(150f, Uno.UX.Unit.Points);
        global::Fuse.Gestures.Clicked.AddHandler(temp37, temp_eb0.OnEvent);
        temp37.Bindings.Add(temp_eb0);
        __g_nametable.This = this;
        this.Children.Add(temp19);
        this.Children.Add(temp20);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
