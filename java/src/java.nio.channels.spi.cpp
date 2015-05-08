#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.nio.channels.Channel.hpp"
#include "java.nio.channels.DatagramChannel.hpp"
#include "java.nio.channels.Pipe.hpp"
#include "java.nio.channels.SelectableChannel.hpp"
#include "java.nio.channels.SelectionKey.hpp"
#include "java.nio.channels.Selector.hpp"
#include "java.nio.channels.ServerSocketChannel.hpp"
#include "java.nio.channels.SocketChannel.hpp"
#include "java.nio.channels.spi.AbstractInterruptibleChannel.hpp"
#include "java.nio.channels.spi.AbstractSelectableChannel.hpp"
#include "java.nio.channels.spi.AbstractSelectionKey.hpp"
#include "java.nio.channels.spi.AbstractSelector.hpp"
#include "java.nio.channels.spi.SelectorProvider.hpp"

jclass java::nio::channels::spi::AbstractSelectionKey::_class = nullptr;
jclass java::nio::channels::spi::SelectorProvider::_class = nullptr;
jclass java::nio::channels::spi::AbstractSelectableChannel::_class = nullptr;
jclass java::nio::channels::spi::AbstractInterruptibleChannel::_class = nullptr;
jclass java::nio::channels::spi::AbstractSelector::_class = nullptr;

