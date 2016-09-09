// This file was generated based on C:\Users\rodriguez\workspace\FUSE\apps-fuse\Dripdoctors\.uno\Landing.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Dripdoctors_bundle.h>
#include <_root.Dripdoctors_FuseControlsImage_Width_Property.h>
#include <_root.Landing.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Navigation.ActivatingAnimation.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
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
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[5];
static uType* TYPES[13];

namespace g{

// public partial sealed class Landing :2
// {
// static Landing() :13
static void Landing__cctor_4_fn(uType* __type)
{
    Landing::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"landing"*/]);
    Landing::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Width"*/]);
    Landing::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"landing"*/]);
    Landing::logoDripDoctors_ = ::g::Fuse::Resources::FileImageSource::New2();
    ::g::Uno::UX::Resource::SetGlobalKey(Landing::logoDripDoctors_, ::STRINGS[3/*"logoDripDoc...*/]);
    uPtr(Landing::logoDripDoctors_)->File(::g::Uno::UX::BundleFileSource::New1(::g::Dripdoctors_bundle::dripDoctors48515d95()));
}

static void Landing_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("landing");
    ::STRINGS[2] = uString::Const("Width");
    ::STRINGS[3] = uString::Const("logoDripDoctors");
    ::STRINGS[4] = uString::Const("pages/landing.ux");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = uObject_typeof();
    ::TYPES[2] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[3] = ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof());
    ::TYPES[4] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof());
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof());
    ::TYPES[6] = ::g::Fuse::Node_typeof();
    ::TYPES[7] = ::g::Fuse::Resources::ImageSource_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Effects::Effect_typeof());
    ::TYPES[9] = ::g::Fuse::Effects::Effect_typeof();
    ::TYPES[10] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof());
    ::TYPES[11] = ::g::Fuse::Animations::Animator_typeof();
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof());
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
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::Landing, __g_nametable1), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::Landing, landing), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof()), offsetof(::g::Landing, landing_Width_inst), 0,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(::g::Landing, router), 0,
        ::g::Uno::String_typeof()->Array(), (uintptr_t)&::g::Landing::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Landing::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Landing::__selector1_, uFieldFlagsStatic,
        ::g::Fuse::Resources::FileImageSource_typeof(), (uintptr_t)&::g::Landing::logoDripDoctors_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Control_type* Landing_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 101;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(Landing);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("Landing", options);
    type->SetBase(::g::Fuse::Controls::Page_typeof());
    type->fp_build_ = Landing_build;
    type->fp_cctor_ = Landing__cctor_4_fn;
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

// public Landing(Fuse.Navigation.Router router) :20
void Landing__ctor_8_fn(Landing* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :26
void Landing__InitializeUX_fn(Landing* __this)
{
    __this->InitializeUX();
}

// public Landing New(Fuse.Navigation.Router router) :20
void Landing__New5_fn(::g::Fuse::Navigation::Router* router1, Landing** __retval)
{
    *__retval = Landing::New5(router1);
}

uSStrong<uArray*> Landing::__g_static_nametable1_;
::g::Uno::UX::Selector Landing::__selector0_;
::g::Uno::UX::Selector Landing::__selector1_;
uSStrong< ::g::Fuse::Resources::FileImageSource*> Landing::logoDripDoctors_;

// public Landing(Fuse.Navigation.Router router) [instance] :20
void Landing::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :26
void Landing::InitializeUX()
{
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, Landing::__g_static_nametable1());
    landing = ::g::Fuse::Controls::Image::New3();
    landing_Width_inst = ::g::Dripdoctors_FuseControlsImage_Width_Property::New1(landing, Landing::__selector0());
    ::g::Fuse::Reactive::JavaScript* temp = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::DockPanel* temp1 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Effects::DropShadow* temp2 = ::g::Fuse::Effects::DropShadow::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp3 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp4 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[4/*Fuse.Animations.Change<Uno.UX.Size>*/], landing_Width_inst);
    temp->LineNumber(10);
    temp->FileName(::STRINGS[4/*"pages/landi...*/]);
    temp->File(::g::Uno::UX::BundleFileSource::New1(::g::Dripdoctors_bundle::landingaf6564a1()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), landing);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    uPtr(landing)->StretchMode(6);
    uPtr(landing)->Width(::g::Uno::UX::Size__New1(10.0f, 1));
    uPtr(landing)->Alignment(8);
    uPtr(landing)->Name(Landing::__selector1());
    uPtr(landing)->Source(Landing::logoDripDoctors());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(landing)->Effects()), ::TYPES[8/*Uno.Collections.ICollection<Fuse.Effects.Effect>*/]), temp2);
    temp2->Size(10.0f);
    temp2->Angle(90.0f);
    temp2->Distance(5.0f);
    temp2->Spread(0.4f);
    temp2->Color(::g::Uno::Float4__New2(0.4588235f, 0.4588235f, 0.4588235f, 1.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Animators()), ::TYPES[10/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp4);
    ::g::Fuse::Animations::Change__set_Value_fn(temp4, uCRef(::g::Uno::UX::Size__New1(270.0f, 1)));
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[12/*Uno.Collections.ICollection<object>*/]), landing);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
}

// public Landing New(Fuse.Navigation.Router router) [static] :20
Landing* Landing::New5(::g::Fuse::Navigation::Router* router1)
{
    Landing* obj1 = (Landing*)uNew(Landing_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
