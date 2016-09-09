// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\.uno\Login.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Dripdoctors_bundle.h>
#include <_root.Login.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
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
#include <Fuse.Navigation.Router.h>
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
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[6];
static uType* TYPES[15];

namespace g{

// public partial sealed class Login :2
// {
// static Login() :10
static void Login__cctor_4_fn(uType* __type)
{
    Login::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"router"*/]);
}

static void Login_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("goHome");
    ::STRINGS[2] = uString::Const("pages/login.ux");
    ::STRINGS[3] = uString::Const("User");
    ::STRINGS[4] = uString::Const("Password");
    ::STRINGS[5] = uString::Const("Login");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[5] = ::g::Fuse::Visual_typeof();
    ::TYPES[6] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[8] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof());
    ::TYPES[10] = ::g::Fuse::Binding_typeof();
    ::TYPES[11] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[12] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[13] = uObject_typeof();
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Login, __g_nametable1), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::Login, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::Login, temp_eb2), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::Login::__g_static_nametable1_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* Login_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 97;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Login);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Login", options);
    type->SetBase(::g::Fuse::Controls::Page_typeof());
    type->fp_build_ = Login_build;
    type->fp_cctor_ = Login__cctor_4_fn;
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

// public Login(Fuse.Navigation.Router router) :14
void Login__ctor_8_fn(Login* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :20
void Login__InitializeUX_fn(Login* __this)
{
    __this->InitializeUX();
}

// public Login New(Fuse.Navigation.Router router) :14
void Login__New5_fn(::g::Fuse::Navigation::Router* router1, Login** __retval)
{
    *__retval = Login::New5(router1);
}

uSStrong<uArray*> Login::__g_static_nametable1_;

// public Login(Fuse.Navigation.Router router) [instance] :14
void Login::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :20
void Login::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Login::__g_static_nametable1());
    ::g::Fuse::Reactive::JavaScript* temp = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp2 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp3 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp4 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp5 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Text* temp6 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Panel* temp7 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Panel* temp8 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp9 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::StaticSolidColor* temp10 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.0f, 0.7215686f, 0.8313726f, 1.0f));
    ::g::Fuse::Controls::Button* temp11 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Controls::Text* temp12 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Effects::DropShadow* temp13 = ::g::Fuse::Effects::DropShadow::New2();
    temp_eb2 = ::g::Fuse::Reactive::EventBinding::New1(::STRINGS[1/*"goHome"*/]);
    ::g::Fuse::Gestures::WhilePressed* temp14 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp15 = ::g::Fuse::Animations::Scale::New2();
    temp->LineNumber(4);
    temp->FileName(::STRINGS[2/*"pages/login...*/]);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::Dripdoctors_bundle::login347fd4c0()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp2->ItemSpacing(40.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    temp4->Value(::STRINGS[3/*"User"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    temp6->Value(::STRINGS[4/*"Password"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp8->Alignment(10);
    temp8->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    temp8->Padding(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp9->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp9->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp9->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp9->Layer(0);
    temp9->Fill(temp10);
    temp11->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp11->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Fuse::Gestures::Clicked::AddHandler(temp11, uDelegate::New(::TYPES[6/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb2)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Effects()), ::TYPES[7/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Bindings()), ::TYPES[9/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb2);
    temp12->Value(::STRINGS[5/*"Login"*/]);
    temp12->FontSize(20.0f);
    temp12->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp12->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Animators()), ::TYPES[11/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    temp15->Factor(0.9f);
    temp15->Easing(29);
    temp15->EasingBack(28);
    temp15->Duration(0.1);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[14/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
}

// public Login New(Fuse.Navigation.Router router) [static] :14
Login* Login::New5(::g::Fuse::Navigation::Router* router1)
{
    Login* obj1 = (Login*)uNew(Login_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
