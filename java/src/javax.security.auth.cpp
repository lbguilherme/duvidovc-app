#include "java-core.hpp"
#include <memory>
#include "java.lang.Class.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.security.AccessControlContext.hpp"
#include "java.security.Permission.hpp"
#include "java.security.PrivilegedAction.hpp"
#include "java.security.PrivilegedExceptionAction.hpp"
#include "java.security.ProtectionDomain.hpp"
#include "java.util.Set.hpp"
#include "javax.security.auth.AuthPermission.hpp"
#include "javax.security.auth.DestroyFailedException.hpp"
#include "javax.security.auth.Destroyable.hpp"
#include "javax.security.auth.PrivateCredentialPermission.hpp"
#include "javax.security.auth.Subject.hpp"
#include "javax.security.auth.SubjectDomainCombiner.hpp"

jclass javax::security::auth::DestroyFailedException::_class = nullptr;
jclass javax::security::auth::Subject::_class = nullptr;
jclass javax::security::auth::Destroyable::_class = nullptr;
jclass javax::security::auth::AuthPermission::_class = nullptr;
jclass javax::security::auth::SubjectDomainCombiner::_class = nullptr;
jclass javax::security::auth::PrivateCredentialPermission::_class = nullptr;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::DestroyFailedException::DestroyFailedException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::security::auth::DestroyFailedException::_class) ::javax::security::auth::DestroyFailedException::_class = java::fetch_class("javax/security/auth/DestroyFailedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::DestroyFailedException::DestroyFailedException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::javax::security::auth::DestroyFailedException::_class) ::javax::security::auth::DestroyFailedException::_class = java::fetch_class("javax/security/auth/DestroyFailedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::Subject::Subject() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::Subject::Subject(bool arg0, const ::java::util::Set& arg1, const ::java::util::Set& arg2, const ::java::util::Set& arg3) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ZLjava/util/Set;Ljava/util/Set;Ljava/util/Set;)V");
    bool _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3);
}
#pragma GCC diagnostic pop

