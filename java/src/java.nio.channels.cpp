#include "java-core.hpp"
#include <memory>
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.Reader.hpp"
#include "java.io.Writer.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "java.net.DatagramSocket.hpp"
#include "java.net.ServerSocket.hpp"
#include "java.net.Socket.hpp"
#include "java.net.SocketAddress.hpp"
#include "java.nio.ByteBuffer.hpp"
#include "java.nio.MappedByteBuffer.hpp"
#include "java.nio.channels.AlreadyConnectedException.hpp"
#include "java.nio.channels.AsynchronousCloseException.hpp"
#include "java.nio.channels.ByteChannel.hpp"
#include "java.nio.channels.CancelledKeyException.hpp"
#include "java.nio.channels.Channel.hpp"
#include "java.nio.channels.Channels.hpp"
#include "java.nio.channels.ClosedByInterruptException.hpp"
#include "java.nio.channels.ClosedChannelException.hpp"
#include "java.nio.channels.ClosedSelectorException.hpp"
#include "java.nio.channels.ConnectionPendingException.hpp"
#include "java.nio.channels.DatagramChannel.hpp"
#include "java.nio.channels.FileChannel.hpp"
#include "java.nio.channels.FileLock.hpp"
#include "java.nio.channels.FileLockInterruptionException.hpp"
#include "java.nio.channels.GatheringByteChannel.hpp"
#include "java.nio.channels.IllegalBlockingModeException.hpp"
#include "java.nio.channels.IllegalSelectorException.hpp"
#include "java.nio.channels.InterruptibleChannel.hpp"
#include "java.nio.channels.NoConnectionPendingException.hpp"
#include "java.nio.channels.NonReadableChannelException.hpp"
#include "java.nio.channels.NonWritableChannelException.hpp"
#include "java.nio.channels.NotYetBoundException.hpp"
#include "java.nio.channels.NotYetConnectedException.hpp"
#include "java.nio.channels.OverlappingFileLockException.hpp"
#include "java.nio.channels.Pipe.hpp"
#include "java.nio.channels.ReadableByteChannel.hpp"
#include "java.nio.channels.ScatteringByteChannel.hpp"
#include "java.nio.channels.SelectableChannel.hpp"
#include "java.nio.channels.SelectionKey.hpp"
#include "java.nio.channels.Selector.hpp"
#include "java.nio.channels.ServerSocketChannel.hpp"
#include "java.nio.channels.SocketChannel.hpp"
#include "java.nio.channels.UnresolvedAddressException.hpp"
#include "java.nio.channels.UnsupportedAddressTypeException.hpp"
#include "java.nio.channels.WritableByteChannel.hpp"
#include "java.nio.channels.spi.SelectorProvider.hpp"
#include "java.nio.charset.CharsetDecoder.hpp"
#include "java.nio.charset.CharsetEncoder.hpp"
#include "java.util.Set.hpp"

jclass java::nio::channels::ReadableByteChannel::_class = nullptr;
jclass java::nio::channels::SelectableChannel::_class = nullptr;
jclass java::nio::channels::UnresolvedAddressException::_class = nullptr;
jclass java::nio::channels::FileChannel_MapMode::_class = nullptr;
jclass java::nio::channels::Pipe_SourceChannel::_class = nullptr;
jclass java::nio::channels::IllegalSelectorException::_class = nullptr;
jclass java::nio::channels::Channel::_class = nullptr;
jclass java::nio::channels::NotYetConnectedException::_class = nullptr;
jclass java::nio::channels::ConnectionPendingException::_class = nullptr;
jclass java::nio::channels::GatheringByteChannel::_class = nullptr;
jclass java::nio::channels::NoConnectionPendingException::_class = nullptr;
jclass java::nio::channels::DatagramChannel::_class = nullptr;
jclass java::nio::channels::Channels::_class = nullptr;
jclass java::nio::channels::UnsupportedAddressTypeException::_class = nullptr;
jclass java::nio::channels::ClosedByInterruptException::_class = nullptr;
jclass java::nio::channels::SocketChannel::_class = nullptr;
jclass java::nio::channels::InterruptibleChannel::_class = nullptr;
jclass java::nio::channels::ClosedSelectorException::_class = nullptr;
jclass java::nio::channels::ScatteringByteChannel::_class = nullptr;
jclass java::nio::channels::ServerSocketChannel::_class = nullptr;
jclass java::nio::channels::ByteChannel::_class = nullptr;
jclass java::nio::channels::SelectionKey::_class = nullptr;
jclass java::nio::channels::FileLock::_class = nullptr;
jclass java::nio::channels::AlreadyConnectedException::_class = nullptr;
jclass java::nio::channels::ClosedChannelException::_class = nullptr;
jclass java::nio::channels::FileLockInterruptionException::_class = nullptr;
jclass java::nio::channels::NonReadableChannelException::_class = nullptr;
jclass java::nio::channels::IllegalBlockingModeException::_class = nullptr;
jclass java::nio::channels::NotYetBoundException::_class = nullptr;
jclass java::nio::channels::Pipe_SinkChannel::_class = nullptr;
jclass java::nio::channels::FileChannel::_class = nullptr;
jclass java::nio::channels::Selector::_class = nullptr;
jclass java::nio::channels::NonWritableChannelException::_class = nullptr;
jclass java::nio::channels::CancelledKeyException::_class = nullptr;
jclass java::nio::channels::AsynchronousCloseException::_class = nullptr;
jclass java::nio::channels::OverlappingFileLockException::_class = nullptr;
jclass java::nio::channels::Pipe::_class = nullptr;
jclass java::nio::channels::WritableByteChannel::_class = nullptr;