bool java::nio::channels::spi::AbstractSelectionKey::isValid() const {
    if (!::java::nio::channels::spi::AbstractSelectionKey::_class) ::java::nio::channels::spi::AbstractSelectionKey::_class = java::fetch_class("java/nio/channels/spi/AbstractSelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValid", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::nio::channels::spi::AbstractSelectionKey::cancel() const {
    if (!::java::nio::channels::spi::AbstractSelectionKey::_class) ::java::nio::channels::spi::AbstractSelectionKey::_class = java::fetch_class("java/nio/channels/spi/AbstractSelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::nio::channels::spi::SelectorProvider java::nio::channels::spi::SelectorProvider::provider(){
    if (!::java::nio::channels::spi::SelectorProvider::_class) ::java::nio::channels::spi::SelectorProvider::_class = java::fetch_class("java/nio/channels/spi/SelectorProvider");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "provider", "()Ljava/nio/channels/spi/SelectorProvider;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::nio::channels::spi::SelectorProvider _ret(ret);
    return _ret;
}

::java::nio::channels::DatagramChannel java::nio::channels::spi::SelectorProvider::openDatagramChannel() const {
    if (!::java::nio::channels::spi::SelectorProvider::_class) ::java::nio::channels::spi::SelectorProvider::_class = java::fetch_class("java/nio/channels/spi/SelectorProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openDatagramChannel", "()Ljava/nio/channels/DatagramChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::DatagramChannel _ret(ret);
    return _ret;
}

::java::nio::channels::Pipe java::nio::channels::spi::SelectorProvider::openPipe() const {
    if (!::java::nio::channels::spi::SelectorProvider::_class) ::java::nio::channels::spi::SelectorProvider::_class = java::fetch_class("java/nio/channels/spi/SelectorProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openPipe", "()Ljava/nio/channels/Pipe;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::Pipe _ret(ret);
    return _ret;
}

::java::nio::channels::spi::AbstractSelector java::nio::channels::spi::SelectorProvider::openSelector() const {
    if (!::java::nio::channels::spi::SelectorProvider::_class) ::java::nio::channels::spi::SelectorProvider::_class = java::fetch_class("java/nio/channels/spi/SelectorProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openSelector", "()Ljava/nio/channels/spi/AbstractSelector;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::spi::AbstractSelector _ret(ret);
    return _ret;
}

::java::nio::channels::ServerSocketChannel java::nio::channels::spi::SelectorProvider::openServerSocketChannel() const {
    if (!::java::nio::channels::spi::SelectorProvider::_class) ::java::nio::channels::spi::SelectorProvider::_class = java::fetch_class("java/nio/channels/spi/SelectorProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openServerSocketChannel", "()Ljava/nio/channels/ServerSocketChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::ServerSocketChannel _ret(ret);
    return _ret;
}

::java::nio::channels::SocketChannel java::nio::channels::spi::SelectorProvider::openSocketChannel() const {
    if (!::java::nio::channels::spi::SelectorProvider::_class) ::java::nio::channels::spi::SelectorProvider::_class = java::fetch_class("java/nio/channels/spi/SelectorProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "openSocketChannel", "()Ljava/nio/channels/SocketChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::SocketChannel _ret(ret);
    return _ret;
}

::java::nio::channels::Channel java::nio::channels::spi::SelectorProvider::inheritedChannel() const {
    if (!::java::nio::channels::spi::SelectorProvider::_class) ::java::nio::channels::spi::SelectorProvider::_class = java::fetch_class("java/nio/channels/spi/SelectorProvider");
    static jmethodID mid = java::jni->GetMethodID(_class, "inheritedChannel", "()Ljava/nio/channels/Channel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::Channel _ret(ret);
    return _ret;
}

::java::nio::channels::spi::SelectorProvider java::nio::channels::spi::AbstractSelectableChannel::provider() const {
    if (!::java::nio::channels::spi::AbstractSelectableChannel::_class) ::java::nio::channels::spi::AbstractSelectableChannel::_class = java::fetch_class("java/nio/channels/spi/AbstractSelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "provider", "()Ljava/nio/channels/spi/SelectorProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::spi::SelectorProvider _ret(ret);
    return _ret;
}

bool java::nio::channels::spi::AbstractSelectableChannel::isRegistered() const {
    if (!::java::nio::channels::spi::AbstractSelectableChannel::_class) ::java::nio::channels::spi::AbstractSelectableChannel::_class = java::fetch_class("java/nio/channels/spi/AbstractSelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRegistered", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::channels::SelectionKey java::nio::channels::spi::AbstractSelectableChannel::keyFor(const ::java::nio::channels::Selector& arg0) const {
    if (!::java::nio::channels::spi::AbstractSelectableChannel::_class) ::java::nio::channels::spi::AbstractSelectableChannel::_class = java::fetch_class("java/nio/channels/spi/AbstractSelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyFor", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::channels::SelectionKey _ret(ret);
    return _ret;
}

::java::nio::channels::SelectionKey java::nio::channels::spi::AbstractSelectableChannel::register_(const ::java::nio::channels::Selector& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::java::nio::channels::spi::AbstractSelectableChannel::_class) ::java::nio::channels::spi::AbstractSelectableChannel::_class = java::fetch_class("java/nio/channels/spi/AbstractSelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::channels::SelectionKey _ret(ret);
    return _ret;
}

bool java::nio::channels::spi::AbstractSelectableChannel::isBlocking() const {
    if (!::java::nio::channels::spi::AbstractSelectableChannel::_class) ::java::nio::channels::spi::AbstractSelectableChannel::_class = java::fetch_class("java/nio/channels/spi/AbstractSelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBlocking", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::nio::channels::spi::AbstractSelectableChannel::blockingLock() const {
    if (!::java::nio::channels::spi::AbstractSelectableChannel::_class) ::java::nio::channels::spi::AbstractSelectableChannel::_class = java::fetch_class("java/nio/channels/spi/AbstractSelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "blockingLock", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::nio::channels::SelectableChannel java::nio::channels::spi::AbstractSelectableChannel::configureBlocking(bool arg0) const {
    if (!::java::nio::channels::spi::AbstractSelectableChannel::_class) ::java::nio::channels::spi::AbstractSelectableChannel::_class = java::fetch_class("java/nio/channels/spi/AbstractSelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "configureBlocking", "(Z)Ljava/nio/channels/SelectableChannel;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::channels::SelectableChannel _ret(ret);
    return _ret;
}

bool java::nio::channels::spi::AbstractInterruptibleChannel::isOpen() const {
    if (!::java::nio::channels::spi::AbstractInterruptibleChannel::_class) ::java::nio::channels::spi::AbstractInterruptibleChannel::_class = java::fetch_class("java/nio/channels/spi/AbstractInterruptibleChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::nio::channels::spi::AbstractInterruptibleChannel::close() const {
    if (!::java::nio::channels::spi::AbstractInterruptibleChannel::_class) ::java::nio::channels::spi::AbstractInterruptibleChannel::_class = java::fetch_class("java/nio/channels/spi/AbstractInterruptibleChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::nio::channels::spi::AbstractSelector::close() const {
    if (!::java::nio::channels::spi::AbstractSelector::_class) ::java::nio::channels::spi::AbstractSelector::_class = java::fetch_class("java/nio/channels/spi/AbstractSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::nio::channels::spi::AbstractSelector::isOpen() const {
    if (!::java::nio::channels::spi::AbstractSelector::_class) ::java::nio::channels::spi::AbstractSelector::_class = java::fetch_class("java/nio/channels/spi/AbstractSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::channels::spi::SelectorProvider java::nio::channels::spi::AbstractSelector::provider() const {
    if (!::java::nio::channels::spi::AbstractSelector::_class) ::java::nio::channels::spi::AbstractSelector::_class = java::fetch_class("java/nio/channels/spi/AbstractSelector");
    static jmethodID mid = java::jni->GetMethodID(_class, "provider", "()Ljava/nio/channels/spi/SelectorProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::spi::SelectorProvider _ret(ret);
    return _ret;
}

