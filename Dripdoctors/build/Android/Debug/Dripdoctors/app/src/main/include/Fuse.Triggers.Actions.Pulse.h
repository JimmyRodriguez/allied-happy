// This file was generated based on C:\ProgramData\Uno\Packages\Fuse.Triggers\0.32.14\Actions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Pulse;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Pulse :539
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof();
void Pulse__Perform_fn(Pulse* __this, ::g::Fuse::Node* target);
void Pulse__get_Target_fn(Pulse* __this, uObject** __retval);
void Pulse__set_Target_fn(Pulse* __this, uObject* value);

struct Pulse : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong<uObject*> _Target;

    uObject* Target();
    void Target(uObject* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