int32_t java::nio::channels::ReadableByteChannel::read(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::channels::ReadableByteChannel::_class) ::java::nio::channels::ReadableByteChannel::_class = java::fetch_class("java/nio/channels/ReadableByteChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "(Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Object java::nio::channels::SelectableChannel::blockingLock() const {
    if (!::java::nio::channels::SelectableChannel::_class) ::java::nio::channels::SelectableChannel::_class = java::fetch_class("java/nio/channels/SelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "blockingLock", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::nio::channels::SelectableChannel java::nio::channels::SelectableChannel::configureBlocking(bool arg0) const {
    if (!::java::nio::channels::SelectableChannel::_class) ::java::nio::channels::SelectableChannel::_class = java::fetch_class("java/nio/channels/SelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "configureBlocking", "(Z)Ljava/nio/channels/SelectableChannel;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::channels::SelectableChannel _ret(ret);
    return _ret;
}

bool java::nio::channels::SelectableChannel::isBlocking() const {
    if (!::java::nio::channels::SelectableChannel::_class) ::java::nio::channels::SelectableChannel::_class = java::fetch_class("java/nio/channels/SelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "isBlocking", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::channels::SelectableChannel::isRegistered() const {
    if (!::java::nio::channels::SelectableChannel::_class) ::java::nio::channels::SelectableChannel::_class = java::fetch_class("java/nio/channels/SelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "isRegistered", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::channels::SelectionKey java::nio::channels::SelectableChannel::keyFor(const ::java::nio::channels::Selector& arg0) const {
    if (!::java::nio::channels::SelectableChannel::_class) ::java::nio::channels::SelectableChannel::_class = java::fetch_class("java/nio/channels/SelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "keyFor", "(Ljava/nio/channels/Selector;)Ljava/nio/channels/SelectionKey;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::channels::SelectionKey _ret(ret);
    return _ret;
}

::java::nio::channels::spi::SelectorProvider java::nio::channels::SelectableChannel::provider() const {
    if (!::java::nio::channels::SelectableChannel::_class) ::java::nio::channels::SelectableChannel::_class = java::fetch_class("java/nio/channels/SelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "provider", "()Ljava/nio/channels/spi/SelectorProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::spi::SelectorProvider _ret(ret);
    return _ret;
}

::java::nio::channels::SelectionKey java::nio::channels::SelectableChannel::register_(const ::java::nio::channels::Selector& arg0, int32_t arg1) const {
    if (!::java::nio::channels::SelectableChannel::_class) ::java::nio::channels::SelectableChannel::_class = java::fetch_class("java/nio/channels/SelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Ljava/nio/channels/Selector;I)Ljava/nio/channels/SelectionKey;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::nio::channels::SelectionKey _ret(ret);
    return _ret;
}

::java::nio::channels::SelectionKey java::nio::channels::SelectableChannel::register_(const ::java::nio::channels::Selector& arg0, int32_t arg1, const ::java::lang::Object& arg2) const {
    if (!::java::nio::channels::SelectableChannel::_class) ::java::nio::channels::SelectableChannel::_class = java::fetch_class("java/nio/channels/SelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "register_", "(Ljava/nio/channels/Selector;ILjava/lang/Object;)Ljava/nio/channels/SelectionKey;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::channels::SelectionKey _ret(ret);
    return _ret;
}

int32_t java::nio::channels::SelectableChannel::validOps() const {
    if (!::java::nio::channels::SelectableChannel::_class) ::java::nio::channels::SelectableChannel::_class = java::fetch_class("java/nio/channels/SelectableChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "validOps", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::UnresolvedAddressException::UnresolvedAddressException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::UnresolvedAddressException::_class) ::java::nio::channels::UnresolvedAddressException::_class = java::fetch_class("java/nio/channels/UnresolvedAddressException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String java::nio::channels::FileChannel_MapMode::toString() const {
    if (!::java::nio::channels::FileChannel_MapMode::_class) ::java::nio::channels::FileChannel_MapMode::_class = java::fetch_class("java/nio/channels/FileChannel$MapMode");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::nio::channels::Pipe_SourceChannel::validOps() const {
    if (!::java::nio::channels::Pipe_SourceChannel::_class) ::java::nio::channels::Pipe_SourceChannel::_class = java::fetch_class("java/nio/channels/Pipe$SourceChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "validOps", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::IllegalSelectorException::IllegalSelectorException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::IllegalSelectorException::_class) ::java::nio::channels::IllegalSelectorException::_class = java::fetch_class("java/nio/channels/IllegalSelectorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool java::nio::channels::Channel::isOpen() const {
    if (!::java::nio::channels::Channel::_class) ::java::nio::channels::Channel::_class = java::fetch_class("java/nio/channels/Channel");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::nio::channels::Channel::close() const {
    if (!::java::nio::channels::Channel::_class) ::java::nio::channels::Channel::_class = java::fetch_class("java/nio/channels/Channel");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::NotYetConnectedException::NotYetConnectedException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::NotYetConnectedException::_class) ::java::nio::channels::NotYetConnectedException::_class = java::fetch_class("java/nio/channels/NotYetConnectedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::ConnectionPendingException::ConnectionPendingException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::ConnectionPendingException::_class) ::java::nio::channels::ConnectionPendingException::_class = java::fetch_class("java/nio/channels/ConnectionPendingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t java::nio::channels::GatheringByteChannel::write(const std::vector< ::java::nio::ByteBuffer>& arg0) const {
    if (!::java::nio::channels::GatheringByteChannel::_class) ::java::nio::channels::GatheringByteChannel::_class = java::fetch_class("java/nio/channels/GatheringByteChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([Ljava/nio/ByteBuffer;)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::nio::channels::GatheringByteChannel::write(const std::vector< ::java::nio::ByteBuffer>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::channels::GatheringByteChannel::_class) ::java::nio::channels::GatheringByteChannel::_class = java::fetch_class("java/nio/channels/GatheringByteChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([Ljava/nio/ByteBuffer;II)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::NoConnectionPendingException::NoConnectionPendingException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::NoConnectionPendingException::_class) ::java::nio::channels::NoConnectionPendingException::_class = java::fetch_class("java/nio/channels/NoConnectionPendingException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::nio::channels::DatagramChannel java::nio::channels::DatagramChannel::open(){
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "open", "()Ljava/nio/channels/DatagramChannel;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::nio::channels::DatagramChannel _ret(ret);
    return _ret;
}

int32_t java::nio::channels::DatagramChannel::validOps() const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "validOps", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::net::DatagramSocket java::nio::channels::DatagramChannel::socket() const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "socket", "()Ljava/net/DatagramSocket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::DatagramSocket _ret(ret);
    return _ret;
}

bool java::nio::channels::DatagramChannel::isConnected() const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::nio::channels::DatagramChannel java::nio::channels::DatagramChannel::connect(const ::java::net::SocketAddress& arg0) const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/net/SocketAddress;)Ljava/nio/channels/DatagramChannel;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::channels::DatagramChannel _ret(ret);
    return _ret;
}

::java::nio::channels::DatagramChannel java::nio::channels::DatagramChannel::disconnect() const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "disconnect", "()Ljava/nio/channels/DatagramChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::DatagramChannel _ret(ret);
    return _ret;
}

::java::net::SocketAddress java::nio::channels::DatagramChannel::receive(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "receive", "(Ljava/nio/ByteBuffer;)Ljava/net/SocketAddress;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::net::SocketAddress _ret(ret);
    return _ret;
}

int32_t java::nio::channels::DatagramChannel::send(const ::java::nio::ByteBuffer& arg0, const ::java::net::SocketAddress& arg1) const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "send", "(Ljava/nio/ByteBuffer;Ljava/net/SocketAddress;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int32_t java::nio::channels::DatagramChannel::read(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "(Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t java::nio::channels::DatagramChannel::read(const std::vector< ::java::nio::ByteBuffer>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([Ljava/nio/ByteBuffer;II)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::nio::channels::DatagramChannel::read(const std::vector< ::java::nio::ByteBuffer>& arg0) const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([Ljava/nio/ByteBuffer;)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t java::nio::channels::DatagramChannel::write(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t java::nio::channels::DatagramChannel::write(const std::vector< ::java::nio::ByteBuffer>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([Ljava/nio/ByteBuffer;II)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::nio::channels::DatagramChannel::write(const std::vector< ::java::nio::ByteBuffer>& arg0) const {
    if (!::java::nio::channels::DatagramChannel::_class) ::java::nio::channels::DatagramChannel::_class = java::fetch_class("java/nio/channels/DatagramChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([Ljava/nio/ByteBuffer;)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

::java::io::InputStream java::nio::channels::Channels::newInputStream(const ::java::nio::channels::ReadableByteChannel& arg0){
    if (!::java::nio::channels::Channels::_class) ::java::nio::channels::Channels::_class = java::fetch_class("java/nio/channels/Channels");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newInputStream", "(Ljava/nio/channels/ReadableByteChannel;)Ljava/io/InputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::io::InputStream _ret(ret);
    return _ret;
}

::java::io::OutputStream java::nio::channels::Channels::newOutputStream(const ::java::nio::channels::WritableByteChannel& arg0){
    if (!::java::nio::channels::Channels::_class) ::java::nio::channels::Channels::_class = java::fetch_class("java/nio/channels/Channels");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newOutputStream", "(Ljava/nio/channels/WritableByteChannel;)Ljava/io/OutputStream;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::io::OutputStream _ret(ret);
    return _ret;
}

::java::nio::channels::ReadableByteChannel java::nio::channels::Channels::newChannel(const ::java::io::InputStream& arg0){
    if (!::java::nio::channels::Channels::_class) ::java::nio::channels::Channels::_class = java::fetch_class("java/nio/channels/Channels");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newChannel", "(Ljava/io/InputStream;)Ljava/nio/channels/ReadableByteChannel;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::channels::ReadableByteChannel _ret(ret);
    return _ret;
}

::java::nio::channels::WritableByteChannel java::nio::channels::Channels::newChannel(const ::java::io::OutputStream& arg0){
    if (!::java::nio::channels::Channels::_class) ::java::nio::channels::Channels::_class = java::fetch_class("java/nio/channels/Channels");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newChannel", "(Ljava/io/OutputStream;)Ljava/nio/channels/WritableByteChannel;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::channels::WritableByteChannel _ret(ret);
    return _ret;
}

::java::io::Reader java::nio::channels::Channels::newReader(const ::java::nio::channels::ReadableByteChannel& arg0, const ::java::nio::charset::CharsetDecoder& arg1, int32_t arg2){
    if (!::java::nio::channels::Channels::_class) ::java::nio::channels::Channels::_class = java::fetch_class("java/nio/channels/Channels");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newReader", "(Ljava/nio/channels/ReadableByteChannel;Ljava/nio/charset/CharsetDecoder;I)Ljava/io/Reader;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::io::Reader java::nio::channels::Channels::newReader(const ::java::nio::channels::ReadableByteChannel& arg0, const ::java::lang::String& arg1){
    if (!::java::nio::channels::Channels::_class) ::java::nio::channels::Channels::_class = java::fetch_class("java/nio/channels/Channels");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newReader", "(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)Ljava/io/Reader;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::io::Reader _ret(ret);
    return _ret;
}

::java::io::Writer java::nio::channels::Channels::newWriter(const ::java::nio::channels::WritableByteChannel& arg0, const ::java::nio::charset::CharsetEncoder& arg1, int32_t arg2){
    if (!::java::nio::channels::Channels::_class) ::java::nio::channels::Channels::_class = java::fetch_class("java/nio/channels/Channels");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newWriter", "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/CharsetEncoder;I)Ljava/io/Writer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::io::Writer _ret(ret);
    return _ret;
}

::java::io::Writer java::nio::channels::Channels::newWriter(const ::java::nio::channels::WritableByteChannel& arg0, const ::java::lang::String& arg1){
    if (!::java::nio::channels::Channels::_class) ::java::nio::channels::Channels::_class = java::fetch_class("java/nio/channels/Channels");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newWriter", "(Ljava/nio/channels/WritableByteChannel;Ljava/lang/String;)Ljava/io/Writer;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::io::Writer _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::UnsupportedAddressTypeException::UnsupportedAddressTypeException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::UnsupportedAddressTypeException::_class) ::java::nio::channels::UnsupportedAddressTypeException::_class = java::fetch_class("java/nio/channels/UnsupportedAddressTypeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::ClosedByInterruptException::ClosedByInterruptException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::nio::channels::AsynchronousCloseException((jobject)0), ::java::nio::channels::ClosedChannelException((jobject)0) {
    if (!::java::nio::channels::ClosedByInterruptException::_class) ::java::nio::channels::ClosedByInterruptException::_class = java::fetch_class("java/nio/channels/ClosedByInterruptException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::nio::channels::SocketChannel java::nio::channels::SocketChannel::open(){
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "open", "()Ljava/nio/channels/SocketChannel;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::nio::channels::SocketChannel _ret(ret);
    return _ret;
}

::java::nio::channels::SocketChannel java::nio::channels::SocketChannel::open(const ::java::net::SocketAddress& arg0){
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "open", "(Ljava/net/SocketAddress;)Ljava/nio/channels/SocketChannel;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::nio::channels::SocketChannel _ret(ret);
    return _ret;
}

int32_t java::nio::channels::SocketChannel::validOps() const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "validOps", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::net::Socket java::nio::channels::SocketChannel::socket() const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "socket", "()Ljava/net/Socket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::Socket _ret(ret);
    return _ret;
}

bool java::nio::channels::SocketChannel::isConnected() const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnected", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::channels::SocketChannel::isConnectionPending() const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnectionPending", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::channels::SocketChannel::connect(const ::java::net::SocketAddress& arg0) const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "connect", "(Ljava/net/SocketAddress;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::nio::channels::SocketChannel::finishConnect() const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "finishConnect", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::channels::SocketChannel::read(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "(Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t java::nio::channels::SocketChannel::read(const std::vector< ::java::nio::ByteBuffer>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([Ljava/nio/ByteBuffer;II)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::nio::channels::SocketChannel::read(const std::vector< ::java::nio::ByteBuffer>& arg0) const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([Ljava/nio/ByteBuffer;)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int32_t java::nio::channels::SocketChannel::write(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t java::nio::channels::SocketChannel::write(const std::vector< ::java::nio::ByteBuffer>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([Ljava/nio/ByteBuffer;II)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::nio::channels::SocketChannel::write(const std::vector< ::java::nio::ByteBuffer>& arg0) const {
    if (!::java::nio::channels::SocketChannel::_class) ::java::nio::channels::SocketChannel::_class = java::fetch_class("java/nio/channels/SocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([Ljava/nio/ByteBuffer;)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

void java::nio::channels::InterruptibleChannel::close() const {
    if (!::java::nio::channels::InterruptibleChannel::_class) ::java::nio::channels::InterruptibleChannel::_class = java::fetch_class("java/nio/channels/InterruptibleChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::ClosedSelectorException::ClosedSelectorException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::ClosedSelectorException::_class) ::java::nio::channels::ClosedSelectorException::_class = java::fetch_class("java/nio/channels/ClosedSelectorException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int64_t java::nio::channels::ScatteringByteChannel::read(const std::vector< ::java::nio::ByteBuffer>& arg0) const {
    if (!::java::nio::channels::ScatteringByteChannel::_class) ::java::nio::channels::ScatteringByteChannel::_class = java::fetch_class("java/nio/channels/ScatteringByteChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([Ljava/nio/ByteBuffer;)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::nio::channels::ScatteringByteChannel::read(const std::vector< ::java::nio::ByteBuffer>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::channels::ScatteringByteChannel::_class) ::java::nio::channels::ScatteringByteChannel::_class = java::fetch_class("java/nio/channels/ScatteringByteChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([Ljava/nio/ByteBuffer;II)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::nio::channels::ServerSocketChannel java::nio::channels::ServerSocketChannel::open(){
    if (!::java::nio::channels::ServerSocketChannel::_class) ::java::nio::channels::ServerSocketChannel::_class = java::fetch_class("java/nio/channels/ServerSocketChannel");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "open", "()Ljava/nio/channels/ServerSocketChannel;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::nio::channels::ServerSocketChannel _ret(ret);
    return _ret;
}

int32_t java::nio::channels::ServerSocketChannel::validOps() const {
    if (!::java::nio::channels::ServerSocketChannel::_class) ::java::nio::channels::ServerSocketChannel::_class = java::fetch_class("java/nio/channels/ServerSocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "validOps", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::net::ServerSocket java::nio::channels::ServerSocketChannel::socket() const {
    if (!::java::nio::channels::ServerSocketChannel::_class) ::java::nio::channels::ServerSocketChannel::_class = java::fetch_class("java/nio/channels/ServerSocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "socket", "()Ljava/net/ServerSocket;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::net::ServerSocket _ret(ret);
    return _ret;
}

::java::nio::channels::SocketChannel java::nio::channels::ServerSocketChannel::accept() const {
    if (!::java::nio::channels::ServerSocketChannel::_class) ::java::nio::channels::ServerSocketChannel::_class = java::fetch_class("java/nio/channels/ServerSocketChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "accept", "()Ljava/nio/channels/SocketChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::SocketChannel _ret(ret);
    return _ret;
}

::java::lang::Object java::nio::channels::SelectionKey::attach(const ::java::lang::Object& arg0) const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "attach", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::nio::channels::SelectionKey::attachment() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "attachment", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::nio::channels::SelectionKey::cancel() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::nio::channels::SelectableChannel java::nio::channels::SelectionKey::channel() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "channel", "()Ljava/nio/channels/SelectableChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::SelectableChannel _ret(ret);
    return _ret;
}

int32_t java::nio::channels::SelectionKey::interestOps() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "interestOps", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::channels::SelectionKey java::nio::channels::SelectionKey::interestOps(int32_t arg0) const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "interestOps", "(I)Ljava/nio/channels/SelectionKey;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::channels::SelectionKey _ret(ret);
    return _ret;
}

bool java::nio::channels::SelectionKey::isAcceptable() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "isAcceptable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::channels::SelectionKey::isConnectable() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "isConnectable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::channels::SelectionKey::isReadable() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "isReadable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::channels::SelectionKey::isValid() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValid", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::channels::SelectionKey::isWritable() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "isWritable", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::nio::channels::SelectionKey::readyOps() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "readyOps", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::channels::Selector java::nio::channels::SelectionKey::selector() const {
    if (!::java::nio::channels::SelectionKey::_class) ::java::nio::channels::SelectionKey::_class = java::fetch_class("java/nio/channels/SelectionKey");
    static jmethodID mid = java::jni->GetMethodID(_class, "selector", "()Ljava/nio/channels/Selector;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::Selector _ret(ret);
    return _ret;
}

::java::nio::channels::FileChannel java::nio::channels::FileLock::channel() const {
    if (!::java::nio::channels::FileLock::_class) ::java::nio::channels::FileLock::_class = java::fetch_class("java/nio/channels/FileLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "channel", "()Ljava/nio/channels/FileChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::FileChannel _ret(ret);
    return _ret;
}

int64_t java::nio::channels::FileLock::position() const {
    if (!::java::nio::channels::FileLock::_class) ::java::nio::channels::FileLock::_class = java::fetch_class("java/nio/channels/FileLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "position", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::nio::channels::FileLock::size() const {
    if (!::java::nio::channels::FileLock::_class) ::java::nio::channels::FileLock::_class = java::fetch_class("java/nio/channels/FileLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

bool java::nio::channels::FileLock::isShared() const {
    if (!::java::nio::channels::FileLock::_class) ::java::nio::channels::FileLock::_class = java::fetch_class("java/nio/channels/FileLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isShared", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::nio::channels::FileLock::overlaps(int64_t arg0, int64_t arg1) const {
    if (!::java::nio::channels::FileLock::_class) ::java::nio::channels::FileLock::_class = java::fetch_class("java/nio/channels/FileLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "overlaps", "(JJ)Z");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::nio::channels::FileLock::isValid() const {
    if (!::java::nio::channels::FileLock::_class) ::java::nio::channels::FileLock::_class = java::fetch_class("java/nio/channels/FileLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "isValid", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::nio::channels::FileLock::release() const {
    if (!::java::nio::channels::FileLock::_class) ::java::nio::channels::FileLock::_class = java::fetch_class("java/nio/channels/FileLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "release", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::String java::nio::channels::FileLock::toString() const {
    if (!::java::nio::channels::FileLock::_class) ::java::nio::channels::FileLock::_class = java::fetch_class("java/nio/channels/FileLock");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::AlreadyConnectedException::AlreadyConnectedException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::AlreadyConnectedException::_class) ::java::nio::channels::AlreadyConnectedException::_class = java::fetch_class("java/nio/channels/AlreadyConnectedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::ClosedChannelException::ClosedChannelException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::ClosedChannelException::_class) ::java::nio::channels::ClosedChannelException::_class = java::fetch_class("java/nio/channels/ClosedChannelException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::FileLockInterruptionException::FileLockInterruptionException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::FileLockInterruptionException::_class) ::java::nio::channels::FileLockInterruptionException::_class = java::fetch_class("java/nio/channels/FileLockInterruptionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::NonReadableChannelException::NonReadableChannelException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::NonReadableChannelException::_class) ::java::nio::channels::NonReadableChannelException::_class = java::fetch_class("java/nio/channels/NonReadableChannelException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::IllegalBlockingModeException::IllegalBlockingModeException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::IllegalBlockingModeException::_class) ::java::nio::channels::IllegalBlockingModeException::_class = java::fetch_class("java/nio/channels/IllegalBlockingModeException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::NotYetBoundException::NotYetBoundException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::NotYetBoundException::_class) ::java::nio::channels::NotYetBoundException::_class = java::fetch_class("java/nio/channels/NotYetBoundException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

int32_t java::nio::channels::Pipe_SinkChannel::validOps() const {
    if (!::java::nio::channels::Pipe_SinkChannel::_class) ::java::nio::channels::Pipe_SinkChannel::_class = java::fetch_class("java/nio/channels/Pipe$SinkChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "validOps", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::nio::channels::FileChannel::force(bool arg0) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "force", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::nio::channels::FileLock java::nio::channels::FileChannel::lock() const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "lock", "()Ljava/nio/channels/FileLock;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::FileLock _ret(ret);
    return _ret;
}

::java::nio::channels::FileLock java::nio::channels::FileChannel::lock(int64_t arg0, int64_t arg1, bool arg2) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "lock", "(JJZ)Ljava/nio/channels/FileLock;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::channels::FileLock _ret(ret);
    return _ret;
}

::java::nio::MappedByteBuffer java::nio::channels::FileChannel::map(const ::java::nio::channels::FileChannel_MapMode& arg0, int64_t arg1, int64_t arg2) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "map", "(Ljava/nio/channels/FileChannel$MapMode;JJ)Ljava/nio/MappedByteBuffer;");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::MappedByteBuffer _ret(ret);
    return _ret;
}

int64_t java::nio::channels::FileChannel::position() const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "position", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::nio::channels::FileChannel java::nio::channels::FileChannel::position(int64_t arg0) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "position", "(J)Ljava/nio/channels/FileChannel;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::channels::FileChannel _ret(ret);
    return _ret;
}

int32_t java::nio::channels::FileChannel::read(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "(Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::nio::channels::FileChannel::read(const ::java::nio::ByteBuffer& arg0, int64_t arg1) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "(Ljava/nio/ByteBuffer;J)I");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t java::nio::channels::FileChannel::read(const std::vector< ::java::nio::ByteBuffer>& arg0) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([Ljava/nio/ByteBuffer;)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::nio::channels::FileChannel::read(const std::vector< ::java::nio::ByteBuffer>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "read", "([Ljava/nio/ByteBuffer;II)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::nio::channels::FileChannel::size() const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::nio::channels::FileChannel::transferFrom(const ::java::nio::channels::ReadableByteChannel& arg0, int64_t arg1, int64_t arg2) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "transferFrom", "(Ljava/nio/channels/ReadableByteChannel;JJ)J");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

int64_t java::nio::channels::FileChannel::transferTo(int64_t arg0, int64_t arg1, const ::java::nio::channels::WritableByteChannel& arg2) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "transferTo", "(JJLjava/nio/channels/WritableByteChannel;)J");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::nio::channels::FileChannel java::nio::channels::FileChannel::truncate(int64_t arg0) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "truncate", "(J)Ljava/nio/channels/FileChannel;");
    int64_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::nio::channels::FileChannel _ret(ret);
    return _ret;
}

::java::nio::channels::FileLock java::nio::channels::FileChannel::tryLock() const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryLock", "()Ljava/nio/channels/FileLock;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::FileLock _ret(ret);
    return _ret;
}

::java::nio::channels::FileLock java::nio::channels::FileChannel::tryLock(int64_t arg0, int64_t arg1, bool arg2) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "tryLock", "(JJZ)Ljava/nio/channels/FileLock;");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    bool _arg2 = arg2;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::nio::channels::FileLock _ret(ret);
    return _ret;
}

int32_t java::nio::channels::FileChannel::write(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::nio::channels::FileChannel::write(const ::java::nio::ByteBuffer& arg0, int64_t arg1) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/nio/ByteBuffer;J)I");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

int64_t java::nio::channels::FileChannel::write(const std::vector< ::java::nio::ByteBuffer>& arg0) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([Ljava/nio/ByteBuffer;)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int64_t java::nio::channels::FileChannel::write(const std::vector< ::java::nio::ByteBuffer>& arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::nio::channels::FileChannel::_class) ::java::nio::channels::FileChannel::_class = java::fetch_class("java/nio/channels/FileChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "([Ljava/nio/ByteBuffer;II)J");
    unsigned arg0s = arg0.size();
    if (!::java::nio::ByteBuffer::_class) ::java::nio::ByteBuffer::_class = java::fetch_class("java/nio/ByteBuffer");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::nio::ByteBuffer::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::nio::ByteBuffer& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::nio::channels::Selector java::nio::channels::Selector::open(){
    if (!::java::nio::channels::Selector::_class) ::java::nio::channels::Selector::_class = java::fetch_class("java/nio/channels/Selector");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "open", "()Ljava/nio/channels/Selector;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::nio::channels::Selector _ret(ret);
    return _ret;
}

void java::nio::channels::Selector::close() const {
    if (!::java::nio::channels::Selector::_class) ::java::nio::channels::Selector::_class = java::fetch_class("java/nio/channels/Selector");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::nio::channels::Selector::isOpen() const {
    if (!::java::nio::channels::Selector::_class) ::java::nio::channels::Selector::_class = java::fetch_class("java/nio/channels/Selector");
    static jmethodID mid = java::jni->GetMethodID(_class, "isOpen", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Set java::nio::channels::Selector::keys() const {
    if (!::java::nio::channels::Selector::_class) ::java::nio::channels::Selector::_class = java::fetch_class("java/nio/channels/Selector");
    static jmethodID mid = java::jni->GetMethodID(_class, "keys", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::nio::channels::spi::SelectorProvider java::nio::channels::Selector::provider() const {
    if (!::java::nio::channels::Selector::_class) ::java::nio::channels::Selector::_class = java::fetch_class("java/nio/channels/Selector");
    static jmethodID mid = java::jni->GetMethodID(_class, "provider", "()Ljava/nio/channels/spi/SelectorProvider;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::spi::SelectorProvider _ret(ret);
    return _ret;
}

int32_t java::nio::channels::Selector::select() const {
    if (!::java::nio::channels::Selector::_class) ::java::nio::channels::Selector::_class = java::fetch_class("java/nio/channels/Selector");
    static jmethodID mid = java::jni->GetMethodID(_class, "select", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::nio::channels::Selector::select(int64_t arg0) const {
    if (!::java::nio::channels::Selector::_class) ::java::nio::channels::Selector::_class = java::fetch_class("java/nio/channels/Selector");
    static jmethodID mid = java::jni->GetMethodID(_class, "select", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::Set java::nio::channels::Selector::selectedKeys() const {
    if (!::java::nio::channels::Selector::_class) ::java::nio::channels::Selector::_class = java::fetch_class("java/nio/channels/Selector");
    static jmethodID mid = java::jni->GetMethodID(_class, "selectedKeys", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

int32_t java::nio::channels::Selector::selectNow() const {
    if (!::java::nio::channels::Selector::_class) ::java::nio::channels::Selector::_class = java::fetch_class("java/nio/channels/Selector");
    static jmethodID mid = java::jni->GetMethodID(_class, "selectNow", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::nio::channels::Selector java::nio::channels::Selector::wakeup() const {
    if (!::java::nio::channels::Selector::_class) ::java::nio::channels::Selector::_class = java::fetch_class("java/nio/channels/Selector");
    static jmethodID mid = java::jni->GetMethodID(_class, "wakeup", "()Ljava/nio/channels/Selector;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::Selector _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::NonWritableChannelException::NonWritableChannelException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::NonWritableChannelException::_class) ::java::nio::channels::NonWritableChannelException::_class = java::fetch_class("java/nio/channels/NonWritableChannelException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::CancelledKeyException::CancelledKeyException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::CancelledKeyException::_class) ::java::nio::channels::CancelledKeyException::_class = java::fetch_class("java/nio/channels/CancelledKeyException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::AsynchronousCloseException::AsynchronousCloseException() : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0), ::java::nio::channels::ClosedChannelException((jobject)0) {
    if (!::java::nio::channels::AsynchronousCloseException::_class) ::java::nio::channels::AsynchronousCloseException::_class = java::fetch_class("java/nio/channels/AsynchronousCloseException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::nio::channels::OverlappingFileLockException::OverlappingFileLockException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::nio::channels::OverlappingFileLockException::_class) ::java::nio::channels::OverlappingFileLockException::_class = java::fetch_class("java/nio/channels/OverlappingFileLockException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::nio::channels::Pipe java::nio::channels::Pipe::open(){
    if (!::java::nio::channels::Pipe::_class) ::java::nio::channels::Pipe::_class = java::fetch_class("java/nio/channels/Pipe");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "open", "()Ljava/nio/channels/Pipe;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::nio::channels::Pipe _ret(ret);
    return _ret;
}

::java::nio::channels::Pipe_SinkChannel java::nio::channels::Pipe::sink() const {
    if (!::java::nio::channels::Pipe::_class) ::java::nio::channels::Pipe::_class = java::fetch_class("java/nio/channels/Pipe");
    static jmethodID mid = java::jni->GetMethodID(_class, "sink", "()Ljava/nio/channels/Pipe$SinkChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::Pipe_SinkChannel _ret(ret);
    return _ret;
}

::java::nio::channels::Pipe_SourceChannel java::nio::channels::Pipe::source() const {
    if (!::java::nio::channels::Pipe::_class) ::java::nio::channels::Pipe::_class = java::fetch_class("java/nio/channels/Pipe");
    static jmethodID mid = java::jni->GetMethodID(_class, "source", "()Ljava/nio/channels/Pipe$SourceChannel;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::nio::channels::Pipe_SourceChannel _ret(ret);
    return _ret;
}

int32_t java::nio::channels::WritableByteChannel::write(const ::java::nio::ByteBuffer& arg0) const {
    if (!::java::nio::channels::WritableByteChannel::_class) ::java::nio::channels::WritableByteChannel::_class = java::fetch_class("java/nio/channels/WritableByteChannel");
    static jmethodID mid = java::jni->GetMethodID(_class, "write", "(Ljava/nio/ByteBuffer;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

