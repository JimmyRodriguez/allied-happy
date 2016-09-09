// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\.uno\Home.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Dripdoctors_bundle.h>
#include <_root.Dripdoctors_FuseControlsText_Value_Property.h>
#include <_root.Home.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.BottomBarBackground.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.StatusBarBackground.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.DataBinding-1.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[13];
static uType* TYPES[18];

namespace g{

// public partial sealed class Home :2
// {
// static Home() :14
static void Home__cctor_4_fn(uType* __type)
{
    Home::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"router"*/]);
    Home::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Value"*/]);
}

static void Home_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("Value");
    ::STRINGS[2] = uString::Const("immediateLocation");
    ::STRINGS[3] = uString::Const("timeoutLocation");
    ::STRINGS[4] = uString::Const("continuousLocation");
    ::STRINGS[5] = uString::Const("startContinuousListener");
    ::STRINGS[6] = uString::Const("stopContinuousListener");
    ::STRINGS[7] = uString::Const("pages/home.ux");
    ::STRINGS[8] = uString::Const("Immediate:");
    ::STRINGS[9] = uString::Const("Timeout:");
    ::STRINGS[10] = uString::Const("Continuous:");
    ::STRINGS[11] = uString::Const("Start Service");
    ::STRINGS[12] = uString::Const("Stop Service");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[2] = ::g::Fuse::Reactive::DataBinding_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[4] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[9] = ::g::Fuse::Binding_typeof();
    ::TYPES[10] = ::g::Fuse::Visual_typeof();
    ::TYPES[11] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[13] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[15] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[16] = uObject_typeof();
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof()), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(93,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Home, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::Home, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Home, temp_eb0), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Home, temp_eb1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Home, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Home, temp1_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Home, temp2_Value_inst), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::Home::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Home::__selector0_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* Home_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 102;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Home);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Home", options);
    type->SetBase(::g::Fuse::Controls::Page_typeof());
    type->fp_build_ = Home_build;
    type->fp_cctor_ = Home__cctor_4_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public Home(Fuse.Navigation.Router router) :18
void Home__ctor_8_fn(Home* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :24
void Home__InitializeUX_fn(Home* __this)
{
    __this->InitializeUX();
}

// public Home New(Fuse.Navigation.Router router) :18
void Home__New5_fn(::g::Fuse::Navigation::Router* router1, Home** __retval)
{
    *__retval = Home::New5(router1);
}

uSStrong<uArray*> Home::__g_static_nametable1_;
::g::Uno::UX::Selector Home::__selector0_;

// public Home(Fuse.Navigation.Router router) [instance] :18
void Home::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :24
void Home::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Home::__g_static_nametable1());
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::Dripdoctors_FuseControlsText_Value_Property::New1(temp, Home::__selector0());
    ::g::Fuse::Controls::Text* temp1 = ::g::Fuse::Controls::Text::New3();
    temp1_Value_inst = ::g::Dripdoctors_FuseControlsText_Value_Property::New1(temp1, Home::__selector0());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::Dripdoctors_FuseControlsText_Value_Property::New1(temp2, Home::__selector0());
    ::g::Fuse::Controls::StatusBarBackground* temp3 = ::g::Fuse::Controls::StatusBarBackground::New3();
    ::g::Fuse::Controls::BottomBarBackground* temp4 = ::g::Fuse::Controls::BottomBarBackground::New3();
    ::g::Fuse::Reactive::JavaScript* temp5 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp6 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::StackPanel* temp8 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp9 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp10 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp11 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp12 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], temp_Value_inst, ::STRINGS[2/*"immediateLo...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp13 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8784314f, 0.9686275f, 0.9803922f, 1.0f));
    ::g::Fuse::Controls::Panel* temp14 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp15 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp16 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp17 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], temp1_Value_inst, ::STRINGS[3/*"timeoutLoca...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp18 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.6980392f, 0.9215686f, 0.9490196f, 1.0f));
    ::g::Fuse::Controls::Panel* temp19 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp20 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Text* temp21 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Reactive::DataBinding* temp22 = (::g::Fuse::Reactive::DataBinding*)::g::Fuse::Reactive::DataBinding::New1(::TYPES[2/*Fuse.Reactive.DataBinding<string>*/], temp2_Value_inst, ::STRINGS[4/*"continuousL...*/]);
    ::g::Fuse::Drawing::StaticSolidColor* temp23 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.5019608f, 0.8705882f, 0.9176471f, 1.0f));
    ::g::Fuse::Controls::Panel* temp24 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp25 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp26 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Button* temp27 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Effects::DropShadow* temp28 = ::g::Fuse::Effects::DropShadow::New2();
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[5/*"startContin...*/]);
    ::g::Fuse::Controls::Rectangle* temp29 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp30 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Gestures::WhilePressed* temp31 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp32 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::Panel* temp33 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp34 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp35 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    ::g::Fuse::Controls::Button* temp36 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Effects::DropShadow* temp37 = ::g::Fuse::Effects::DropShadow::New2();
    temp_eb1 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[6/*"stopContinu...*/]);
    ::g::Fuse::Gestures::WhilePressed* temp38 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp39 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Controls::DockPanel::SetDock(temp3, 2);
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 3);
    temp5->LineNumber(8);
    temp5->FileName(::STRINGS[7/*"pages/home.ux"*/]);
    temp5->File(::g::Uno::UX::BundleFileSource::New1(::g::Dripdoctors_bundle::geolocation242c8c14()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp6->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    temp7->Alignment(10);
    temp7->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp8->ItemSpacing(40.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp24);
    temp9->Background(temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    temp10->RowCount(2);
    temp10->ColumnCount(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp11->Value(::STRINGS[8/*"Immediate:"*/]);
    temp->FontSize(11.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp14->Background(temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    temp15->RowCount(2);
    temp15->ColumnCount(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp16->Value(::STRINGS[9/*"Timeout:"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp17);
    temp19->Background(temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp21->Value(::STRINGS[10/*"Continuous:"*/]);
    temp2->FontSize(11.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp24->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp25);
    temp25->RowCount(1);
    temp25->ColumnCount(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp25->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    temp26->Alignment(10);
    temp26->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp26->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
    temp27->Text(::STRINGS[11/*"Start Service"*/]);
    temp27->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp27->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp27, uDelegate::New(::TYPES[11/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Effects()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), temp28);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
    temp29->CornerRadius(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    temp29->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp29->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp29->Layer(0);
    temp29->Fill(temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp32);
    temp32->Factor(0.9f);
    temp32->Easing(29);
    temp32->EasingBack(28);
    temp32->Duration(0.1);
    temp33->Alignment(10);
    temp33->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp33->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    temp34->CornerRadius(::g::Uno::Float4__New2(8.0f, 8.0f, 8.0f, 8.0f));
    temp34->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp34->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp34->Layer(0);
    temp34->Fill(temp35);
    temp36->Text(::STRINGS[12/*"Stop Service"*/]);
    temp36->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp36->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp36, uDelegate::New(::TYPES[11/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Effects()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), temp37);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp36->Bindings()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Animators()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp39);
    temp39->Factor(0.9f);
    temp39->Easing(29);
    temp39->EasingBack(28);
    temp39->Duration(0.1);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[17/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
}

// public Home New(Fuse.Navigation.Router router) [static] :18
Home* Home::New5(::g::Fuse::Navigation::Router* router1)
{
    Home* obj1 = (Home*)uNew(Home_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
