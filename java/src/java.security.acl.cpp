#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.security.Principal.hpp"
#include "java.security.acl.Acl.hpp"
#include "java.security.acl.AclEntry.hpp"
#include "java.security.acl.AclNotFoundException.hpp"
#include "java.security.acl.Group.hpp"
#include "java.security.acl.LastOwnerException.hpp"
#include "java.security.acl.NotOwnerException.hpp"
#include "java.security.acl.Owner.hpp"
#include "java.security.acl.Permission.hpp"
#include "java.util.Enumeration.hpp"

jclass java::security::acl::NotOwnerException::_class = nullptr;
jclass java::security::acl::Permission::_class = nullptr;
jclass java::security::acl::Acl::_class = nullptr;
jclass java::security::acl::Group::_class = nullptr;
jclass java::security::acl::LastOwnerException::_class = nullptr;
jclass java::security::acl::AclEntry::_class = nullptr;
jclass java::security::acl::AclNotFoundException::_class = nullptr;
jclass java::security::acl::Owner::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::acl::NotOwnerException::NotOwnerException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::acl::NotOwnerException::_class) ::java::security::acl::NotOwnerException::_class = java::fetch_class("java/security/acl/NotOwnerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool java::security::acl::Permission::equals(const ::java::lang::Object& arg0) const {
    if (!::java::security::acl::Permission::_class) ::java::security::acl::Permission::_class = java::fetch_class("java/security/acl/Permission");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String java::security::acl::Permission::toString() const {
    if (!::java::security::acl::Permission::_class) ::java::security::acl::Permission::_class = java::fetch_class("java/security/acl/Permission");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::security::acl::Acl::setName(const ::java::security::Principal& arg0, const ::java::lang::String& arg1) const {
    if (!::java::security::acl::Acl::_class) ::java::security::acl::Acl::_class = java::fetch_class("java/security/acl/Acl");
    static jmethodID mid = java::jni->GetMethodID(_class, "setName", "(Ljava/security/Principal;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::security::acl::Acl::getName() const {
    if (!::java::security::acl::Acl::_class) ::java::security::acl::Acl::_class = java::fetch_class("java/security/acl/Acl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::acl::Acl::addEntry(const ::java::security::Principal& arg0, const ::java::security::acl::AclEntry& arg1) const {
    if (!::java::security::acl::Acl::_class) ::java::security::acl::Acl::_class = java::fetch_class("java/security/acl/Acl");
    static jmethodID mid = java::jni->GetMethodID(_class, "addEntry", "(Ljava/security/Principal;Ljava/security/acl/AclEntry;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::security::acl::Acl::removeEntry(const ::java::security::Principal& arg0, const ::java::security::acl::AclEntry& arg1) const {
    if (!::java::security::acl::Acl::_class) ::java::security::acl::Acl::_class = java::fetch_class("java/security/acl/Acl");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeEntry", "(Ljava/security/Principal;Ljava/security/acl/AclEntry;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::util::Enumeration java::security::acl::Acl::getPermissions(const ::java::security::Principal& arg0) const {
    if (!::java::security::acl::Acl::_class) ::java::security::acl::Acl::_class = java::fetch_class("java/security/acl/Acl");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPermissions", "(Ljava/security/Principal;)Ljava/util/Enumeration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::util::Enumeration java::security::acl::Acl::entries() const {
    if (!::java::security::acl::Acl::_class) ::java::security::acl::Acl::_class = java::fetch_class("java/security/acl/Acl");
    static jmethodID mid = java::jni->GetMethodID(_class, "entries", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

bool java::security::acl::Acl::checkPermission(const ::java::security::Principal& arg0, const ::java::security::acl::Permission& arg1) const {
    if (!::java::security::acl::Acl::_class) ::java::security::acl::Acl::_class = java::fetch_class("java/security/acl/Acl");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPermission", "(Ljava/security/Principal;Ljava/security/acl/Permission;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String java::security::acl::Acl::toString() const {
    if (!::java::security::acl::Acl::_class) ::java::security::acl::Acl::_class = java::fetch_class("java/security/acl/Acl");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::security::acl::Group::addMember(const ::java::security::Principal& arg0) const {
    if (!::java::security::acl::Group::_class) ::java::security::acl::Group::_class = java::fetch_class("java/security/acl/Group");
    static jmethodID mid = java::jni->GetMethodID(_class, "addMember", "(Ljava/security/Principal;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::security::acl::Group::removeMember(const ::java::security::Principal& arg0) const {
    if (!::java::security::acl::Group::_class) ::java::security::acl::Group::_class = java::fetch_class("java/security/acl/Group");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeMember", "(Ljava/security/Principal;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::security::acl::Group::isMember(const ::java::security::Principal& arg0) const {
    if (!::java::security::acl::Group::_class) ::java::security::acl::Group::_class = java::fetch_class("java/security/acl/Group");
    static jmethodID mid = java::jni->GetMethodID(_class, "isMember", "(Ljava/security/Principal;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Enumeration java::security::acl::Group::members() const {
    if (!::java::security::acl::Group::_class) ::java::security::acl::Group::_class = java::fetch_class("java/security/acl/Group");
    static jmethodID mid = java::jni->GetMethodID(_class, "members", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::acl::LastOwnerException::LastOwnerException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::acl::LastOwnerException::_class) ::java::security::acl::LastOwnerException::_class = java::fetch_class("java/security/acl/LastOwnerException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool java::security::acl::AclEntry::setPrincipal(const ::java::security::Principal& arg0) const {
    if (!::java::security::acl::AclEntry::_class) ::java::security::acl::AclEntry::_class = java::fetch_class("java/security/acl/AclEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrincipal", "(Ljava/security/Principal;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::security::Principal java::security::acl::AclEntry::getPrincipal() const {
    if (!::java::security::acl::AclEntry::_class) ::java::security::acl::AclEntry::_class = java::fetch_class("java/security/acl/AclEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrincipal", "()Ljava/security/Principal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::security::Principal _ret(ret);
    return _ret;
}

void java::security::acl::AclEntry::setNegativePermissions() const {
    if (!::java::security::acl::AclEntry::_class) ::java::security::acl::AclEntry::_class = java::fetch_class("java/security/acl/AclEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNegativePermissions", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::security::acl::AclEntry::isNegative() const {
    if (!::java::security::acl::AclEntry::_class) ::java::security::acl::AclEntry::_class = java::fetch_class("java/security/acl/AclEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "isNegative", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::security::acl::AclEntry::addPermission(const ::java::security::acl::Permission& arg0) const {
    if (!::java::security::acl::AclEntry::_class) ::java::security::acl::AclEntry::_class = java::fetch_class("java/security/acl/AclEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "addPermission", "(Ljava/security/acl/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::security::acl::AclEntry::removePermission(const ::java::security::acl::Permission& arg0) const {
    if (!::java::security::acl::AclEntry::_class) ::java::security::acl::AclEntry::_class = java::fetch_class("java/security/acl/AclEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "removePermission", "(Ljava/security/acl/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::security::acl::AclEntry::checkPermission(const ::java::security::acl::Permission& arg0) const {
    if (!::java::security::acl::AclEntry::_class) ::java::security::acl::AclEntry::_class = java::fetch_class("java/security/acl/AclEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "checkPermission", "(Ljava/security/acl/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Enumeration java::security::acl::AclEntry::permissions() const {
    if (!::java::security::acl::AclEntry::_class) ::java::security::acl::AclEntry::_class = java::fetch_class("java/security/acl/AclEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "permissions", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::lang::String java::security::acl::AclEntry::toString() const {
    if (!::java::security::acl::AclEntry::_class) ::java::security::acl::AclEntry::_class = java::fetch_class("java/security/acl/AclEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object java::security::acl::AclEntry::clone() const {
    if (!::java::security::acl::AclEntry::_class) ::java::security::acl::AclEntry::_class = java::fetch_class("java/security/acl/AclEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::security::acl::AclNotFoundException::AclNotFoundException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::security::acl::AclNotFoundException::_class) ::java::security::acl::AclNotFoundException::_class = java::fetch_class("java/security/acl/AclNotFoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool java::security::acl::Owner::addOwner(const ::java::security::Principal& arg0, const ::java::security::Principal& arg1) const {
    if (!::java::security::acl::Owner::_class) ::java::security::acl::Owner::_class = java::fetch_class("java/security/acl/Owner");
    static jmethodID mid = java::jni->GetMethodID(_class, "addOwner", "(Ljava/security/Principal;Ljava/security/Principal;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::security::acl::Owner::deleteOwner(const ::java::security::Principal& arg0, const ::java::security::Principal& arg1) const {
    if (!::java::security::acl::Owner::_class) ::java::security::acl::Owner::_class = java::fetch_class("java/security/acl/Owner");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteOwner", "(Ljava/security/Principal;Ljava/security/Principal;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::security::acl::Owner::isOwner(const ::java::security::Principal& arg0) const {
    if (!::java::security::acl::Owner::_class) ::java::security::acl::Owner::_class = java::fetch_class("java/security/acl/Owner");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOwner", "(Ljava/security/Principal;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