::java::lang::Object javax::security::auth::Subject::doAs(const ::javax::security::auth::Subject& arg0, const ::java::security::PrivilegedAction& arg1){
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doAs", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object javax::security::auth::Subject::doAsPrivileged(const ::javax::security::auth::Subject& arg0, const ::java::security::PrivilegedAction& arg1, const ::java::security::AccessControlContext& arg2){
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doAsPrivileged", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object javax::security::auth::Subject::doAs(const ::javax::security::auth::Subject& arg0, const ::java::security::PrivilegedExceptionAction& arg1){
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doAs", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedExceptionAction;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object javax::security::auth::Subject::doAsPrivileged(const ::javax::security::auth::Subject& arg0, const ::java::security::PrivilegedExceptionAction& arg1, const ::java::security::AccessControlContext& arg2){
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "doAsPrivileged", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool javax::security::auth::Subject::equals(const ::java::lang::Object& arg0) const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Set javax::security::auth::Subject::getPrincipals() const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrincipals", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set javax::security::auth::Subject::getPrincipals(const ::java::lang::Class& arg0) const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrincipals", "(Ljava/lang/Class;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set javax::security::auth::Subject::getPrivateCredentials() const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrivateCredentials", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set javax::security::auth::Subject::getPrivateCredentials(const ::java::lang::Class& arg0) const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrivateCredentials", "(Ljava/lang/Class;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set javax::security::auth::Subject::getPublicCredentials() const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicCredentials", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set javax::security::auth::Subject::getPublicCredentials(const ::java::lang::Class& arg0) const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicCredentials", "(Ljava/lang/Class;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

int32_t javax::security::auth::Subject::hashCode() const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void javax::security::auth::Subject::setReadOnly() const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "setReadOnly", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool javax::security::auth::Subject::isReadOnly() const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadOnly", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String javax::security::auth::Subject::toString() const {
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::javax::security::auth::Subject javax::security::auth::Subject::getSubject(const ::java::security::AccessControlContext& arg0){
    if (!::javax::security::auth::Subject::_class) ::javax::security::auth::Subject::_class = java::fetch_class("javax/security/auth/Subject");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getSubject", "(Ljava/security/AccessControlContext;)Ljavax/security/auth/Subject;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::javax::security::auth::Subject _ret(ret);
    return _ret;
}

void javax::security::auth::Destroyable::destroy() const {
    if (!::javax::security::auth::Destroyable::_class) ::javax::security::auth::Destroyable::_class = java::fetch_class("javax/security/auth/Destroyable");
    static jmethodID mid = java::jni->GetMethodID(_class, "destroy", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool javax::security::auth::Destroyable::isDestroyed() const {
    if (!::javax::security::auth::Destroyable::_class) ::javax::security::auth::Destroyable::_class = java::fetch_class("javax/security/auth/Destroyable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDestroyed", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::AuthPermission::AuthPermission(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::javax::security::auth::AuthPermission::_class) ::javax::security::auth::AuthPermission::_class = java::fetch_class("javax/security/auth/AuthPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::AuthPermission::AuthPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::javax::security::auth::AuthPermission::_class) ::javax::security::auth::AuthPermission::_class = java::fetch_class("javax/security/auth/AuthPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String javax::security::auth::AuthPermission::getActions() const {
    if (!::javax::security::auth::AuthPermission::_class) ::javax::security::auth::AuthPermission::_class = java::fetch_class("javax/security/auth/AuthPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool javax::security::auth::AuthPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::javax::security::auth::AuthPermission::_class) ::javax::security::auth::AuthPermission::_class = java::fetch_class("javax/security/auth/AuthPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::SubjectDomainCombiner::SubjectDomainCombiner(const ::javax::security::auth::Subject& arg0) : ::java::lang::Object((jobject)0), ::java::security::DomainCombiner((jobject)0) {
    if (!::javax::security::auth::SubjectDomainCombiner::_class) ::javax::security::auth::SubjectDomainCombiner::_class = java::fetch_class("javax/security/auth/SubjectDomainCombiner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljavax/security/auth/Subject;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::javax::security::auth::Subject javax::security::auth::SubjectDomainCombiner::getSubject() const {
    if (!::javax::security::auth::SubjectDomainCombiner::_class) ::javax::security::auth::SubjectDomainCombiner::_class = java::fetch_class("javax/security/auth/SubjectDomainCombiner");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSubject", "()Ljavax/security/auth/Subject;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::javax::security::auth::Subject _ret(ret);
    return _ret;
}

std::vector< ::java::security::ProtectionDomain> javax::security::auth::SubjectDomainCombiner::combine(const std::vector< ::java::security::ProtectionDomain>& arg0, const std::vector< ::java::security::ProtectionDomain>& arg1) const {
    if (!::javax::security::auth::SubjectDomainCombiner::_class) ::javax::security::auth::SubjectDomainCombiner::_class = java::fetch_class("javax/security/auth/SubjectDomainCombiner");
    static jmethodID mid = java::jni->GetMethodID(_class, "combine", "([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;");
    unsigned arg0s = arg0.size();
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::security::ProtectionDomain::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::security::ProtectionDomain& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::security::ProtectionDomain::_class) ::java::security::ProtectionDomain::_class = java::fetch_class("java/security/ProtectionDomain");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::security::ProtectionDomain::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::security::ProtectionDomain& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::security::ProtectionDomain> _ret(rets, ::java::security::ProtectionDomain((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::security::ProtectionDomain retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::javax::security::auth::PrivateCredentialPermission::PrivateCredentialPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::javax::security::auth::PrivateCredentialPermission::_class) ::javax::security::auth::PrivateCredentialPermission::_class = java::fetch_class("javax/security/auth/PrivateCredentialPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

std::vector< ::java::lang::String> javax::security::auth::PrivateCredentialPermission::getPrincipals() const {
    if (!::javax::security::auth::PrivateCredentialPermission::_class) ::javax::security::auth::PrivateCredentialPermission::_class = java::fetch_class("javax/security/auth/PrivateCredentialPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrincipals", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String javax::security::auth::PrivateCredentialPermission::getCredentialClass() const {
    if (!::javax::security::auth::PrivateCredentialPermission::_class) ::javax::security::auth::PrivateCredentialPermission::_class = java::fetch_class("javax/security/auth/PrivateCredentialPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCredentialClass", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String javax::security::auth::PrivateCredentialPermission::getActions() const {
    if (!::javax::security::auth::PrivateCredentialPermission::_class) ::javax::security::auth::PrivateCredentialPermission::_class = java::fetch_class("javax/security/auth/PrivateCredentialPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool javax::security::auth::PrivateCredentialPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::javax::security::auth::PrivateCredentialPermission::_class) ::javax::security::auth::PrivateCredentialPermission::_class = java::fetch_class("javax/security/auth/PrivateCredentialPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

