//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a RdGen v1.13.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "UnableToDisplayScriptCallStack.Pregenerated.h"



#ifdef _MSC_VER
#pragma warning( push )
#pragma warning( disable:4250 )
#pragma warning( disable:4307 )
#pragma warning( disable:4267 )
#pragma warning( disable:4244 )
#pragma warning( disable:4100 )
#endif

namespace JetBrains {
namespace EditorPlugin {
// companion
// constants
constexpr rd::wstring_view UnableToDisplayScriptCallStack::message;
// initializer
void UnableToDisplayScriptCallStack::initialize()
{
}
// primary ctor
// secondary constructor
// default ctors and dtors
UnableToDisplayScriptCallStack::UnableToDisplayScriptCallStack()
{
    initialize();
}
// reader
UnableToDisplayScriptCallStack UnableToDisplayScriptCallStack::read(rd::SerializationCtx& ctx, rd::Buffer & buffer)
{
    UnableToDisplayScriptCallStack res{};
    return res;
}
// writer
void UnableToDisplayScriptCallStack::write(rd::SerializationCtx& ctx, rd::Buffer& buffer) const
{
}
// virtual init
// identify
// getters
// intern
// equals trait
bool UnableToDisplayScriptCallStack::equals(rd::ISerializable const& object) const
{
    auto const &other = dynamic_cast<UnableToDisplayScriptCallStack const&>(object);
    if (this == &other) return true;
    
    return true;
}
// equality operators
bool operator==(const UnableToDisplayScriptCallStack &lhs, const UnableToDisplayScriptCallStack &rhs) {
    if (lhs.type_name() != rhs.type_name()) return false;
    return lhs.equals(rhs);
}
bool operator!=(const UnableToDisplayScriptCallStack &lhs, const UnableToDisplayScriptCallStack &rhs){
    return !(lhs == rhs);
}
// hash code trait
size_t UnableToDisplayScriptCallStack::hashCode() const noexcept
{
    size_t __r = 0;
    return __r;
}
// type name trait
std::string UnableToDisplayScriptCallStack::type_name() const
{
    return "UnableToDisplayScriptCallStack";
}
// static type name trait
std::string UnableToDisplayScriptCallStack::static_type_name()
{
    return "UnableToDisplayScriptCallStack";
}
// polymorphic to string
std::string UnableToDisplayScriptCallStack::toString() const
{
    std::string res = "UnableToDisplayScriptCallStack\n";
    return res;
}
// external to string
std::string to_string(const UnableToDisplayScriptCallStack & value)
{
    return value.toString();
}
}
}

#ifdef _MSC_VER
#pragma warning( pop )
#endif

