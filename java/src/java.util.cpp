#include "java-core.hpp"
#include <memory>
#include "java.io.File.hpp"
#include "java.io.IOException.hpp"
#include "java.io.InputStream.hpp"
#include "java.io.OutputStream.hpp"
#include "java.io.PrintStream.hpp"
#include "java.io.PrintWriter.hpp"
#include "java.io.Reader.hpp"
#include "java.io.Writer.hpp"
#include "java.lang.Appendable.hpp"
#include "java.lang.Class.hpp"
#include "java.lang.ClassLoader.hpp"
#include "java.lang.Comparable.hpp"
#include "java.lang.Enum.hpp"
#include "java.lang.Object.hpp"
#include "java.lang.Readable.hpp"
#include "java.lang.String.hpp"
#include "java.lang.Throwable.hpp"
#include "java.math.BigDecimal.hpp"
#include "java.math.BigInteger.hpp"
#include "java.nio.channels.ReadableByteChannel.hpp"
#include "java.security.Permission.hpp"
#include "java.util.AbstractCollection.hpp"
#include "java.util.AbstractList.hpp"
#include "java.util.AbstractMap.hpp"
#include "java.util.AbstractQueue.hpp"
#include "java.util.AbstractSequentialList.hpp"
#include "java.util.AbstractSet.hpp"
#include "java.util.ArrayDeque.hpp"
#include "java.util.ArrayList.hpp"
#include "java.util.Arrays.hpp"
#include "java.util.BitSet.hpp"
#include "java.util.Calendar.hpp"
#include "java.util.Collection.hpp"
#include "java.util.Collections.hpp"
#include "java.util.Comparator.hpp"
#include "java.util.ConcurrentModificationException.hpp"
#include "java.util.Currency.hpp"
#include "java.util.Date.hpp"
#include "java.util.Deque.hpp"
#include "java.util.Dictionary.hpp"
#include "java.util.DuplicateFormatFlagsException.hpp"
#include "java.util.EmptyStackException.hpp"
#include "java.util.EnumMap.hpp"
#include "java.util.EnumSet.hpp"
#include "java.util.Enumeration.hpp"
#include "java.util.EventListener.hpp"
#include "java.util.EventListenerProxy.hpp"
#include "java.util.EventObject.hpp"
#include "java.util.FormatFlagsConversionMismatchException.hpp"
#include "java.util.Formattable.hpp"
#include "java.util.FormattableFlags.hpp"
#include "java.util.Formatter.hpp"
#include "java.util.FormatterClosedException.hpp"
#include "java.util.GregorianCalendar.hpp"
#include "java.util.HashMap.hpp"
#include "java.util.HashSet.hpp"
#include "java.util.Hashtable.hpp"
#include "java.util.IdentityHashMap.hpp"
#include "java.util.IllegalFormatCodePointException.hpp"
#include "java.util.IllegalFormatConversionException.hpp"
#include "java.util.IllegalFormatException.hpp"
#include "java.util.IllegalFormatFlagsException.hpp"
#include "java.util.IllegalFormatPrecisionException.hpp"
#include "java.util.IllegalFormatWidthException.hpp"
#include "java.util.InputMismatchException.hpp"
#include "java.util.InvalidPropertiesFormatException.hpp"
#include "java.util.Iterator.hpp"
#include "java.util.LinkedHashMap.hpp"
#include "java.util.LinkedHashSet.hpp"
#include "java.util.LinkedList.hpp"
#include "java.util.List.hpp"
#include "java.util.ListIterator.hpp"
#include "java.util.ListResourceBundle.hpp"
#include "java.util.Locale.hpp"
#include "java.util.Map.hpp"
#include "java.util.MissingFormatArgumentException.hpp"
#include "java.util.MissingFormatWidthException.hpp"
#include "java.util.MissingResourceException.hpp"
#include "java.util.NavigableMap.hpp"
#include "java.util.NavigableSet.hpp"
#include "java.util.NoSuchElementException.hpp"
#include "java.util.Observable.hpp"
#include "java.util.Observer.hpp"
#include "java.util.PriorityQueue.hpp"
#include "java.util.Properties.hpp"
#include "java.util.PropertyPermission.hpp"
#include "java.util.PropertyResourceBundle.hpp"
#include "java.util.Queue.hpp"
#include "java.util.Random.hpp"
#include "java.util.RandomAccess.hpp"
#include "java.util.ResourceBundle.hpp"
#include "java.util.Scanner.hpp"
#include "java.util.ServiceConfigurationError.hpp"
#include "java.util.ServiceLoader.hpp"
#include "java.util.Set.hpp"
#include "java.util.SimpleTimeZone.hpp"
#include "java.util.SortedMap.hpp"
#include "java.util.SortedSet.hpp"
#include "java.util.Stack.hpp"
#include "java.util.StringTokenizer.hpp"
#include "java.util.TimeZone.hpp"
#include "java.util.Timer.hpp"
#include "java.util.TimerTask.hpp"
#include "java.util.TooManyListenersException.hpp"
#include "java.util.TreeMap.hpp"
#include "java.util.TreeSet.hpp"
#include "java.util.UUID.hpp"
#include "java.util.UnknownFormatConversionException.hpp"
#include "java.util.UnknownFormatFlagsException.hpp"
#include "java.util.Vector.hpp"
#include "java.util.WeakHashMap.hpp"
#include "java.util.regex.MatchResult.hpp"
#include "java.util.regex.Pattern.hpp"

jclass java::util::Map_Entry::_class = nullptr;
jclass java::util::WeakHashMap::_class = nullptr;
jclass java::util::NavigableSet::_class = nullptr;
jclass java::util::FormattableFlags::_class = nullptr;
jclass java::util::ListResourceBundle::_class = nullptr;
jclass java::util::AbstractSet::_class = nullptr;
jclass java::util::HashSet::_class = nullptr;
jclass java::util::SortedMap::_class = nullptr;
jclass java::util::Currency::_class = nullptr;
jclass java::util::TimerTask::_class = nullptr;
jclass java::util::AbstractSequentialList::_class = nullptr;
jclass java::util::HashMap::_class = nullptr;
jclass java::util::PropertyResourceBundle::_class = nullptr;
jclass java::util::TreeSet::_class = nullptr;
jclass java::util::Calendar::_class = nullptr;
jclass java::util::SimpleTimeZone::_class = nullptr;
jclass java::util::Hashtable::_class = nullptr;
jclass java::util::Locale::_class = nullptr;
jclass java::util::ArrayDeque::_class = nullptr;
jclass java::util::EnumMap::_class = nullptr;
jclass java::util::ResourceBundle::_class = nullptr;
jclass java::util::InvalidPropertiesFormatException::_class = nullptr;
jclass java::util::Observer::_class = nullptr;
jclass java::util::IllegalFormatWidthException::_class = nullptr;
jclass java::util::Arrays::_class = nullptr;
jclass java::util::AbstractMap_SimpleImmutableEntry::_class = nullptr;
jclass java::util::MissingFormatArgumentException::_class = nullptr;
jclass java::util::FormatterClosedException::_class = nullptr;
jclass java::util::PriorityQueue::_class = nullptr;
jclass java::util::IllegalFormatCodePointException::_class = nullptr;
jclass java::util::ServiceLoader::_class = nullptr;
jclass java::util::Collections::_class = nullptr;
jclass java::util::EnumSet::_class = nullptr;
jclass java::util::Formatter_BigDecimalLayoutForm::_class = nullptr;
jclass java::util::Map::_class = nullptr;
jclass java::util::ListIterator::_class = nullptr;
jclass java::util::Collection::_class = nullptr;
jclass java::util::Set::_class = nullptr;
jclass java::util::AbstractList::_class = nullptr;
jclass java::util::ConcurrentModificationException::_class = nullptr;
jclass java::util::UUID::_class = nullptr;
jclass java::util::Observable::_class = nullptr;
jclass java::util::EventListener::_class = nullptr;
jclass java::util::Vector::_class = nullptr;
jclass java::util::InputMismatchException::_class = nullptr;
jclass java::util::LinkedHashSet::_class = nullptr;
jclass java::util::IllegalFormatFlagsException::_class = nullptr;
jclass java::util::Formattable::_class = nullptr;
jclass java::util::Random::_class = nullptr;
jclass java::util::EmptyStackException::_class = nullptr;
jclass java::util::MissingResourceException::_class = nullptr;
jclass java::util::ArrayList::_class = nullptr;
jclass java::util::Formatter::_class = nullptr;
jclass java::util::PropertyPermission::_class = nullptr;
jclass java::util::AbstractMap::_class = nullptr;
jclass java::util::Properties::_class = nullptr;
jclass java::util::BitSet::_class = nullptr;
jclass java::util::LinkedHashMap::_class = nullptr;
jclass java::util::StringTokenizer::_class = nullptr;
jclass java::util::MissingFormatWidthException::_class = nullptr;
jclass java::util::TimeZone::_class = nullptr;
jclass java::util::Comparator::_class = nullptr;
jclass java::util::ResourceBundle_Control::_class = nullptr;
jclass java::util::List::_class = nullptr;
jclass java::util::Queue::_class = nullptr;
jclass java::util::Dictionary::_class = nullptr;
jclass java::util::Deque::_class = nullptr;
jclass java::util::EventObject::_class = nullptr;
jclass java::util::ServiceConfigurationError::_class = nullptr;
jclass java::util::RandomAccess::_class = nullptr;
jclass java::util::Timer::_class = nullptr;
jclass java::util::IllegalFormatException::_class = nullptr;
jclass java::util::Date::_class = nullptr;
jclass java::util::IllegalFormatConversionException::_class = nullptr;
jclass java::util::TreeMap::_class = nullptr;
jclass java::util::UnknownFormatFlagsException::_class = nullptr;
jclass java::util::AbstractQueue::_class = nullptr;
jclass java::util::DuplicateFormatFlagsException::_class = nullptr;
jclass java::util::Iterator::_class = nullptr;
jclass java::util::SortedSet::_class = nullptr;
jclass java::util::Scanner::_class = nullptr;
jclass java::util::AbstractCollection::_class = nullptr;
jclass java::util::UnknownFormatConversionException::_class = nullptr;
jclass java::util::IllegalFormatPrecisionException::_class = nullptr;
jclass java::util::NavigableMap::_class = nullptr;
jclass java::util::FormatFlagsConversionMismatchException::_class = nullptr;
jclass java::util::Stack::_class = nullptr;
jclass java::util::Enumeration::_class = nullptr;
jclass java::util::GregorianCalendar::_class = nullptr;
jclass java::util::LinkedList::_class = nullptr;
jclass java::util::EventListenerProxy::_class = nullptr;
jclass java::util::TooManyListenersException::_class = nullptr;
jclass java::util::AbstractMap_SimpleEntry::_class = nullptr;
jclass java::util::IdentityHashMap::_class = nullptr;
jclass java::util::NoSuchElementException::_class = nullptr;

bool java::util::Map_Entry::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::Map_Entry::_class) ::java::util::Map_Entry::_class = java::fetch_class("java/util/Map$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Map_Entry::getKey() const {
    if (!::java::util::Map_Entry::_class) ::java::util::Map_Entry::_class = java::fetch_class("java/util/Map$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Map_Entry::getValue() const {
    if (!::java::util::Map_Entry::_class) ::java::util::Map_Entry::_class = java::fetch_class("java/util/Map$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::Map_Entry::hashCode() const {
    if (!::java::util::Map_Entry::_class) ::java::util::Map_Entry::_class = java::fetch_class("java/util/Map$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::Map_Entry::setValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::Map_Entry::_class) ::java::util::Map_Entry::_class = java::fetch_class("java/util/Map$Entry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::WeakHashMap::WeakHashMap() : ::java::lang::Object((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::WeakHashMap::WeakHashMap(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::WeakHashMap::WeakHashMap(int32_t arg0, float arg1) : ::java::lang::Object((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::WeakHashMap::WeakHashMap(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::WeakHashMap::clear() const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::WeakHashMap::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Set java::util::WeakHashMap::entrySet() const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set java::util::WeakHashMap::keySet() const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Collection java::util::WeakHashMap::values() const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::Object java::util::WeakHashMap::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::WeakHashMap::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::WeakHashMap::isEmpty() const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::util::WeakHashMap::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::WeakHashMap::putAll(const ::java::util::Map& arg0) const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::WeakHashMap::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::WeakHashMap::size() const {
    if (!::java::util::WeakHashMap::_class) ::java::util::WeakHashMap::_class = java::fetch_class("java/util/WeakHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::NavigableSet::lower(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::NavigableSet::floor(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::NavigableSet::ceiling(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::NavigableSet::higher(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::NavigableSet::pollFirst() const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::NavigableSet::pollLast() const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Iterator java::util::NavigableSet::iterator() const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::NavigableSet::descendingSet() const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingSet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::Iterator java::util::NavigableSet::descendingIterator() const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::NavigableSet::subSet(const ::java::lang::Object& arg0, bool arg1, const ::java::lang::Object& arg2, bool arg3) const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::NavigableSet::headSet(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::NavigableSet::tailSet(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::NavigableSet::subSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::NavigableSet::headSet(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::NavigableSet::tailSet(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableSet::_class) ::java::util::NavigableSet::_class = java::fetch_class("java/util/NavigableSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ListResourceBundle::ListResourceBundle() : ::java::lang::Object((jobject)0), ::java::util::ResourceBundle((jobject)0) {
    if (!::java::util::ListResourceBundle::_class) ::java::util::ListResourceBundle::_class = java::fetch_class("java/util/ListResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::Enumeration java::util::ListResourceBundle::getKeys() const {
    if (!::java::util::ListResourceBundle::_class) ::java::util::ListResourceBundle::_class = java::fetch_class("java/util/ListResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeys", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ListResourceBundle::handleGetObject(const ::java::lang::String& arg0) const {
    if (!::java::util::ListResourceBundle::_class) ::java::util::ListResourceBundle::_class = java::fetch_class("java/util/ListResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::AbstractSet::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractSet::_class) ::java::util::AbstractSet::_class = java::fetch_class("java/util/AbstractSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::AbstractSet::hashCode() const {
    if (!::java::util::AbstractSet::_class) ::java::util::AbstractSet::_class = java::fetch_class("java/util/AbstractSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::AbstractSet::removeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::AbstractSet::_class) ::java::util::AbstractSet::_class = java::fetch_class("java/util/AbstractSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::HashSet::HashSet() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::HashSet::HashSet(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::HashSet::HashSet(int32_t arg0, float arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::HashSet::HashSet(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Set((jobject)0) {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::util::HashSet::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::HashSet::clear() const {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object java::util::HashSet::clone() const {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::HashSet::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::HashSet::isEmpty() const {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator java::util::HashSet::iterator() const {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool java::util::HashSet::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::HashSet::size() const {
    if (!::java::util::HashSet::_class) ::java::util::HashSet::_class = java::fetch_class("java/util/HashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Comparator java::util::SortedMap::comparator() const {
    if (!::java::util::SortedMap::_class) ::java::util::SortedMap::_class = java::fetch_class("java/util/SortedMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "comparator", "()Ljava/util/Comparator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Comparator _ret(ret);
    return _ret;
}

::java::lang::Object java::util::SortedMap::firstKey() const {
    if (!::java::util::SortedMap::_class) ::java::util::SortedMap::_class = java::fetch_class("java/util/SortedMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "firstKey", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::SortedMap::headMap(const ::java::lang::Object& arg0) const {
    if (!::java::util::SortedMap::_class) ::java::util::SortedMap::_class = java::fetch_class("java/util/SortedMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::lang::Object java::util::SortedMap::lastKey() const {
    if (!::java::util::SortedMap::_class) ::java::util::SortedMap::_class = java::fetch_class("java/util/SortedMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastKey", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::SortedMap::subMap(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::SortedMap::_class) ::java::util::SortedMap::_class = java::fetch_class("java/util/SortedMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::SortedMap::tailMap(const ::java::lang::Object& arg0) const {
    if (!::java::util::SortedMap::_class) ::java::util::SortedMap::_class = java::fetch_class("java/util/SortedMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::util::Currency java::util::Currency::getInstance(const ::java::lang::String& arg0){
    if (!::java::util::Currency::_class) ::java::util::Currency::_class = java::fetch_class("java/util/Currency");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/lang/String;)Ljava/util/Currency;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Currency _ret(ret);
    return _ret;
}

::java::util::Currency java::util::Currency::getInstance(const ::java::util::Locale& arg0){
    if (!::java::util::Currency::_class) ::java::util::Currency::_class = java::fetch_class("java/util/Currency");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/util/Locale;)Ljava/util/Currency;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Currency _ret(ret);
    return _ret;
}

::java::lang::String java::util::Currency::getCurrencyCode() const {
    if (!::java::util::Currency::_class) ::java::util::Currency::_class = java::fetch_class("java/util/Currency");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCurrencyCode", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Currency::getSymbol() const {
    if (!::java::util::Currency::_class) ::java::util::Currency::_class = java::fetch_class("java/util/Currency");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSymbol", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Currency::getSymbol(const ::java::util::Locale& arg0) const {
    if (!::java::util::Currency::_class) ::java::util::Currency::_class = java::fetch_class("java/util/Currency");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSymbol", "(Ljava/util/Locale;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::Currency::getDefaultFractionDigits() const {
    if (!::java::util::Currency::_class) ::java::util::Currency::_class = java::fetch_class("java/util/Currency");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDefaultFractionDigits", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::Currency::toString() const {
    if (!::java::util::Currency::_class) ::java::util::Currency::_class = java::fetch_class("java/util/Currency");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::TimerTask::cancel() const {
    if (!::java::util::TimerTask::_class) ::java::util::TimerTask::_class = java::fetch_class("java/util/TimerTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int64_t java::util::TimerTask::scheduledExecutionTime() const {
    if (!::java::util::TimerTask::_class) ::java::util::TimerTask::_class = java::fetch_class("java/util/TimerTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduledExecutionTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::util::TimerTask::run() const {
    if (!::java::util::TimerTask::_class) ::java::util::TimerTask::_class = java::fetch_class("java/util/TimerTask");
    static jmethodID mid = java::jni->GetMethodID(_class, "run", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::AbstractSequentialList::add(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::AbstractSequentialList::_class) ::java::util::AbstractSequentialList::_class = java::fetch_class("java/util/AbstractSequentialList");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::AbstractSequentialList::addAll(int32_t arg0, const ::java::util::Collection& arg1) const {
    if (!::java::util::AbstractSequentialList::_class) ::java::util::AbstractSequentialList::_class = java::fetch_class("java/util/AbstractSequentialList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(ILjava/util/Collection;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object java::util::AbstractSequentialList::get(int32_t arg0) const {
    if (!::java::util::AbstractSequentialList::_class) ::java::util::AbstractSequentialList::_class = java::fetch_class("java/util/AbstractSequentialList");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Iterator java::util::AbstractSequentialList::iterator() const {
    if (!::java::util::AbstractSequentialList::_class) ::java::util::AbstractSequentialList::_class = java::fetch_class("java/util/AbstractSequentialList");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::ListIterator java::util::AbstractSequentialList::listIterator(int32_t arg0) const {
    if (!::java::util::AbstractSequentialList::_class) ::java::util::AbstractSequentialList::_class = java::fetch_class("java/util/AbstractSequentialList");
    static jmethodID mid = java::jni->GetMethodID(_class, "listIterator", "(I)Ljava/util/ListIterator;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ListIterator _ret(ret);
    return _ret;
}

::java::lang::Object java::util::AbstractSequentialList::remove(int32_t arg0) const {
    if (!::java::util::AbstractSequentialList::_class) ::java::util::AbstractSequentialList::_class = java::fetch_class("java/util/AbstractSequentialList");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::AbstractSequentialList::set(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::AbstractSequentialList::_class) ::java::util::AbstractSequentialList::_class = java::fetch_class("java/util/AbstractSequentialList");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::HashMap::HashMap() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::HashMap::HashMap(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::HashMap::HashMap(int32_t arg0, float arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::HashMap::HashMap(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::HashMap::clone() const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::HashMap::isEmpty() const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::HashMap::size() const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::HashMap::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::HashMap::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::HashMap::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::HashMap::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::HashMap::putAll(const ::java::util::Map& arg0) const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::HashMap::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::HashMap::clear() const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Set java::util::HashMap::keySet() const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Collection java::util::HashMap::values() const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Set java::util::HashMap::entrySet() const {
    if (!::java::util::HashMap::_class) ::java::util::HashMap::_class = java::fetch_class("java/util/HashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::PropertyResourceBundle::PropertyResourceBundle(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::util::ResourceBundle((jobject)0) {
    if (!::java::util::PropertyResourceBundle::_class) ::java::util::PropertyResourceBundle::_class = java::fetch_class("java/util/PropertyResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::PropertyResourceBundle::PropertyResourceBundle(const ::java::io::Reader& arg0) : ::java::lang::Object((jobject)0), ::java::util::ResourceBundle((jobject)0) {
    if (!::java::util::PropertyResourceBundle::_class) ::java::util::PropertyResourceBundle::_class = java::fetch_class("java/util/PropertyResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::Enumeration java::util::PropertyResourceBundle::getKeys() const {
    if (!::java::util::PropertyResourceBundle::_class) ::java::util::PropertyResourceBundle::_class = java::fetch_class("java/util/PropertyResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeys", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::lang::Object java::util::PropertyResourceBundle::handleGetObject(const ::java::lang::String& arg0) const {
    if (!::java::util::PropertyResourceBundle::_class) ::java::util::PropertyResourceBundle::_class = java::fetch_class("java/util/PropertyResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleGetObject", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TreeSet::TreeSet() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TreeSet::TreeSet(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TreeSet::TreeSet(const ::java::util::Comparator& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Comparator;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TreeSet::TreeSet(const ::java::util::SortedSet& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::NavigableSet((jobject)0), ::java::util::Set((jobject)0), ::java::util::SortedSet((jobject)0) {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/SortedSet;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::util::TreeSet::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::TreeSet::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::TreeSet::clear() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object java::util::TreeSet::clone() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Comparator java::util::TreeSet::comparator() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "comparator", "()Ljava/util/Comparator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Comparator _ret(ret);
    return _ret;
}

bool java::util::TreeSet::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::TreeSet::isEmpty() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator java::util::TreeSet::iterator() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::Iterator java::util::TreeSet::descendingIterator() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool java::util::TreeSet::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::TreeSet::size() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::TreeSet::first() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "first", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeSet::last() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "last", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeSet::pollFirst() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeSet::pollLast() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeSet::higher(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "higher", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeSet::lower(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "lower", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeSet::ceiling(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "ceiling", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeSet::floor(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "floor", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::TreeSet::descendingSet() const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingSet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::TreeSet::subSet(const ::java::lang::Object& arg0, bool arg1, const ::java::lang::Object& arg2, bool arg3) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSet", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::TreeSet::headSet(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "headSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::TreeSet::tailSet(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailSet", "(Ljava/lang/Object;Z)Ljava/util/NavigableSet;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::TreeSet::subSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::TreeSet::headSet(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::TreeSet::tailSet(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeSet::_class) ::java::util::TreeSet::_class = java::fetch_class("java/util/TreeSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

void java::util::Calendar::add(int32_t arg0, int32_t arg1) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::Calendar::after(const ::java::lang::Object& arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "after", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Calendar::before(const ::java::lang::Object& arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "before", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::Calendar::clear() const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::Calendar::clear(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Calendar::clone() const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::Calendar::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::Calendar::get(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::Calendar::getActualMaximum(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActualMaximum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::Calendar::getActualMinimum(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActualMinimum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

std::vector< ::java::util::Locale> java::util::Calendar::getAvailableLocales(){
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAvailableLocales", "()[Ljava/util/Locale;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::Locale> _ret(rets, ::java::util::Locale((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::Locale retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

int32_t java::util::Calendar::getFirstDayOfWeek() const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstDayOfWeek", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Calendar::getGreatestMinimum(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGreatestMinimum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::Calendar java::util::Calendar::getInstance(){
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "()Ljava/util/Calendar;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Calendar _ret(ret);
    return _ret;
}

::java::util::Calendar java::util::Calendar::getInstance(const ::java::util::Locale& arg0){
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/util/Locale;)Ljava/util/Calendar;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Calendar _ret(ret);
    return _ret;
}

::java::util::Calendar java::util::Calendar::getInstance(const ::java::util::TimeZone& arg0){
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/util/TimeZone;)Ljava/util/Calendar;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Calendar _ret(ret);
    return _ret;
}

::java::util::Calendar java::util::Calendar::getInstance(const ::java::util::TimeZone& arg0, const ::java::util::Locale& arg1){
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getInstance", "(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::Calendar _ret(ret);
    return _ret;
}

int32_t java::util::Calendar::getLeastMaximum(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeastMaximum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::Calendar::getMaximum(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::Calendar::getMinimalDaysInFirstWeek() const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimalDaysInFirstWeek", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Calendar::getMinimum(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::Date java::util::Calendar::getTime() const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

int64_t java::util::Calendar::getTimeInMillis() const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeInMillis", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

::java::util::TimeZone java::util::Calendar::getTimeZone() const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeZone", "()Ljava/util/TimeZone;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::TimeZone _ret(ret);
    return _ret;
}

int32_t java::util::Calendar::hashCode() const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::Calendar::isLenient() const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLenient", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Calendar::isSet(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSet", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::Calendar::roll(int32_t arg0, int32_t arg1) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "roll", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::Calendar::roll(int32_t arg0, bool arg1) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "roll", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::Calendar::set(int32_t arg0, int32_t arg1) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::Calendar::set(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::Calendar::set(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void java::util::Calendar::set(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

void java::util::Calendar::setFirstDayOfWeek(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFirstDayOfWeek", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Calendar::setLenient(bool arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setLenient", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Calendar::setMinimalDaysInFirstWeek(int32_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimalDaysInFirstWeek", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Calendar::setTime(const ::java::util::Date& arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Calendar::setTimeInMillis(int64_t arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeInMillis", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Calendar::setTimeZone(const ::java::util::TimeZone& arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTimeZone", "(Ljava/util/TimeZone;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::Calendar::toString() const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::Calendar::compareTo(const ::java::util::Calendar& arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/util/Calendar;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::util::Calendar::getDisplayName(int32_t arg0, int32_t arg1, const ::java::util::Locale& arg2) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "(IILjava/util/Locale;)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Map java::util::Calendar::getDisplayNames(int32_t arg0, int32_t arg1, const ::java::util::Locale& arg2) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayNames", "(IILjava/util/Locale;)Ljava/util/Map;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::Map _ret(ret);
    return _ret;
}

int32_t java::util::Calendar::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::util::Calendar::_class) ::java::util::Calendar::_class = java::fetch_class("java/util/Calendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::SimpleTimeZone::SimpleTimeZone(int32_t arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::TimeZone((jobject)0) {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::SimpleTimeZone::SimpleTimeZone(int32_t arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::TimeZone((jobject)0) {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;IIIIIIII)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::SimpleTimeZone::SimpleTimeZone(int32_t arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::TimeZone((jobject)0) {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;IIIIIIIII)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    int32_t _arg10 = arg10;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::SimpleTimeZone::SimpleTimeZone(int32_t arg0, const ::java::lang::String& arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::TimeZone((jobject)0) {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/lang/String;IIIIIIIIIII)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    int32_t _arg6 = arg6;
    int32_t _arg7 = arg7;
    int32_t _arg8 = arg8;
    int32_t _arg9 = arg9;
    int32_t _arg10 = arg10;
    int32_t _arg11 = arg11;
    int32_t _arg12 = arg12;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5, _arg6, _arg7, _arg8, _arg9, _arg10, _arg11, _arg12);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::SimpleTimeZone::clone() const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::SimpleTimeZone::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::SimpleTimeZone::getDSTSavings() const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDSTSavings", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::SimpleTimeZone::getOffset(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffset", "(IIIIII)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

int32_t java::util::SimpleTimeZone::getOffset(int64_t arg0) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffset", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::SimpleTimeZone::getRawOffset() const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::SimpleTimeZone::hashCode() const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::SimpleTimeZone::hasSameRules(const ::java::util::TimeZone& arg0) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSameRules", "(Ljava/util/TimeZone;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::SimpleTimeZone::inDaylightTime(const ::java::util::Date& arg0) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "inDaylightTime", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::SimpleTimeZone::setDSTSavings(int32_t arg0) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDSTSavings", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::SimpleTimeZone::setEndRule(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEndRule", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::SimpleTimeZone::setEndRule(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEndRule", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::SimpleTimeZone::setEndRule(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, bool arg4) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setEndRule", "(IIIIZ)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void java::util::SimpleTimeZone::setRawOffset(int32_t arg0) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRawOffset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::SimpleTimeZone::setStartRule(int32_t arg0, int32_t arg1, int32_t arg2) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartRule", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::SimpleTimeZone::setStartRule(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartRule", "(IIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::SimpleTimeZone::setStartRule(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, bool arg4) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartRule", "(IIIIZ)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    bool _arg4 = arg4;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

void java::util::SimpleTimeZone::setStartYear(int32_t arg0) const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStartYear", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::SimpleTimeZone::toString() const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::SimpleTimeZone::useDaylightTime() const {
    if (!::java::util::SimpleTimeZone::_class) ::java::util::SimpleTimeZone::_class = java::fetch_class("java/util/SimpleTimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "useDaylightTime", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Hashtable::Hashtable() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Hashtable::Hashtable(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Hashtable::Hashtable(int32_t arg0, float arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Hashtable::Hashtable(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::Hashtable::clone() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::Hashtable::isEmpty() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::Hashtable::size() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::Hashtable::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::Hashtable::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Hashtable::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Hashtable::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Hashtable::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::Hashtable::putAll(const ::java::util::Map& arg0) const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Hashtable::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::Hashtable::clear() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Set java::util::Hashtable::keySet() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Collection java::util::Hashtable::values() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Set java::util::Hashtable::entrySet() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Enumeration java::util::Hashtable::keys() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "keys", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::util::Enumeration java::util::Hashtable::elements() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "elements", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

bool java::util::Hashtable::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::Hashtable::hashCode() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::Hashtable::toString() const {
    if (!::java::util::Hashtable::_class) ::java::util::Hashtable::_class = java::fetch_class("java/util/Hashtable");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Locale::Locale(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Locale::Locale(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Locale::Locale(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::Locale::clone() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::Locale::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

std::vector< ::java::util::Locale> java::util::Locale::getAvailableLocales(){
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAvailableLocales", "()[Ljava/util/Locale;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::Locale> _ret(rets, ::java::util::Locale((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::Locale retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::util::Locale::getCountry() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCountry", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Locale java::util::Locale::getDefault(){
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Ljava/util/Locale;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Locale _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getDisplayCountry() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayCountry", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getDisplayCountry(const ::java::util::Locale& arg0) const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayCountry", "(Ljava/util/Locale;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getDisplayLanguage() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayLanguage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getDisplayLanguage(const ::java::util::Locale& arg0) const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayLanguage", "(Ljava/util/Locale;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getDisplayName() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getDisplayName(const ::java::util::Locale& arg0) const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getDisplayVariant() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayVariant", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getDisplayVariant(const ::java::util::Locale& arg0) const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayVariant", "(Ljava/util/Locale;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getISO3Country() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getISO3Country", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getISO3Language() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getISO3Language", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> java::util::Locale::getISOCountries(){
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getISOCountries", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> java::util::Locale::getISOLanguages(){
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getISOLanguages", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::util::Locale::getLanguage() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLanguage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Locale::getVariant() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "getVariant", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::Locale::hashCode() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::Locale::setDefault(const ::java::util::Locale& arg0){
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefault", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::lang::String java::util::Locale::toString() const {
    if (!::java::util::Locale::_class) ::java::util::Locale::_class = java::fetch_class("java/util/Locale");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ArrayDeque::ArrayDeque() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ArrayDeque::ArrayDeque(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ArrayDeque::ArrayDeque(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::ArrayDeque::addFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFirst", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::ArrayDeque::addLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLast", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::ArrayDeque::offerFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerFirst", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::ArrayDeque::offerLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerLast", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::ArrayDeque::removeFirst() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ArrayDeque::removeLast() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ArrayDeque::pollFirst() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ArrayDeque::pollLast() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ArrayDeque::getFirst() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ArrayDeque::getLast() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ArrayDeque::peekFirst() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ArrayDeque::peekLast() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::ArrayDeque::removeFirstOccurrence(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::ArrayDeque::removeLastOccurrence(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::ArrayDeque::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::ArrayDeque::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::ArrayDeque::remove() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ArrayDeque::poll() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ArrayDeque::element() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "element", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ArrayDeque::peek() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::ArrayDeque::push(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "push", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::ArrayDeque::pop() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pop", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::ArrayDeque::size() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::ArrayDeque::isEmpty() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator java::util::ArrayDeque::iterator() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::Iterator java::util::ArrayDeque::descendingIterator() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool java::util::ArrayDeque::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::ArrayDeque::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::ArrayDeque::clear() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

std::vector< ::java::lang::Object> java::util::ArrayDeque::toArray() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::util::ArrayDeque::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::ArrayDeque java::util::ArrayDeque::clone() const {
    if (!::java::util::ArrayDeque::_class) ::java::util::ArrayDeque::_class = java::fetch_class("java/util/ArrayDeque");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/util/ArrayDeque;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ArrayDeque _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::EnumMap::EnumMap(const ::java::lang::Class& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Class;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::EnumMap::EnumMap(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::EnumMap::clear() const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::EnumMap java::util::EnumMap::clone() const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/util/EnumMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::EnumMap _ret(ret);
    return _ret;
}

bool java::util::EnumMap::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::EnumMap::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Set java::util::EnumMap::entrySet() const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

bool java::util::EnumMap::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::EnumMap::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Set java::util::EnumMap::keySet() const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::lang::Object java::util::EnumMap::put(const ::java::lang::Enum& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Enum;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::EnumMap::putAll(const ::java::util::Map& arg0) const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::EnumMap::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::EnumMap::size() const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Collection java::util::EnumMap::values() const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::lang::Object java::util::EnumMap::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::EnumMap::_class) ::java::util::EnumMap::_class = java::fetch_class("java/util/EnumMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ResourceBundle::ResourceBundle() : ::java::lang::Object((jobject)0) {
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::ResourceBundle java::util::ResourceBundle::getBundle(const ::java::lang::String& arg0){
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::ResourceBundle _ret(ret);
    return _ret;
}

::java::util::ResourceBundle java::util::ResourceBundle::getBundle(const ::java::lang::String& arg0, const ::java::util::Locale& arg1){
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/ResourceBundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::ResourceBundle _ret(ret);
    return _ret;
}

::java::util::ResourceBundle java::util::ResourceBundle::getBundle(const ::java::lang::String& arg0, const ::java::util::Locale& arg1, const ::java::lang::ClassLoader& arg2){
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;)Ljava/util/ResourceBundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::util::ResourceBundle _ret(ret);
    return _ret;
}

::java::util::ResourceBundle java::util::ResourceBundle::getBundle(const ::java::lang::String& arg0, const ::java::util::ResourceBundle_Control& arg1){
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBundle", "(Ljava/lang/String;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::ResourceBundle _ret(ret);
    return _ret;
}

::java::util::ResourceBundle java::util::ResourceBundle::getBundle(const ::java::lang::String& arg0, const ::java::util::Locale& arg1, const ::java::util::ResourceBundle_Control& arg2){
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::util::ResourceBundle _ret(ret);
    return _ret;
}

::java::util::ResourceBundle java::util::ResourceBundle::getBundle(const ::java::lang::String& arg0, const ::java::util::Locale& arg1, const ::java::lang::ClassLoader& arg2, const ::java::util::ResourceBundle_Control& arg3){
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle$Control;)Ljava/util/ResourceBundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::ResourceBundle _ret(ret);
    return _ret;
}

::java::util::Enumeration java::util::ResourceBundle::getKeys() const {
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKeys", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::util::Locale java::util::ResourceBundle::getLocale() const {
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocale", "()Ljava/util/Locale;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Locale _ret(ret);
    return _ret;
}

::java::lang::Object java::util::ResourceBundle::getObject(const ::java::lang::String& arg0) const {
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getObject", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::util::ResourceBundle::getString(const ::java::lang::String& arg0) const {
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getString", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> java::util::ResourceBundle::getStringArray(const ::java::lang::String& arg0) const {
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStringArray", "(Ljava/lang/String;)[Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void java::util::ResourceBundle::clearCache(){
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearCache", "()V");
    java::jni->CallStaticVoidMethod(_class, mid);
}

void java::util::ResourceBundle::clearCache(const ::java::lang::ClassLoader& arg0){
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "clearCache", "(Ljava/lang/ClassLoader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

bool java::util::ResourceBundle::containsKey(const ::java::lang::String& arg0) const {
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Set java::util::ResourceBundle::keySet() const {
    if (!::java::util::ResourceBundle::_class) ::java::util::ResourceBundle::_class = java::fetch_class("java/util/ResourceBundle");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::InvalidPropertiesFormatException::_class) ::java::util::InvalidPropertiesFormatException::_class = java::fetch_class("java/util/InvalidPropertiesFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::InvalidPropertiesFormatException::InvalidPropertiesFormatException(const ::java::lang::Throwable& arg0) : ::java::lang::Object((jobject)0), ::java::io::IOException((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::InvalidPropertiesFormatException::_class) ::java::util::InvalidPropertiesFormatException::_class = java::fetch_class("java/util/InvalidPropertiesFormatException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::Observer::update(const ::java::util::Observable& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::Observer::_class) ::java::util::Observer::_class = java::fetch_class("java/util/Observer");
    static jmethodID mid = java::jni->GetMethodID(_class, "update", "(Ljava/util/Observable;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::IllegalFormatWidthException::IllegalFormatWidthException(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::IllegalFormatWidthException::_class) ::java::util::IllegalFormatWidthException::_class = java::fetch_class("java/util/IllegalFormatWidthException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::util::IllegalFormatWidthException::getWidth() const {
    if (!::java::util::IllegalFormatWidthException::_class) ::java::util::IllegalFormatWidthException::_class = java::fetch_class("java/util/IllegalFormatWidthException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWidth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::IllegalFormatWidthException::getMessage() const {
    if (!::java::util::IllegalFormatWidthException::_class) ::java::util::IllegalFormatWidthException::_class = java::fetch_class("java/util/IllegalFormatWidthException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::List java::util::Arrays::asList(const std::vector< ::java::lang::Object>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asList", "([Ljava/lang/Object;)Ljava/util/List;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

int32_t java::util::Arrays::binarySearch(const std::vector< int8_t>& arg0, int8_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([BB)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int8_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Arrays::binarySearch(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, int8_t arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([BIIB)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int8_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::util::Arrays::binarySearch(const std::vector< uint16_t>& arg0, uint16_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([CC)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    uint16_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Arrays::binarySearch(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, uint16_t arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([CIIC)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    uint16_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::util::Arrays::binarySearch(const std::vector< double>& arg0, double arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([DD)I");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    double _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Arrays::binarySearch(const std::vector< double>& arg0, int32_t arg1, int32_t arg2, double arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([DIID)I");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    double _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::util::Arrays::binarySearch(const std::vector< float>& arg0, float arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([FF)I");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    float _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Arrays::binarySearch(const std::vector< float>& arg0, int32_t arg1, int32_t arg2, float arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([FIIF)I");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::util::Arrays::binarySearch(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([II)I");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Arrays::binarySearch(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([IIII)I");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::util::Arrays::binarySearch(const std::vector< int64_t>& arg0, int64_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([JJ)I");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int64_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Arrays::binarySearch(const std::vector< int64_t>& arg0, int32_t arg1, int32_t arg2, int64_t arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([JIIJ)I");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::util::Arrays::binarySearch(const std::vector< ::java::lang::Object>& arg0, const ::java::lang::Object& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Arrays::binarySearch(const std::vector< ::java::lang::Object>& arg0, int32_t arg1, int32_t arg2, const ::java::lang::Object& arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::util::Arrays::binarySearch(const std::vector< ::java::lang::Object>& arg0, const ::java::lang::Object& arg1, const ::java::util::Comparator& arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

int32_t java::util::Arrays::binarySearch(const std::vector< ::java::lang::Object>& arg0, int32_t arg1, int32_t arg2, const ::java::lang::Object& arg3, const ::java::util::Comparator& arg4){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int32_t java::util::Arrays::binarySearch(const std::vector< int16_t>& arg0, int16_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([SS)I");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int16_t _arg1 = arg1;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Arrays::binarySearch(const std::vector< int16_t>& arg0, int32_t arg1, int32_t arg2, int16_t arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "([SIIS)I");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int16_t _arg3 = arg3;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::Arrays::fill(const std::vector< int8_t>& arg0, int8_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([BB)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int8_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::Arrays::fill(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2, int8_t arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([BIIB)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int8_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::Arrays::fill(const std::vector< int16_t>& arg0, int16_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([SS)V");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int16_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::Arrays::fill(const std::vector< int16_t>& arg0, int32_t arg1, int32_t arg2, int16_t arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([SIIS)V");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int16_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::Arrays::fill(const std::vector< uint16_t>& arg0, uint16_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([CC)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    uint16_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::Arrays::fill(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2, uint16_t arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([CIIC)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    uint16_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::Arrays::fill(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([II)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::Arrays::fill(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2, int32_t arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([IIII)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::Arrays::fill(const std::vector< int64_t>& arg0, int64_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([JJ)V");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int64_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::Arrays::fill(const std::vector< int64_t>& arg0, int32_t arg1, int32_t arg2, int64_t arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([JIIJ)V");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int64_t _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::Arrays::fill(const std::vector< float>& arg0, float arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([FF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    float _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::Arrays::fill(const std::vector< float>& arg0, int32_t arg1, int32_t arg2, float arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([FIIF)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    float _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::Arrays::fill(const std::vector< double>& arg0, double arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([DD)V");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    double _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::Arrays::fill(const std::vector< double>& arg0, int32_t arg1, int32_t arg2, double arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([DIID)V");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    double _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::Arrays::fill(const std::vector< bool>& arg0, bool arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([ZZ)V");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    bool _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::Arrays::fill(const std::vector< bool>& arg0, int32_t arg1, int32_t arg2, bool arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([ZIIZ)V");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    bool _arg3 = arg3;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::Arrays::fill(const std::vector< ::java::lang::Object>& arg0, const ::java::lang::Object& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([Ljava/lang/Object;Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::Arrays::fill(const std::vector< ::java::lang::Object>& arg0, int32_t arg1, int32_t arg2, const ::java::lang::Object& arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "([Ljava/lang/Object;IILjava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

int32_t java::util::Arrays::hashCode(const std::vector< bool>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "([Z)I");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::util::Arrays::hashCode(const std::vector< int32_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "([I)I");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::util::Arrays::hashCode(const std::vector< int16_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "([S)I");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::util::Arrays::hashCode(const std::vector< uint16_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "([C)I");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::util::Arrays::hashCode(const std::vector< int8_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "([B)I");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::util::Arrays::hashCode(const std::vector< int64_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "([J)I");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::util::Arrays::hashCode(const std::vector< float>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "([F)I");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::util::Arrays::hashCode(const std::vector< double>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "([D)I");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::util::Arrays::hashCode(const std::vector< ::java::lang::Object>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "hashCode", "([Ljava/lang/Object;)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

int32_t java::util::Arrays::deepHashCode(const std::vector< ::java::lang::Object>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deepHashCode", "([Ljava/lang/Object;)I");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    return java::jni->CallStaticIntMethod(_class, mid, _arg0);
}

bool java::util::Arrays::equals(const std::vector< int8_t>& arg0, const std::vector< int8_t>& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "([B[B)Z");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jbyteArray _arg1 = java::jni->NewByteArray(arg1.size());
    java::jni->SetByteArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool java::util::Arrays::equals(const std::vector< int16_t>& arg0, const std::vector< int16_t>& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "([S[S)Z");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jshortArray _arg1 = java::jni->NewShortArray(arg1.size());
    java::jni->SetShortArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool java::util::Arrays::equals(const std::vector< uint16_t>& arg0, const std::vector< uint16_t>& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "([C[C)Z");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jcharArray _arg1 = java::jni->NewCharArray(arg1.size());
    java::jni->SetCharArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool java::util::Arrays::equals(const std::vector< int32_t>& arg0, const std::vector< int32_t>& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "([I[I)Z");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jintArray _arg1 = java::jni->NewIntArray(arg1.size());
    java::jni->SetIntArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool java::util::Arrays::equals(const std::vector< int64_t>& arg0, const std::vector< int64_t>& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "([J[J)Z");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jlongArray _arg1 = java::jni->NewLongArray(arg1.size());
    java::jni->SetLongArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool java::util::Arrays::equals(const std::vector< float>& arg0, const std::vector< float>& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "([F[F)Z");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jfloatArray _arg1 = java::jni->NewFloatArray(arg1.size());
    java::jni->SetFloatArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool java::util::Arrays::equals(const std::vector< double>& arg0, const std::vector< double>& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "([D[D)Z");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jdoubleArray _arg1 = java::jni->NewDoubleArray(arg1.size());
    java::jni->SetDoubleArrayRegion(_arg1, 0, arg1.size(), arg1.data());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool java::util::Arrays::equals(const std::vector< bool>& arg0, const std::vector< bool>& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "([Z[Z)Z");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    jbooleanArray _arg1 = java::jni->NewBooleanArray(arg1.size());
    unsigned arg1s = arg1.size();
    std::unique_ptr<bool[]> arg1t(new bool[arg1s]);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      arg1t[arg1i] = arg1[arg1i];
    }
    java::jni->SetBooleanArrayRegion(_arg1, 0, arg1s, (const jboolean*)arg1t.get());
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool java::util::Arrays::equals(const std::vector< ::java::lang::Object>& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "equals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool java::util::Arrays::deepEquals(const std::vector< ::java::lang::Object>& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deepEquals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

void java::util::Arrays::sort(const std::vector< int8_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::Arrays::sort(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([BII)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::util::Arrays::sort(const std::vector< uint16_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([C)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::Arrays::sort(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([CII)V");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::util::Arrays::sort(const std::vector< double>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([D)V");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::Arrays::sort(const std::vector< double>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([DII)V");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::util::Arrays::sort(const std::vector< float>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([F)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::Arrays::sort(const std::vector< float>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([FII)V");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::util::Arrays::sort(const std::vector< int32_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([I)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::Arrays::sort(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([III)V");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::util::Arrays::sort(const std::vector< int64_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([J)V");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::Arrays::sort(const std::vector< int64_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([JII)V");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::util::Arrays::sort(const std::vector< int16_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([S)V");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::Arrays::sort(const std::vector< int16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([SII)V");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::util::Arrays::sort(const std::vector< ::java::lang::Object>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::Arrays::sort(const std::vector< ::java::lang::Object>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([Ljava/lang/Object;II)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::util::Arrays::sort(const std::vector< ::java::lang::Object>& arg0, int32_t arg1, int32_t arg2, const ::java::util::Comparator& arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([Ljava/lang/Object;IILjava/util/Comparator;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
}

void java::util::Arrays::sort(const std::vector< ::java::lang::Object>& arg0, const ::java::util::Comparator& arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "([Ljava/lang/Object;Ljava/util/Comparator;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::String java::util::Arrays::toString(const std::vector< bool>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "([Z)Ljava/lang/String;");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Arrays::toString(const std::vector< int8_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "([B)Ljava/lang/String;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Arrays::toString(const std::vector< uint16_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "([C)Ljava/lang/String;");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Arrays::toString(const std::vector< double>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "([D)Ljava/lang/String;");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Arrays::toString(const std::vector< float>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "([F)Ljava/lang/String;");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Arrays::toString(const std::vector< int32_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "([I)Ljava/lang/String;");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Arrays::toString(const std::vector< int64_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "([J)Ljava/lang/String;");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Arrays::toString(const std::vector< int16_t>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "([S)Ljava/lang/String;");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Arrays::toString(const std::vector< ::java::lang::Object>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "toString", "([Ljava/lang/Object;)Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Arrays::deepToString(const std::vector< ::java::lang::Object>& arg0){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "deepToString", "([Ljava/lang/Object;)Ljava/lang/String;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

std::vector< bool> java::util::Arrays::copyOf(const std::vector< bool>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "([ZI)[Z");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::util::Arrays::copyOf(const std::vector< int8_t>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "([BI)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< uint16_t> java::util::Arrays::copyOf(const std::vector< uint16_t>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "([CI)[C");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< double> java::util::Arrays::copyOf(const std::vector< double>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "([DI)[D");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jdouble* reta = java::jni->GetDoubleArrayElements((jdoubleArray)ret, nullptr);
    std::vector< double> _ret(reta, reta+rets);
    java::jni->ReleaseDoubleArrayElements((jdoubleArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< float> java::util::Arrays::copyOf(const std::vector< float>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "([FI)[F");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int32_t> java::util::Arrays::copyOf(const std::vector< int32_t>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "([II)[I");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int64_t> java::util::Arrays::copyOf(const std::vector< int64_t>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "([JI)[J");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jlong* reta = java::jni->GetLongArrayElements((jlongArray)ret, nullptr);
    std::vector< int64_t> _ret(reta, reta+rets);
    java::jni->ReleaseLongArrayElements((jlongArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int16_t> java::util::Arrays::copyOf(const std::vector< int16_t>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "([SI)[S");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jshort* reta = java::jni->GetShortArrayElements((jshortArray)ret, nullptr);
    std::vector< int16_t> _ret(reta, reta+rets);
    java::jni->ReleaseShortArrayElements((jshortArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< ::java::lang::Object> java::util::Arrays::copyOf(const std::vector< ::java::lang::Object>& arg0, int32_t arg1){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "([Ljava/lang/Object;I)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::util::Arrays::copyOf(const std::vector< ::java::lang::Object>& arg0, int32_t arg1, const ::java::lang::Class& arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< bool> java::util::Arrays::copyOfRange(const std::vector< bool>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOfRange", "([ZII)[Z");
    jbooleanArray _arg0 = java::jni->NewBooleanArray(arg0.size());
    unsigned arg0s = arg0.size();
    std::unique_ptr<bool[]> arg0t(new bool[arg0s]);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      arg0t[arg0i] = arg0[arg0i];
    }
    java::jni->SetBooleanArrayRegion(_arg0, 0, arg0s, (const jboolean*)arg0t.get());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jboolean* reta = java::jni->GetBooleanArrayElements((jbooleanArray)ret, nullptr);
    std::vector< bool> _ret(reta, reta+rets);
    java::jni->ReleaseBooleanArrayElements((jbooleanArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int8_t> java::util::Arrays::copyOfRange(const std::vector< int8_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOfRange", "([BII)[B");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jbyte* reta = java::jni->GetByteArrayElements((jbyteArray)ret, nullptr);
    std::vector< int8_t> _ret(reta, reta+rets);
    java::jni->ReleaseByteArrayElements((jbyteArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< uint16_t> java::util::Arrays::copyOfRange(const std::vector< uint16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOfRange", "([CII)[C");
    jcharArray _arg0 = java::jni->NewCharArray(arg0.size());
    java::jni->SetCharArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jchar* reta = java::jni->GetCharArrayElements((jcharArray)ret, nullptr);
    std::vector< uint16_t> _ret(reta, reta+rets);
    java::jni->ReleaseCharArrayElements((jcharArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< double> java::util::Arrays::copyOfRange(const std::vector< double>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOfRange", "([DII)[D");
    jdoubleArray _arg0 = java::jni->NewDoubleArray(arg0.size());
    java::jni->SetDoubleArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jdouble* reta = java::jni->GetDoubleArrayElements((jdoubleArray)ret, nullptr);
    std::vector< double> _ret(reta, reta+rets);
    java::jni->ReleaseDoubleArrayElements((jdoubleArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< float> java::util::Arrays::copyOfRange(const std::vector< float>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOfRange", "([FII)[F");
    jfloatArray _arg0 = java::jni->NewFloatArray(arg0.size());
    java::jni->SetFloatArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jfloat* reta = java::jni->GetFloatArrayElements((jfloatArray)ret, nullptr);
    std::vector< float> _ret(reta, reta+rets);
    java::jni->ReleaseFloatArrayElements((jfloatArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int32_t> java::util::Arrays::copyOfRange(const std::vector< int32_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOfRange", "([III)[I");
    jintArray _arg0 = java::jni->NewIntArray(arg0.size());
    java::jni->SetIntArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jint* reta = java::jni->GetIntArrayElements((jintArray)ret, nullptr);
    std::vector< int32_t> _ret(reta, reta+rets);
    java::jni->ReleaseIntArrayElements((jintArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int64_t> java::util::Arrays::copyOfRange(const std::vector< int64_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOfRange", "([JII)[J");
    jlongArray _arg0 = java::jni->NewLongArray(arg0.size());
    java::jni->SetLongArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jlong* reta = java::jni->GetLongArrayElements((jlongArray)ret, nullptr);
    std::vector< int64_t> _ret(reta, reta+rets);
    java::jni->ReleaseLongArrayElements((jlongArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< int16_t> java::util::Arrays::copyOfRange(const std::vector< int16_t>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOfRange", "([SII)[S");
    jshortArray _arg0 = java::jni->NewShortArray(arg0.size());
    java::jni->SetShortArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    jshort* reta = java::jni->GetShortArrayElements((jshortArray)ret, nullptr);
    std::vector< int16_t> _ret(reta, reta+rets);
    java::jni->ReleaseShortArrayElements((jshortArray)ret, reta, JNI_ABORT);
    return _ret;
}

std::vector< ::java::lang::Object> java::util::Arrays::copyOfRange(const std::vector< ::java::lang::Object>& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOfRange", "([Ljava/lang/Object;II)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::util::Arrays::copyOfRange(const std::vector< ::java::lang::Object>& arg0, int32_t arg1, int32_t arg2, const ::java::lang::Class& arg3){
    if (!::java::util::Arrays::_class) ::java::util::Arrays::_class = java::fetch_class("java/util/Arrays");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOfRange", "([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Map_Entry((jobject)0) {
    if (!::java::util::AbstractMap_SimpleImmutableEntry::_class) ::java::util::AbstractMap_SimpleImmutableEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleImmutableEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::AbstractMap_SimpleImmutableEntry::AbstractMap_SimpleImmutableEntry(const ::java::util::Map_Entry& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Map_Entry((jobject)0) {
    if (!::java::util::AbstractMap_SimpleImmutableEntry::_class) ::java::util::AbstractMap_SimpleImmutableEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleImmutableEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map$Entry;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::AbstractMap_SimpleImmutableEntry::getKey() const {
    if (!::java::util::AbstractMap_SimpleImmutableEntry::_class) ::java::util::AbstractMap_SimpleImmutableEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleImmutableEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::AbstractMap_SimpleImmutableEntry::getValue() const {
    if (!::java::util::AbstractMap_SimpleImmutableEntry::_class) ::java::util::AbstractMap_SimpleImmutableEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleImmutableEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::AbstractMap_SimpleImmutableEntry::setValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractMap_SimpleImmutableEntry::_class) ::java::util::AbstractMap_SimpleImmutableEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleImmutableEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::AbstractMap_SimpleImmutableEntry::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractMap_SimpleImmutableEntry::_class) ::java::util::AbstractMap_SimpleImmutableEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleImmutableEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::AbstractMap_SimpleImmutableEntry::hashCode() const {
    if (!::java::util::AbstractMap_SimpleImmutableEntry::_class) ::java::util::AbstractMap_SimpleImmutableEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleImmutableEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::AbstractMap_SimpleImmutableEntry::toString() const {
    if (!::java::util::AbstractMap_SimpleImmutableEntry::_class) ::java::util::AbstractMap_SimpleImmutableEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleImmutableEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::MissingFormatArgumentException::MissingFormatArgumentException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::MissingFormatArgumentException::_class) ::java::util::MissingFormatArgumentException::_class = java::fetch_class("java/util/MissingFormatArgumentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::MissingFormatArgumentException::getFormatSpecifier() const {
    if (!::java::util::MissingFormatArgumentException::_class) ::java::util::MissingFormatArgumentException::_class = java::fetch_class("java/util/MissingFormatArgumentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormatSpecifier", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::MissingFormatArgumentException::getMessage() const {
    if (!::java::util::MissingFormatArgumentException::_class) ::java::util::MissingFormatArgumentException::_class = java::fetch_class("java/util/MissingFormatArgumentException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::FormatterClosedException::FormatterClosedException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalStateException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::FormatterClosedException::_class) ::java::util::FormatterClosedException::_class = java::fetch_class("java/util/FormatterClosedException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::PriorityQueue::PriorityQueue() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::PriorityQueue::PriorityQueue(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::PriorityQueue::PriorityQueue(int32_t arg0, const ::java::util::Comparator& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(ILjava/util/Comparator;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::PriorityQueue::PriorityQueue(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::PriorityQueue::PriorityQueue(const ::java::util::SortedSet& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractQueue((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/SortedSet;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::Iterator java::util::PriorityQueue::iterator() const {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

int32_t java::util::PriorityQueue::size() const {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::PriorityQueue::clear() const {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::PriorityQueue::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::PriorityQueue::poll() const {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::PriorityQueue::peek() const {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Comparator java::util::PriorityQueue::comparator() const {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "comparator", "()Ljava/util/Comparator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Comparator _ret(ret);
    return _ret;
}

bool java::util::PriorityQueue::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::PriorityQueue::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::PriorityQueue::_class) ::java::util::PriorityQueue::_class = java::fetch_class("java/util/PriorityQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::IllegalFormatCodePointException::IllegalFormatCodePointException(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::IllegalFormatCodePointException::_class) ::java::util::IllegalFormatCodePointException::_class = java::fetch_class("java/util/IllegalFormatCodePointException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::util::IllegalFormatCodePointException::getCodePoint() const {
    if (!::java::util::IllegalFormatCodePointException::_class) ::java::util::IllegalFormatCodePointException::_class = java::fetch_class("java/util/IllegalFormatCodePointException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCodePoint", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::IllegalFormatCodePointException::getMessage() const {
    if (!::java::util::IllegalFormatCodePointException::_class) ::java::util::IllegalFormatCodePointException::_class = java::fetch_class("java/util/IllegalFormatCodePointException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::ServiceLoader::reload() const {
    if (!::java::util::ServiceLoader::_class) ::java::util::ServiceLoader::_class = java::fetch_class("java/util/ServiceLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "reload", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Iterator java::util::ServiceLoader::iterator() const {
    if (!::java::util::ServiceLoader::_class) ::java::util::ServiceLoader::_class = java::fetch_class("java/util/ServiceLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::ServiceLoader java::util::ServiceLoader::load(const ::java::lang::Class& arg0, const ::java::lang::ClassLoader& arg1){
    if (!::java::util::ServiceLoader::_class) ::java::util::ServiceLoader::_class = java::fetch_class("java/util/ServiceLoader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "load", "(Ljava/lang/Class;Ljava/lang/ClassLoader;)Ljava/util/ServiceLoader;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::ServiceLoader _ret(ret);
    return _ret;
}

::java::util::ServiceLoader java::util::ServiceLoader::load(const ::java::lang::Class& arg0){
    if (!::java::util::ServiceLoader::_class) ::java::util::ServiceLoader::_class = java::fetch_class("java/util/ServiceLoader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "load", "(Ljava/lang/Class;)Ljava/util/ServiceLoader;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::ServiceLoader _ret(ret);
    return _ret;
}

::java::util::ServiceLoader java::util::ServiceLoader::loadInstalled(const ::java::lang::Class& arg0){
    if (!::java::util::ServiceLoader::_class) ::java::util::ServiceLoader::_class = java::fetch_class("java/util/ServiceLoader");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "loadInstalled", "(Ljava/lang/Class;)Ljava/util/ServiceLoader;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::ServiceLoader _ret(ret);
    return _ret;
}

::java::lang::String java::util::ServiceLoader::toString() const {
    if (!::java::util::ServiceLoader::_class) ::java::util::ServiceLoader::_class = java::fetch_class("java/util/ServiceLoader");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::Collections::binarySearch(const ::java::util::List& arg0, const ::java::lang::Object& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Collections::binarySearch(const ::java::util::List& arg0, const ::java::lang::Object& arg1, const ::java::util::Comparator& arg2){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "binarySearch", "(Ljava/util/List;Ljava/lang/Object;Ljava/util/Comparator;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::util::Collections::copy(const ::java::util::List& arg0, const ::java::util::List& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copy", "(Ljava/util/List;Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::Enumeration java::util::Collections::enumeration(const ::java::util::Collection& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "enumeration", "(Ljava/util/Collection;)Ljava/util/Enumeration;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

void java::util::Collections::fill(const ::java::util::List& arg0, const ::java::lang::Object& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fill", "(Ljava/util/List;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::lang::Comparable java::util::Collections::max(const ::java::util::Collection& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "max", "(Ljava/util/Collection;)Ljava/lang/Comparable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Comparable _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Collections::max(const ::java::util::Collection& arg0, const ::java::util::Comparator& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "max", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Comparable java::util::Collections::min(const ::java::util::Collection& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "min", "(Ljava/util/Collection;)Ljava/lang/Comparable;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::lang::Comparable _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Collections::min(const ::java::util::Collection& arg0, const ::java::util::Comparator& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "min", "(Ljava/util/Collection;Ljava/util/Comparator;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::List java::util::Collections::nCopies(int32_t arg0, const ::java::lang::Object& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nCopies", "(ILjava/lang/Object;)Ljava/util/List;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

void java::util::Collections::reverse(const ::java::util::List& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reverse", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

::java::util::Comparator java::util::Collections::reverseOrder(){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reverseOrder", "()Ljava/util/Comparator;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Comparator _ret(ret);
    return _ret;
}

::java::util::Comparator java::util::Collections::reverseOrder(const ::java::util::Comparator& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "reverseOrder", "(Ljava/util/Comparator;)Ljava/util/Comparator;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Comparator _ret(ret);
    return _ret;
}

void java::util::Collections::shuffle(const ::java::util::List& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "shuffle", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::Collections::shuffle(const ::java::util::List& arg0, const ::java::util::Random& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "shuffle", "(Ljava/util/List;Ljava/util/Random;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

::java::util::Set java::util::Collections::singleton(const ::java::lang::Object& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "singleton", "(Ljava/lang/Object;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::List java::util::Collections::singletonList(const ::java::lang::Object& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "singletonList", "(Ljava/lang/Object;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::Map java::util::Collections::singletonMap(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "singletonMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Map;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::Map _ret(ret);
    return _ret;
}

void java::util::Collections::sort(const ::java::util::List& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "(Ljava/util/List;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::Collections::sort(const ::java::util::List& arg0, const ::java::util::Comparator& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "sort", "(Ljava/util/List;Ljava/util/Comparator;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

void java::util::Collections::swap(const ::java::util::List& arg0, int32_t arg1, int32_t arg2){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "swap", "(Ljava/util/List;II)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1, _arg2);
}

bool java::util::Collections::replaceAll(const ::java::util::List& arg0, const ::java::lang::Object& arg1, const ::java::lang::Object& arg2){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "replaceAll", "(Ljava/util/List;Ljava/lang/Object;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1, _arg2);
}

void java::util::Collections::rotate(const ::java::util::List& arg0, int32_t arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "rotate", "(Ljava/util/List;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Collections::indexOfSubList(const ::java::util::List& arg0, const ::java::util::List& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "indexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

int32_t java::util::Collections::lastIndexOfSubList(const ::java::util::List& arg0, const ::java::util::List& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "lastIndexOfSubList", "(Ljava/util/List;Ljava/util/List;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

::java::util::ArrayList java::util::Collections::list(const ::java::util::Enumeration& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "list", "(Ljava/util/Enumeration;)Ljava/util/ArrayList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::ArrayList _ret(ret);
    return _ret;
}

::java::util::Collection java::util::Collections::synchronizedCollection(const ::java::util::Collection& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "synchronizedCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::List java::util::Collections::synchronizedList(const ::java::util::List& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "synchronizedList", "(Ljava/util/List;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::Map java::util::Collections::synchronizedMap(const ::java::util::Map& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "synchronizedMap", "(Ljava/util/Map;)Ljava/util/Map;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::util::Set java::util::Collections::synchronizedSet(const ::java::util::Set& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "synchronizedSet", "(Ljava/util/Set;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::Collections::synchronizedSortedMap(const ::java::util::SortedMap& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "synchronizedSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::Collections::synchronizedSortedSet(const ::java::util::SortedSet& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "synchronizedSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

::java::util::Collection java::util::Collections::unmodifiableCollection(const ::java::util::Collection& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unmodifiableCollection", "(Ljava/util/Collection;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::List java::util::Collections::unmodifiableList(const ::java::util::List& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unmodifiableList", "(Ljava/util/List;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::Map java::util::Collections::unmodifiableMap(const ::java::util::Map& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unmodifiableMap", "(Ljava/util/Map;)Ljava/util/Map;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::util::Set java::util::Collections::unmodifiableSet(const ::java::util::Set& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unmodifiableSet", "(Ljava/util/Set;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::Collections::unmodifiableSortedMap(const ::java::util::SortedMap& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unmodifiableSortedMap", "(Ljava/util/SortedMap;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::Collections::unmodifiableSortedSet(const ::java::util::SortedSet& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "unmodifiableSortedSet", "(Ljava/util/SortedSet;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

int32_t java::util::Collections::frequency(const ::java::util::Collection& arg0, const ::java::lang::Object& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "frequency", "(Ljava/util/Collection;Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticIntMethod(_class, mid, _arg0, _arg1);
}

::java::util::List java::util::Collections::emptyList(){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "emptyList", "()Ljava/util/List;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::Set java::util::Collections::emptySet(){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "emptySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Map java::util::Collections::emptyMap(){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "emptyMap", "()Ljava/util/Map;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::util::Collection java::util::Collections::checkedCollection(const ::java::util::Collection& arg0, const ::java::lang::Class& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "checkedCollection", "(Ljava/util/Collection;Ljava/lang/Class;)Ljava/util/Collection;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::Collection _ret(ret);
    return _ret;
}

::java::util::Map java::util::Collections::checkedMap(const ::java::util::Map& arg0, const ::java::lang::Class& arg1, const ::java::lang::Class& arg2){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "checkedMap", "(Ljava/util/Map;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/Map;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::util::Map _ret(ret);
    return _ret;
}

::java::util::List java::util::Collections::checkedList(const ::java::util::List& arg0, const ::java::lang::Class& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "checkedList", "(Ljava/util/List;Ljava/lang/Class;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::Set java::util::Collections::checkedSet(const ::java::util::Set& arg0, const ::java::lang::Class& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "checkedSet", "(Ljava/util/Set;Ljava/lang/Class;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::Collections::checkedSortedMap(const ::java::util::SortedMap& arg0, const ::java::lang::Class& arg1, const ::java::lang::Class& arg2){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "checkedSortedMap", "(Ljava/util/SortedMap;Ljava/lang/Class;Ljava/lang/Class;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::Collections::checkedSortedSet(const ::java::util::SortedSet& arg0, const ::java::lang::Class& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "checkedSortedSet", "(Ljava/util/SortedSet;Ljava/lang/Class;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

bool java::util::Collections::addAll(const ::java::util::Collection& arg0, const std::vector< ::java::lang::Object>& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "addAll", "(Ljava/util/Collection;[Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

bool java::util::Collections::disjoint(const ::java::util::Collection& arg0, const ::java::util::Collection& arg1){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "disjoint", "(Ljava/util/Collection;Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallStaticBooleanMethod(_class, mid, _arg0, _arg1);
}

::java::util::Set java::util::Collections::newSetFromMap(const ::java::util::Map& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "newSetFromMap", "(Ljava/util/Map;)Ljava/util/Set;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Queue java::util::Collections::asLifoQueue(const ::java::util::Deque& arg0){
    if (!::java::util::Collections::_class) ::java::util::Collections::_class = java::fetch_class("java/util/Collections");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "asLifoQueue", "(Ljava/util/Deque;)Ljava/util/Queue;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Queue _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::noneOf(const ::java::lang::Class& arg0){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "noneOf", "(Ljava/lang/Class;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::allOf(const ::java::lang::Class& arg0){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "allOf", "(Ljava/lang/Class;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::copyOf(const ::java::util::EnumSet& arg0){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "(Ljava/util/EnumSet;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::copyOf(const ::java::util::Collection& arg0){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "copyOf", "(Ljava/util/Collection;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::complementOf(const ::java::util::EnumSet& arg0){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "complementOf", "(Ljava/util/EnumSet;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::of(const ::java::lang::Enum& arg0){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "of", "(Ljava/lang/Enum;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::of(const ::java::lang::Enum& arg0, const ::java::lang::Enum& arg1){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "of", "(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::of(const ::java::lang::Enum& arg0, const ::java::lang::Enum& arg1, const ::java::lang::Enum& arg2){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "of", "(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::of(const ::java::lang::Enum& arg0, const ::java::lang::Enum& arg1, const ::java::lang::Enum& arg2, const ::java::lang::Enum& arg3){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "of", "(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::of(const ::java::lang::Enum& arg0, const ::java::lang::Enum& arg1, const ::java::lang::Enum& arg2, const ::java::lang::Enum& arg3, const ::java::lang::Enum& arg4){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "of", "(Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::of(const ::java::lang::Enum& arg0, const std::vector< ::java::lang::Enum>& arg1){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "of", "(Ljava/lang/Enum;[Ljava/lang/Enum;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Enum::_class) ::java::lang::Enum::_class = java::fetch_class("java/lang/Enum");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Enum::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Enum& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::range(const ::java::lang::Enum& arg0, const ::java::lang::Enum& arg1){
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "range", "(Ljava/lang/Enum;Ljava/lang/Enum;)Ljava/util/EnumSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0, _arg1);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

::java::util::EnumSet java::util::EnumSet::clone() const {
    if (!::java::util::EnumSet::_class) ::java::util::EnumSet::_class = java::fetch_class("java/util/EnumSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/util/EnumSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::EnumSet _ret(ret);
    return _ret;
}

std::vector< ::java::util::Formatter_BigDecimalLayoutForm> java::util::Formatter_BigDecimalLayoutForm::values(){
    if (!::java::util::Formatter_BigDecimalLayoutForm::_class) ::java::util::Formatter_BigDecimalLayoutForm::_class = java::fetch_class("java/util/Formatter$BigDecimalLayoutForm");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "values", "()[Ljava/util/Formatter$BigDecimalLayoutForm;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::util::Formatter_BigDecimalLayoutForm> _ret(rets, ::java::util::Formatter_BigDecimalLayoutForm((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::util::Formatter_BigDecimalLayoutForm retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::Formatter_BigDecimalLayoutForm java::util::Formatter_BigDecimalLayoutForm::valueOf(const ::java::lang::String& arg0){
    if (!::java::util::Formatter_BigDecimalLayoutForm::_class) ::java::util::Formatter_BigDecimalLayoutForm::_class = java::fetch_class("java/util/Formatter$BigDecimalLayoutForm");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "valueOf", "(Ljava/lang/String;)Ljava/util/Formatter$BigDecimalLayoutForm;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::Formatter_BigDecimalLayoutForm _ret(ret);
    return _ret;
}

void java::util::Map::clear() const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::Map::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Map::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Set java::util::Map::entrySet() const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

bool java::util::Map::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Map::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::Map::hashCode() const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::Map::isEmpty() const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Set java::util::Map::keySet() const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Map::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::Map::putAll(const ::java::util::Map& arg0) const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Map::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::Map::size() const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Collection java::util::Map::values() const {
    if (!::java::util::Map::_class) ::java::util::Map::_class = java::fetch_class("java/util/Map");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

void java::util::ListIterator::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::ListIterator::_class) ::java::util::ListIterator::_class = java::fetch_class("java/util/ListIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::ListIterator::hasNext() const {
    if (!::java::util::ListIterator::_class) ::java::util::ListIterator::_class = java::fetch_class("java/util/ListIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::ListIterator::hasPrevious() const {
    if (!::java::util::ListIterator::_class) ::java::util::ListIterator::_class = java::fetch_class("java/util/ListIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasPrevious", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::util::ListIterator::next() const {
    if (!::java::util::ListIterator::_class) ::java::util::ListIterator::_class = java::fetch_class("java/util/ListIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::ListIterator::nextIndex() const {
    if (!::java::util::ListIterator::_class) ::java::util::ListIterator::_class = java::fetch_class("java/util/ListIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::Object java::util::ListIterator::previous() const {
    if (!::java::util::ListIterator::_class) ::java::util::ListIterator::_class = java::fetch_class("java/util/ListIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "previous", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::ListIterator::previousIndex() const {
    if (!::java::util::ListIterator::_class) ::java::util::ListIterator::_class = java::fetch_class("java/util/ListIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "previousIndex", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::ListIterator::remove() const {
    if (!::java::util::ListIterator::_class) ::java::util::ListIterator::_class = java::fetch_class("java/util/ListIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::ListIterator::set(const ::java::lang::Object& arg0) const {
    if (!::java::util::ListIterator::_class) ::java::util::ListIterator::_class = java::fetch_class("java/util/ListIterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::Collection::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Collection::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::Collection::clear() const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::Collection::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Collection::containsAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Collection::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::Collection::hashCode() const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::Collection::isEmpty() const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator java::util::Collection::iterator() const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool java::util::Collection::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Collection::removeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Collection::retainAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::Collection::size() const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::Object> java::util::Collection::toArray() const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::util::Collection::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::Collection::_class) ::java::util::Collection::_class = java::fetch_class("java/util/Collection");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::util::Set::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Set::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::Set::clear() const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::Set::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Set::containsAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Set::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::Set::hashCode() const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::Set::isEmpty() const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator java::util::Set::iterator() const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool java::util::Set::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Set::removeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Set::retainAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::Set::size() const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::Object> java::util::Set::toArray() const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::util::Set::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::Set::_class) ::java::util::Set::_class = java::fetch_class("java/util/Set");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void java::util::AbstractList::add(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::AbstractList::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::AbstractList::addAll(int32_t arg0, const ::java::util::Collection& arg1) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(ILjava/util/Collection;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::AbstractList::clear() const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::AbstractList::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::AbstractList::get(int32_t arg0) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::AbstractList::hashCode() const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::AbstractList::indexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::Iterator java::util::AbstractList::iterator() const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

int32_t java::util::AbstractList::lastIndexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::ListIterator java::util::AbstractList::listIterator() const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "listIterator", "()Ljava/util/ListIterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ListIterator _ret(ret);
    return _ret;
}

::java::util::ListIterator java::util::AbstractList::listIterator(int32_t arg0) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "listIterator", "(I)Ljava/util/ListIterator;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ListIterator _ret(ret);
    return _ret;
}

::java::lang::Object java::util::AbstractList::remove(int32_t arg0) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::AbstractList::set(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::List java::util::AbstractList::subList(int32_t arg0, int32_t arg1) const {
    if (!::java::util::AbstractList::_class) ::java::util::AbstractList::_class = java::fetch_class("java/util/AbstractList");
    static jmethodID mid = java::jni->GetMethodID(_class, "subList", "(II)Ljava/util/List;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ConcurrentModificationException::ConcurrentModificationException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::ConcurrentModificationException::_class) ::java::util::ConcurrentModificationException::_class = java::fetch_class("java/util/ConcurrentModificationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ConcurrentModificationException::ConcurrentModificationException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::ConcurrentModificationException::_class) ::java::util::ConcurrentModificationException::_class = java::fetch_class("java/util/ConcurrentModificationException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::UUID::UUID(int64_t arg0, int64_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(JJ)V");
    int64_t _arg0 = arg0;
    int64_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::util::UUID java::util::UUID::randomUUID(){
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "randomUUID", "()Ljava/util/UUID;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::UUID _ret(ret);
    return _ret;
}

::java::util::UUID java::util::UUID::nameUUIDFromBytes(const std::vector< int8_t>& arg0){
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "nameUUIDFromBytes", "([B)Ljava/util/UUID;");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::UUID _ret(ret);
    return _ret;
}

::java::util::UUID java::util::UUID::fromString(const ::java::lang::String& arg0){
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "fromString", "(Ljava/lang/String;)Ljava/util/UUID;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::UUID _ret(ret);
    return _ret;
}

int64_t java::util::UUID::getLeastSignificantBits() const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeastSignificantBits", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::UUID::getMostSignificantBits() const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMostSignificantBits", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t java::util::UUID::version() const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "version", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::UUID::variant() const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "variant", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::util::UUID::timestamp() const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "timestamp", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t java::util::UUID::clockSequence() const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "clockSequence", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::util::UUID::node() const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "node", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t java::util::UUID::compareTo(const ::java::util::UUID& arg0) const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/util/UUID;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::util::UUID::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::UUID::hashCode() const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::UUID::toString() const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::UUID::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::util::UUID::_class) ::java::util::UUID::_class = java::fetch_class("java/util/UUID");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Observable::Observable() : ::java::lang::Object((jobject)0) {
    if (!::java::util::Observable::_class) ::java::util::Observable::_class = java::fetch_class("java/util/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::util::Observable::addObserver(const ::java::util::Observer& arg0) const {
    if (!::java::util::Observable::_class) ::java::util::Observable::_class = java::fetch_class("java/util/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "addObserver", "(Ljava/util/Observer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::util::Observable::countObservers() const {
    if (!::java::util::Observable::_class) ::java::util::Observable::_class = java::fetch_class("java/util/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "countObservers", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::Observable::deleteObserver(const ::java::util::Observer& arg0) const {
    if (!::java::util::Observable::_class) ::java::util::Observable::_class = java::fetch_class("java/util/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteObserver", "(Ljava/util/Observer;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Observable::deleteObservers() const {
    if (!::java::util::Observable::_class) ::java::util::Observable::_class = java::fetch_class("java/util/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteObservers", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::Observable::hasChanged() const {
    if (!::java::util::Observable::_class) ::java::util::Observable::_class = java::fetch_class("java/util/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasChanged", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::Observable::notifyObservers() const {
    if (!::java::util::Observable::_class) ::java::util::Observable::_class = java::fetch_class("java/util/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyObservers", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::Observable::notifyObservers(const ::java::lang::Object& arg0) const {
    if (!::java::util::Observable::_class) ::java::util::Observable::_class = java::fetch_class("java/util/Observable");
    static jmethodID mid = java::jni->GetMethodID(_class, "notifyObservers", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Vector::Vector() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Vector::Vector(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Vector::Vector(int32_t arg0, int32_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Vector::Vector(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::Vector::add(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::Vector::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Vector::addAll(int32_t arg0, const ::java::util::Collection& arg1) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(ILjava/util/Collection;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::Vector::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::Vector::addElement(const ::java::lang::Object& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "addElement", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::util::Vector::capacity() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "capacity", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::Vector::clear() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object java::util::Vector::clone() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::Vector::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Vector::containsAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::Vector::copyInto(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "copyInto", "([Ljava/lang/Object;)V");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Vector::elementAt(int32_t arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "elementAt", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Enumeration java::util::Vector::elements() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "elements", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

void java::util::Vector::ensureCapacity(int32_t arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "ensureCapacity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::Vector::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Vector::firstElement() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "firstElement", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Vector::get(int32_t arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::Vector::hashCode() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Vector::indexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::Vector::indexOf(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/Object;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

void java::util::Vector::insertElementAt(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "insertElementAt", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::Vector::isEmpty() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::util::Vector::lastElement() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastElement", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::Vector::lastIndexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::Vector::lastIndexOf(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/Object;I)I");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object java::util::Vector::remove(int32_t arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::Vector::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Vector::removeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::Vector::removeAllElements() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAllElements", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::Vector::removeElement(const ::java::lang::Object& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeElement", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::Vector::removeElementAt(int32_t arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeElementAt", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::Vector::retainAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Vector::set(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::Vector::setElementAt(const ::java::lang::Object& arg0, int32_t arg1) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setElementAt", "(Ljava/lang/Object;I)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::Vector::setSize(int32_t arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSize", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::util::Vector::size() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List java::util::Vector::subList(int32_t arg0, int32_t arg1) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "subList", "(II)Ljava/util/List;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> java::util::Vector::toArray() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::util::Vector::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::util::Vector::toString() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::Vector::trimToSize() const {
    if (!::java::util::Vector::_class) ::java::util::Vector::_class = java::fetch_class("java/util/Vector");
    static jmethodID mid = java::jni->GetMethodID(_class, "trimToSize", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::InputMismatchException::InputMismatchException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::NoSuchElementException((jobject)0) {
    if (!::java::util::InputMismatchException::_class) ::java::util::InputMismatchException::_class = java::fetch_class("java/util/InputMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::InputMismatchException::InputMismatchException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::NoSuchElementException((jobject)0) {
    if (!::java::util::InputMismatchException::_class) ::java::util::InputMismatchException::_class = java::fetch_class("java/util/InputMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedHashSet::LinkedHashSet() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::HashSet((jobject)0), ::java::util::Set((jobject)0) {
    if (!::java::util::LinkedHashSet::_class) ::java::util::LinkedHashSet::_class = java::fetch_class("java/util/LinkedHashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedHashSet::LinkedHashSet(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::HashSet((jobject)0), ::java::util::Set((jobject)0) {
    if (!::java::util::LinkedHashSet::_class) ::java::util::LinkedHashSet::_class = java::fetch_class("java/util/LinkedHashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedHashSet::LinkedHashSet(int32_t arg0, float arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::HashSet((jobject)0), ::java::util::Set((jobject)0) {
    if (!::java::util::LinkedHashSet::_class) ::java::util::LinkedHashSet::_class = java::fetch_class("java/util/LinkedHashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedHashSet::LinkedHashSet(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractSet((jobject)0), ::java::util::Collection((jobject)0), ::java::util::HashSet((jobject)0), ::java::util::Set((jobject)0) {
    if (!::java::util::LinkedHashSet::_class) ::java::util::LinkedHashSet::_class = java::fetch_class("java/util/LinkedHashSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::IllegalFormatFlagsException::IllegalFormatFlagsException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::IllegalFormatFlagsException::_class) ::java::util::IllegalFormatFlagsException::_class = java::fetch_class("java/util/IllegalFormatFlagsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::IllegalFormatFlagsException::getFlags() const {
    if (!::java::util::IllegalFormatFlagsException::_class) ::java::util::IllegalFormatFlagsException::_class = java::fetch_class("java/util/IllegalFormatFlagsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::IllegalFormatFlagsException::getMessage() const {
    if (!::java::util::IllegalFormatFlagsException::_class) ::java::util::IllegalFormatFlagsException::_class = java::fetch_class("java/util/IllegalFormatFlagsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::Formattable::formatTo(const ::java::util::Formatter& arg0, int32_t arg1, int32_t arg2, int32_t arg3) const {
    if (!::java::util::Formattable::_class) ::java::util::Formattable::_class = java::fetch_class("java/util/Formattable");
    static jmethodID mid = java::jni->GetMethodID(_class, "formatTo", "(Ljava/util/Formatter;III)V");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Random::Random() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Random::Random(int64_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(J)V");
    int64_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::util::Random::nextBoolean() const {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextBoolean", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void java::util::Random::nextBytes(const std::vector< int8_t>& arg0) const {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextBytes", "([B)V");
    jbyteArray _arg0 = java::jni->NewByteArray(arg0.size());
    java::jni->SetByteArrayRegion(_arg0, 0, arg0.size(), arg0.data());
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

double java::util::Random::nextDouble() const {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextDouble", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

float java::util::Random::nextFloat() const {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextFloat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

double java::util::Random::nextGaussian() const {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextGaussian", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

int32_t java::util::Random::nextInt() const {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Random::nextInt(int32_t arg0) const {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int64_t java::util::Random::nextLong() const {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

void java::util::Random::setSeed(int64_t arg0) const {
    if (!::java::util::Random::_class) ::java::util::Random::_class = java::fetch_class("java/util/Random");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSeed", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::EmptyStackException::EmptyStackException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::EmptyStackException::_class) ::java::util::EmptyStackException::_class = java::fetch_class("java/util/EmptyStackException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::MissingResourceException::MissingResourceException(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::MissingResourceException::_class) ::java::util::MissingResourceException::_class = java::fetch_class("java/util/MissingResourceException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::MissingResourceException::getClassName() const {
    if (!::java::util::MissingResourceException::_class) ::java::util::MissingResourceException::_class = java::fetch_class("java/util/MissingResourceException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getClassName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::MissingResourceException::getKey() const {
    if (!::java::util::MissingResourceException::_class) ::java::util::MissingResourceException::_class = java::fetch_class("java/util/MissingResourceException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ArrayList::ArrayList(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ArrayList::ArrayList() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ArrayList::ArrayList(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0) {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::util::ArrayList::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::ArrayList::add(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::ArrayList::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::ArrayList::addAll(int32_t arg0, const ::java::util::Collection& arg1) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(ILjava/util/Collection;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

void java::util::ArrayList::clear() const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object java::util::ArrayList::clone() const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::ArrayList::ensureCapacity(int32_t arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "ensureCapacity", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::ArrayList::get(int32_t arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::ArrayList::size() const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::ArrayList::isEmpty() const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::ArrayList::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::ArrayList::indexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::ArrayList::lastIndexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::ArrayList::remove(int32_t arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::ArrayList::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::ArrayList::set(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> java::util::ArrayList::toArray() const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::util::ArrayList::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

void java::util::ArrayList::trimToSize() const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "trimToSize", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Iterator java::util::ArrayList::iterator() const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

int32_t java::util::ArrayList::hashCode() const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::ArrayList::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::ArrayList::_class) ::java::util::ArrayList::_class = java::fetch_class("java/util/ArrayList");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter() : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::lang::Appendable& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Appendable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::util::Locale& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::lang::Appendable& arg0, const ::java::util::Locale& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Appendable;Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::util::Locale& arg2) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::io::File& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::io::File& arg0, const ::java::lang::String& arg1, const ::java::util::Locale& arg2) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Ljava/lang/String;Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::io::OutputStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::io::OutputStream& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::io::OutputStream& arg0, const ::java::lang::String& arg1, const ::java::util::Locale& arg2) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/OutputStream;Ljava/lang/String;Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Formatter::Formatter(const ::java::io::PrintStream& arg0) : ::java::lang::Object((jobject)0), ::java::io::Closeable((jobject)0), ::java::io::Flushable((jobject)0) {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::Locale java::util::Formatter::locale() const {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "locale", "()Ljava/util/Locale;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Locale _ret(ret);
    return _ret;
}

::java::lang::Appendable java::util::Formatter::out() const {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "out", "()Ljava/lang/Appendable;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Appendable _ret(ret);
    return _ret;
}

::java::lang::String java::util::Formatter::toString() const {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::Formatter::flush() const {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "flush", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::Formatter::close() const {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::io::IOException java::util::Formatter::ioException() const {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "ioException", "()Ljava/io/IOException;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::IOException _ret(ret);
    return _ret;
}

::java::util::Formatter java::util::Formatter::format(const ::java::lang::String& arg0, const std::vector< ::java::lang::Object>& arg1) const {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;");
    jobject _arg0 = arg0.obj;
    unsigned arg1s = arg1.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg1 = java::jni->NewObjectArray(arg1s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg1i = 0; arg1i < arg1s; ++arg1i) {
      const ::java::lang::Object& arg1e = arg1[arg1i];
        jobject arg1d = arg1e.obj;
      java::jni->SetObjectArrayElement(_arg1, arg1i, arg1d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::Formatter _ret(ret);
    return _ret;
}

::java::util::Formatter java::util::Formatter::format(const ::java::util::Locale& arg0, const ::java::lang::String& arg1, const std::vector< ::java::lang::Object>& arg2) const {
    if (!::java::util::Formatter::_class) ::java::util::Formatter::_class = java::fetch_class("java/util/Formatter");
    static jmethodID mid = java::jni->GetMethodID(_class, "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    unsigned arg2s = arg2.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg2 = java::jni->NewObjectArray(arg2s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg2i = 0; arg2i < arg2s; ++arg2i) {
      const ::java::lang::Object& arg2e = arg2[arg2i];
        jobject arg2d = arg2e.obj;
      java::jni->SetObjectArrayElement(_arg2, arg2i, arg2d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::util::Formatter _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::PropertyPermission::PropertyPermission(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::security::BasicPermission((jobject)0), ::java::security::Guard((jobject)0), ::java::security::Permission((jobject)0) {
    if (!::java::util::PropertyPermission::_class) ::java::util::PropertyPermission::_class = java::fetch_class("java/util/PropertyPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::PropertyPermission::getActions() const {
    if (!::java::util::PropertyPermission::_class) ::java::util::PropertyPermission::_class = java::fetch_class("java/util/PropertyPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActions", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::PropertyPermission::implies(const ::java::security::Permission& arg0) const {
    if (!::java::util::PropertyPermission::_class) ::java::util::PropertyPermission::_class = java::fetch_class("java/util/PropertyPermission");
    static jmethodID mid = java::jni->GetMethodID(_class, "implies", "(Ljava/security/Permission;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::AbstractMap::clear() const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::AbstractMap::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::AbstractMap::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::Set java::util::AbstractMap::entrySet() const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

bool java::util::AbstractMap::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::AbstractMap::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::AbstractMap::hashCode() const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::AbstractMap::isEmpty() const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Set java::util::AbstractMap::keySet() const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::lang::Object java::util::AbstractMap::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::AbstractMap::putAll(const ::java::util::Map& arg0) const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::AbstractMap::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::AbstractMap::size() const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::AbstractMap::toString() const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Collection java::util::AbstractMap::values() const {
    if (!::java::util::AbstractMap::_class) ::java::util::AbstractMap::_class = java::fetch_class("java/util/AbstractMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Properties::Properties() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::Dictionary((jobject)0), ::java::util::Hashtable((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::Properties::getProperty(const ::java::lang::String& arg0) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Properties::getProperty(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "getProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::Properties::list(const ::java::io::PrintStream& arg0) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "list", "(Ljava/io/PrintStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Properties::list(const ::java::io::PrintWriter& arg0) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "list", "(Ljava/io/PrintWriter;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Properties::load(const ::java::io::InputStream& arg0) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Properties::load(const ::java::io::Reader& arg0) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "load", "(Ljava/io/Reader;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::Enumeration java::util::Properties::propertyNames() const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "propertyNames", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::util::Set java::util::Properties::stringPropertyNames() const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "stringPropertyNames", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

void java::util::Properties::save(const ::java::io::OutputStream& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "save", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object java::util::Properties::setProperty(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "setProperty", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::Properties::store(const ::java::io::OutputStream& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "store", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::Properties::store(const ::java::io::Writer& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "store", "(Ljava/io/Writer;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::Properties::loadFromXML(const ::java::io::InputStream& arg0) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "loadFromXML", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Properties::storeToXML(const ::java::io::OutputStream& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::Properties::storeToXML(const ::java::io::OutputStream& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::java::util::Properties::_class) ::java::util::Properties::_class = java::fetch_class("java/util/Properties");
    static jmethodID mid = java::jni->GetMethodID(_class, "storeToXML", "(Ljava/io/OutputStream;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::BitSet::BitSet() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::BitSet::BitSet(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::BitSet::clone() const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::BitSet::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::BitSet::hashCode() const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::BitSet::get(int32_t arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::BitSet::set(int32_t arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::BitSet::clear(int32_t arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::BitSet::flip(int32_t arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "flip", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::util::BitSet java::util::BitSet::get(int32_t arg0, int32_t arg1) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(II)Ljava/util/BitSet;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::BitSet _ret(ret);
    return _ret;
}

void java::util::BitSet::set(int32_t arg0, bool arg1) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::BitSet::set(int32_t arg0, int32_t arg1, bool arg2) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(IIZ)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::BitSet::clear() const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

void java::util::BitSet::set(int32_t arg0, int32_t arg1) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::BitSet::clear(int32_t arg0, int32_t arg1) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::BitSet::flip(int32_t arg0, int32_t arg1) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "flip", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::BitSet::intersects(const ::java::util::BitSet& arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "intersects", "(Ljava/util/BitSet;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::BitSet::and_(const ::java::util::BitSet& arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "and_", "(Ljava/util/BitSet;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::BitSet::andNot(const ::java::util::BitSet& arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "andNot", "(Ljava/util/BitSet;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::BitSet::or_(const ::java::util::BitSet& arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "or_", "(Ljava/util/BitSet;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::BitSet::xor_(const ::java::util::BitSet& arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "xor_", "(Ljava/util/BitSet;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t java::util::BitSet::size() const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::BitSet::length() const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "length", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::BitSet::toString() const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::BitSet::nextSetBit(int32_t arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextSetBit", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::BitSet::nextClearBit(int32_t arg0) const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextClearBit", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::util::BitSet::isEmpty() const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::BitSet::cardinality() const {
    if (!::java::util::BitSet::_class) ::java::util::BitSet::_class = java::fetch_class("java/util/BitSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "cardinality", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedHashMap::LinkedHashMap() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::HashMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::LinkedHashMap::_class) ::java::util::LinkedHashMap::_class = java::fetch_class("java/util/LinkedHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedHashMap::LinkedHashMap(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::HashMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::LinkedHashMap::_class) ::java::util::LinkedHashMap::_class = java::fetch_class("java/util/LinkedHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedHashMap::LinkedHashMap(int32_t arg0, float arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::HashMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::LinkedHashMap::_class) ::java::util::LinkedHashMap::_class = java::fetch_class("java/util/LinkedHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IF)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedHashMap::LinkedHashMap(int32_t arg0, float arg1, bool arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::HashMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::LinkedHashMap::_class) ::java::util::LinkedHashMap::_class = java::fetch_class("java/util/LinkedHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IFZ)V");
    int32_t _arg0 = arg0;
    float _arg1 = arg1;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedHashMap::LinkedHashMap(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::HashMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::LinkedHashMap::_class) ::java::util::LinkedHashMap::_class = java::fetch_class("java/util/LinkedHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::LinkedHashMap::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedHashMap::_class) ::java::util::LinkedHashMap::_class = java::fetch_class("java/util/LinkedHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::LinkedHashMap::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedHashMap::_class) ::java::util::LinkedHashMap::_class = java::fetch_class("java/util/LinkedHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::LinkedHashMap::clear() const {
    if (!::java::util::LinkedHashMap::_class) ::java::util::LinkedHashMap::_class = java::fetch_class("java/util/LinkedHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::StringTokenizer::StringTokenizer(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::util::Enumeration((jobject)0) {
    if (!::java::util::StringTokenizer::_class) ::java::util::StringTokenizer::_class = java::fetch_class("java/util/StringTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::StringTokenizer::StringTokenizer(const ::java::lang::String& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::util::Enumeration((jobject)0) {
    if (!::java::util::StringTokenizer::_class) ::java::util::StringTokenizer::_class = java::fetch_class("java/util/StringTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::StringTokenizer::StringTokenizer(const ::java::lang::String& arg0, const ::java::lang::String& arg1, bool arg2) : ::java::lang::Object((jobject)0), ::java::util::Enumeration((jobject)0) {
    if (!::java::util::StringTokenizer::_class) ::java::util::StringTokenizer::_class = java::fetch_class("java/util/StringTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

int32_t java::util::StringTokenizer::countTokens() const {
    if (!::java::util::StringTokenizer::_class) ::java::util::StringTokenizer::_class = java::fetch_class("java/util/StringTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "countTokens", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::StringTokenizer::hasMoreElements() const {
    if (!::java::util::StringTokenizer::_class) ::java::util::StringTokenizer::_class = java::fetch_class("java/util/StringTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMoreElements", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::StringTokenizer::hasMoreTokens() const {
    if (!::java::util::StringTokenizer::_class) ::java::util::StringTokenizer::_class = java::fetch_class("java/util/StringTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMoreTokens", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::util::StringTokenizer::nextElement() const {
    if (!::java::util::StringTokenizer::_class) ::java::util::StringTokenizer::_class = java::fetch_class("java/util/StringTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextElement", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::util::StringTokenizer::nextToken() const {
    if (!::java::util::StringTokenizer::_class) ::java::util::StringTokenizer::_class = java::fetch_class("java/util/StringTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextToken", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::StringTokenizer::nextToken(const ::java::lang::String& arg0) const {
    if (!::java::util::StringTokenizer::_class) ::java::util::StringTokenizer::_class = java::fetch_class("java/util/StringTokenizer");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextToken", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::MissingFormatWidthException::MissingFormatWidthException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::MissingFormatWidthException::_class) ::java::util::MissingFormatWidthException::_class = java::fetch_class("java/util/MissingFormatWidthException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::MissingFormatWidthException::getFormatSpecifier() const {
    if (!::java::util::MissingFormatWidthException::_class) ::java::util::MissingFormatWidthException::_class = java::fetch_class("java/util/MissingFormatWidthException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormatSpecifier", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::MissingFormatWidthException::getMessage() const {
    if (!::java::util::MissingFormatWidthException::_class) ::java::util::MissingFormatWidthException::_class = java::fetch_class("java/util/MissingFormatWidthException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TimeZone::TimeZone() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0) {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::TimeZone::clone() const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

std::vector< ::java::lang::String> java::util::TimeZone::getAvailableIDs(){
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAvailableIDs", "()[Ljava/lang/String;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::String> java::util::TimeZone::getAvailableIDs(int32_t arg0){
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getAvailableIDs", "(I)[Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::String> _ret(rets, ::java::lang::String((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::String retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::util::TimeZone java::util::TimeZone::getDefault(){
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getDefault", "()Ljava/util/TimeZone;");
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid);
    ::java::util::TimeZone _ret(ret);
    return _ret;
}

::java::lang::String java::util::TimeZone::getDisplayName() const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::TimeZone::getDisplayName(const ::java::util::Locale& arg0) const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::TimeZone::getDisplayName(bool arg0, int32_t arg1) const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "(ZI)Ljava/lang/String;");
    bool _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::TimeZone::getDisplayName(bool arg0, int32_t arg1, const ::java::util::Locale& arg2) const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDisplayName", "(ZILjava/util/Locale;)Ljava/lang/String;");
    bool _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::TimeZone::getID() const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getID", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t java::util::TimeZone::getDSTSavings() const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDSTSavings", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::TimeZone::getOffset(int64_t arg0) const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffset", "(J)I");
    int64_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::TimeZone::getOffset(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOffset", "(IIIIII)I");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

int32_t java::util::TimeZone::getRawOffset() const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRawOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::TimeZone java::util::TimeZone::getTimeZone(const ::java::lang::String& arg0){
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getTimeZone", "(Ljava/lang/String;)Ljava/util/TimeZone;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::TimeZone _ret(ret);
    return _ret;
}

bool java::util::TimeZone::hasSameRules(const ::java::util::TimeZone& arg0) const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasSameRules", "(Ljava/util/TimeZone;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::TimeZone::inDaylightTime(const ::java::util::Date& arg0) const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "inDaylightTime", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::TimeZone::setDefault(const ::java::util::TimeZone& arg0){
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "setDefault", "(Ljava/util/TimeZone;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallStaticVoidMethod(_class, mid, _arg0);
}

void java::util::TimeZone::setID(const ::java::lang::String& arg0) const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setID", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::TimeZone::setRawOffset(int32_t arg0) const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "setRawOffset", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::TimeZone::useDaylightTime() const {
    if (!::java::util::TimeZone::_class) ::java::util::TimeZone::_class = java::fetch_class("java/util/TimeZone");
    static jmethodID mid = java::jni->GetMethodID(_class, "useDaylightTime", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::Comparator::compare(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::Comparator::_class) ::java::util::Comparator::_class = java::fetch_class("java/util/Comparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0, _arg1);
}

bool java::util::Comparator::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::Comparator::_class) ::java::util::Comparator::_class = java::fetch_class("java/util/Comparator");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::util::ResourceBundle_Control java::util::ResourceBundle_Control::getControl(const ::java::util::List& arg0){
    if (!::java::util::ResourceBundle_Control::_class) ::java::util::ResourceBundle_Control::_class = java::fetch_class("java/util/ResourceBundle$Control");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::ResourceBundle_Control _ret(ret);
    return _ret;
}

::java::util::ResourceBundle_Control java::util::ResourceBundle_Control::getNoFallbackControl(const ::java::util::List& arg0){
    if (!::java::util::ResourceBundle_Control::_class) ::java::util::ResourceBundle_Control::_class = java::fetch_class("java/util/ResourceBundle$Control");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "getNoFallbackControl", "(Ljava/util/List;)Ljava/util/ResourceBundle$Control;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallStaticObjectMethod(_class, mid, _arg0);
    ::java::util::ResourceBundle_Control _ret(ret);
    return _ret;
}

::java::util::List java::util::ResourceBundle_Control::getCandidateLocales(const ::java::lang::String& arg0, const ::java::util::Locale& arg1) const {
    if (!::java::util::ResourceBundle_Control::_class) ::java::util::ResourceBundle_Control::_class = java::fetch_class("java/util/ResourceBundle$Control");
    static jmethodID mid = java::jni->GetMethodID(_class, "getCandidateLocales", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::List java::util::ResourceBundle_Control::getFormats(const ::java::lang::String& arg0) const {
    if (!::java::util::ResourceBundle_Control::_class) ::java::util::ResourceBundle_Control::_class = java::fetch_class("java/util/ResourceBundle$Control");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFormats", "(Ljava/lang/String;)Ljava/util/List;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::List _ret(ret);
    return _ret;
}

::java::util::Locale java::util::ResourceBundle_Control::getFallbackLocale(const ::java::lang::String& arg0, const ::java::util::Locale& arg1) const {
    if (!::java::util::ResourceBundle_Control::_class) ::java::util::ResourceBundle_Control::_class = java::fetch_class("java/util/ResourceBundle$Control");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFallbackLocale", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/util/Locale;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::Locale _ret(ret);
    return _ret;
}

::java::util::ResourceBundle java::util::ResourceBundle_Control::newBundle(const ::java::lang::String& arg0, const ::java::util::Locale& arg1, const ::java::lang::String& arg2, const ::java::lang::ClassLoader& arg3, bool arg4) const {
    if (!::java::util::ResourceBundle_Control::_class) ::java::util::ResourceBundle_Control::_class = java::fetch_class("java/util/ResourceBundle$Control");
    static jmethodID mid = java::jni->GetMethodID(_class, "newBundle", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    bool _arg4 = arg4;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
    ::java::util::ResourceBundle _ret(ret);
    return _ret;
}

int64_t java::util::ResourceBundle_Control::getTimeToLive(const ::java::lang::String& arg0, const ::java::util::Locale& arg1) const {
    if (!::java::util::ResourceBundle_Control::_class) ::java::util::ResourceBundle_Control::_class = java::fetch_class("java/util/ResourceBundle$Control");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimeToLive", "(Ljava/lang/String;Ljava/util/Locale;)J");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallLongMethod(obj, mid, _arg0, _arg1);
}

bool java::util::ResourceBundle_Control::needsReload(const ::java::lang::String& arg0, const ::java::util::Locale& arg1, const ::java::lang::String& arg2, const ::java::lang::ClassLoader& arg3, const ::java::util::ResourceBundle& arg4, int64_t arg5) const {
    if (!::java::util::ResourceBundle_Control::_class) ::java::util::ResourceBundle_Control::_class = java::fetch_class("java/util/ResourceBundle$Control");
    static jmethodID mid = java::jni->GetMethodID(_class, "needsReload", "(Ljava/lang/String;Ljava/util/Locale;Ljava/lang/String;Ljava/lang/ClassLoader;Ljava/util/ResourceBundle;J)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    int64_t _arg5 = arg5;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

::java::lang::String java::util::ResourceBundle_Control::toBundleName(const ::java::lang::String& arg0, const ::java::util::Locale& arg1) const {
    if (!::java::util::ResourceBundle_Control::_class) ::java::util::ResourceBundle_Control::_class = java::fetch_class("java/util/ResourceBundle$Control");
    static jmethodID mid = java::jni->GetMethodID(_class, "toBundleName", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::ResourceBundle_Control::toResourceName(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::java::util::ResourceBundle_Control::_class) ::java::util::ResourceBundle_Control::_class = java::fetch_class("java/util/ResourceBundle$Control");
    static jmethodID mid = java::jni->GetMethodID(_class, "toResourceName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

void java::util::List::add(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::List::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::List::addAll(int32_t arg0, const ::java::util::Collection& arg1) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(ILjava/util/Collection;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::List::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::List::clear() const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::List::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::List::containsAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::List::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::List::get(int32_t arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::List::hashCode() const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::List::indexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::util::List::isEmpty() const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator java::util::List::iterator() const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

int32_t java::util::List::lastIndexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::ListIterator java::util::List::listIterator() const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "listIterator", "()Ljava/util/ListIterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::ListIterator _ret(ret);
    return _ret;
}

::java::util::ListIterator java::util::List::listIterator(int32_t arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "listIterator", "(I)Ljava/util/ListIterator;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ListIterator _ret(ret);
    return _ret;
}

::java::lang::Object java::util::List::remove(int32_t arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::List::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::List::removeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::List::retainAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::List::set(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::List::size() const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::List java::util::List::subList(int32_t arg0, int32_t arg1) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "subList", "(II)Ljava/util/List;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::List _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> java::util::List::toArray() const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::util::List::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::List::_class) ::java::util::List::_class = java::fetch_class("java/util/List");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

bool java::util::Queue::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::Queue::_class) ::java::util::Queue::_class = java::fetch_class("java/util/Queue");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Queue::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::Queue::_class) ::java::util::Queue::_class = java::fetch_class("java/util/Queue");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Queue::remove() const {
    if (!::java::util::Queue::_class) ::java::util::Queue::_class = java::fetch_class("java/util/Queue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Queue::poll() const {
    if (!::java::util::Queue::_class) ::java::util::Queue::_class = java::fetch_class("java/util/Queue");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Queue::element() const {
    if (!::java::util::Queue::_class) ::java::util::Queue::_class = java::fetch_class("java/util/Queue");
    static jmethodID mid = java::jni->GetMethodID(_class, "element", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Queue::peek() const {
    if (!::java::util::Queue::_class) ::java::util::Queue::_class = java::fetch_class("java/util/Queue");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Dictionary::Dictionary() : ::java::lang::Object((jobject)0) {
    if (!::java::util::Dictionary::_class) ::java::util::Dictionary::_class = java::fetch_class("java/util/Dictionary");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

::java::util::Enumeration java::util::Dictionary::elements() const {
    if (!::java::util::Dictionary::_class) ::java::util::Dictionary::_class = java::fetch_class("java/util/Dictionary");
    static jmethodID mid = java::jni->GetMethodID(_class, "elements", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Dictionary::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::Dictionary::_class) ::java::util::Dictionary::_class = java::fetch_class("java/util/Dictionary");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::Dictionary::isEmpty() const {
    if (!::java::util::Dictionary::_class) ::java::util::Dictionary::_class = java::fetch_class("java/util/Dictionary");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Enumeration java::util::Dictionary::keys() const {
    if (!::java::util::Dictionary::_class) ::java::util::Dictionary::_class = java::fetch_class("java/util/Dictionary");
    static jmethodID mid = java::jni->GetMethodID(_class, "keys", "()Ljava/util/Enumeration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Enumeration _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Dictionary::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::Dictionary::_class) ::java::util::Dictionary::_class = java::fetch_class("java/util/Dictionary");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Dictionary::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::Dictionary::_class) ::java::util::Dictionary::_class = java::fetch_class("java/util/Dictionary");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::Dictionary::size() const {
    if (!::java::util::Dictionary::_class) ::java::util::Dictionary::_class = java::fetch_class("java/util/Dictionary");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::Deque::addFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFirst", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Deque::addLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLast", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::Deque::offerFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerFirst", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Deque::offerLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerLast", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Deque::removeFirst() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Deque::removeLast() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Deque::pollFirst() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Deque::pollLast() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Deque::getFirst() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Deque::getLast() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Deque::peekFirst() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Deque::peekLast() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::Deque::removeFirstOccurrence(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Deque::removeLastOccurrence(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Deque::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Deque::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Deque::remove() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Deque::poll() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Deque::element() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "element", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Deque::peek() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::Deque::push(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "push", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Deque::pop() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "pop", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::Deque::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Deque::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::Deque::size() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Iterator java::util::Deque::iterator() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

::java::util::Iterator java::util::Deque::descendingIterator() const {
    if (!::java::util::Deque::_class) ::java::util::Deque::_class = java::fetch_class("java/util/Deque");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::EventObject::EventObject(const ::java::lang::Object& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0) {
    if (!::java::util::EventObject::_class) ::java::util::EventObject::_class = java::fetch_class("java/util/EventObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::EventObject::getSource() const {
    if (!::java::util::EventObject::_class) ::java::util::EventObject::_class = java::fetch_class("java/util/EventObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSource", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::String java::util::EventObject::toString() const {
    if (!::java::util::EventObject::_class) ::java::util::EventObject::_class = java::fetch_class("java/util/EventObject");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ServiceConfigurationError::ServiceConfigurationError(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::ServiceConfigurationError::_class) ::java::util::ServiceConfigurationError::_class = java::fetch_class("java/util/ServiceConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::ServiceConfigurationError::ServiceConfigurationError(const ::java::lang::String& arg0, const ::java::lang::Throwable& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Error((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::ServiceConfigurationError::_class) ::java::util::ServiceConfigurationError::_class = java::fetch_class("java/util/ServiceConfigurationError");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Timer::Timer(const ::java::lang::String& arg0, bool arg1) : ::java::lang::Object((jobject)0) {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Timer::Timer(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Timer::Timer(bool arg0) : ::java::lang::Object((jobject)0) {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Z)V");
    bool _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Timer::Timer() : ::java::lang::Object((jobject)0) {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

void java::util::Timer::cancel() const {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "cancel", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

int32_t java::util::Timer::purge() const {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "purge", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void java::util::Timer::schedule(const ::java::util::TimerTask& arg0, const ::java::util::Date& arg1) const {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "schedule", "(Ljava/util/TimerTask;Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::Timer::schedule(const ::java::util::TimerTask& arg0, int64_t arg1) const {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "schedule", "(Ljava/util/TimerTask;J)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::Timer::schedule(const ::java::util::TimerTask& arg0, int64_t arg1, int64_t arg2) const {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "schedule", "(Ljava/util/TimerTask;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::Timer::schedule(const ::java::util::TimerTask& arg0, const ::java::util::Date& arg1, int64_t arg2) const {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "schedule", "(Ljava/util/TimerTask;Ljava/util/Date;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::Timer::scheduleAtFixedRate(const ::java::util::TimerTask& arg0, int64_t arg1, int64_t arg2) const {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleAtFixedRate", "(Ljava/util/TimerTask;JJ)V");
    jobject _arg0 = arg0.obj;
    int64_t _arg1 = arg1;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void java::util::Timer::scheduleAtFixedRate(const ::java::util::TimerTask& arg0, const ::java::util::Date& arg1, int64_t arg2) const {
    if (!::java::util::Timer::_class) ::java::util::Timer::_class = java::fetch_class("java/util/Timer");
    static jmethodID mid = java::jni->GetMethodID(_class, "scheduleAtFixedRate", "(Ljava/util/TimerTask;Ljava/util/Date;J)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int64_t _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Date::Date() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Date::Date(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Date::Date(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Date::Date(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Date::Date(int64_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(J)V");
    int64_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Date::Date(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0) {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

bool java::util::Date::after(const ::java::util::Date& arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "after", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Date::before(const ::java::util::Date& arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "before", "(Ljava/util/Date;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::Date::clone() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::Date::compareTo(const ::java::util::Date& arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/util/Date;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::util::Date::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::Date::getDate() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDate", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Date::getDay() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDay", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Date::getHours() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getHours", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Date::getMinutes() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinutes", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Date::getMonth() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMonth", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Date::getSeconds() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSeconds", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::util::Date::getTime() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTime", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int32_t java::util::Date::getTimezoneOffset() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTimezoneOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Date::getYear() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "getYear", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Date::hashCode() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int64_t java::util::Date::parse(const ::java::lang::String& arg0){
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "parse", "(Ljava/lang/String;)J");
    jobject _arg0 = arg0.obj;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0);
}

void java::util::Date::setDate(int32_t arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDate", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Date::setHours(int32_t arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setHours", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Date::setMinutes(int32_t arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinutes", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Date::setMonth(int32_t arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMonth", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Date::setSeconds(int32_t arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setSeconds", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Date::setTime(int64_t arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTime", "(J)V");
    int64_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::Date::setYear(int32_t arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "setYear", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String java::util::Date::toGMTString() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "toGMTString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Date::toLocaleString() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "toLocaleString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Date::toString() const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::util::Date::UTC(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5){
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetStaticMethodID(_class, "UTC", "(IIIIII)J");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    return java::jni->CallStaticLongMethod(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}

int32_t java::util::Date::compareTo(const ::java::lang::Object& arg0) const {
    if (!::java::util::Date::_class) ::java::util::Date::_class = java::fetch_class("java/util/Date");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareTo", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::IllegalFormatConversionException::IllegalFormatConversionException(uint16_t arg0, const ::java::lang::Class& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::IllegalFormatConversionException::_class) ::java::util::IllegalFormatConversionException::_class = java::fetch_class("java/util/IllegalFormatConversionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(CLjava/lang/Class;)V");
    uint16_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::Class java::util::IllegalFormatConversionException::getArgumentClass() const {
    if (!::java::util::IllegalFormatConversionException::_class) ::java::util::IllegalFormatConversionException::_class = java::fetch_class("java/util/IllegalFormatConversionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getArgumentClass", "()Ljava/lang/Class;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Class _ret(ret);
    return _ret;
}

uint16_t java::util::IllegalFormatConversionException::getConversion() const {
    if (!::java::util::IllegalFormatConversionException::_class) ::java::util::IllegalFormatConversionException::_class = java::fetch_class("java/util/IllegalFormatConversionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConversion", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

::java::lang::String java::util::IllegalFormatConversionException::getMessage() const {
    if (!::java::util::IllegalFormatConversionException::_class) ::java::util::IllegalFormatConversionException::_class = java::fetch_class("java/util/IllegalFormatConversionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TreeMap::TreeMap() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0) {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TreeMap::TreeMap(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0) {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TreeMap::TreeMap(const ::java::util::Comparator& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0) {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Comparator;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TreeMap::TreeMap(const ::java::util::SortedMap& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0), ::java::util::NavigableMap((jobject)0), ::java::util::SortedMap((jobject)0) {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/SortedMap;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::TreeMap::clone() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::TreeMap::size() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::TreeMap::isEmpty() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::util::TreeMap::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::TreeMap::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::TreeMap::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::TreeMap::clear() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object java::util::TreeMap::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::TreeMap::firstEntry() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "firstEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::TreeMap::pollFirstEntry() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirstEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeMap::firstKey() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "firstKey", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::TreeMap::lastEntry() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::TreeMap::pollLastEntry() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLastEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeMap::lastKey() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastKey", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::TreeMap::lowerEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeMap::lowerKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::TreeMap::floorEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeMap::floorKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::TreeMap::ceilingEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeMap::ceilingKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::TreeMap::higherEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::TreeMap::higherKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Comparator java::util::TreeMap::comparator() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "comparator", "()Ljava/util/Comparator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Comparator _ret(ret);
    return _ret;
}

::java::util::Set java::util::TreeMap::entrySet() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set java::util::TreeMap::keySet() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::TreeMap::navigableKeySet() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "navigableKeySet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableMap java::util::TreeMap::subMap(const ::java::lang::Object& arg0, bool arg1, const ::java::lang::Object& arg2, bool arg3) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::NavigableMap _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::TreeMap::subMap(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::util::NavigableMap java::util::TreeMap::headMap(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableMap _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::TreeMap::headMap(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::util::NavigableMap java::util::TreeMap::tailMap(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableMap _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::TreeMap::tailMap(const ::java::lang::Object& arg0) const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::util::NavigableMap java::util::TreeMap::descendingMap() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingMap", "()Ljava/util/NavigableMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableMap _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::TreeMap::descendingKeySet() const {
    if (!::java::util::TreeMap::_class) ::java::util::TreeMap::_class = java::fetch_class("java/util/TreeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingKeySet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::UnknownFormatFlagsException::UnknownFormatFlagsException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::UnknownFormatFlagsException::_class) ::java::util::UnknownFormatFlagsException::_class = java::fetch_class("java/util/UnknownFormatFlagsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::UnknownFormatFlagsException::getFlags() const {
    if (!::java::util::UnknownFormatFlagsException::_class) ::java::util::UnknownFormatFlagsException::_class = java::fetch_class("java/util/UnknownFormatFlagsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::UnknownFormatFlagsException::getMessage() const {
    if (!::java::util::UnknownFormatFlagsException::_class) ::java::util::UnknownFormatFlagsException::_class = java::fetch_class("java/util/UnknownFormatFlagsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::AbstractQueue::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractQueue::_class) ::java::util::AbstractQueue::_class = java::fetch_class("java/util/AbstractQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::AbstractQueue::remove() const {
    if (!::java::util::AbstractQueue::_class) ::java::util::AbstractQueue::_class = java::fetch_class("java/util/AbstractQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::AbstractQueue::element() const {
    if (!::java::util::AbstractQueue::_class) ::java::util::AbstractQueue::_class = java::fetch_class("java/util/AbstractQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "element", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::AbstractQueue::clear() const {
    if (!::java::util::AbstractQueue::_class) ::java::util::AbstractQueue::_class = java::fetch_class("java/util/AbstractQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::AbstractQueue::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::AbstractQueue::_class) ::java::util::AbstractQueue::_class = java::fetch_class("java/util/AbstractQueue");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::DuplicateFormatFlagsException::DuplicateFormatFlagsException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::DuplicateFormatFlagsException::_class) ::java::util::DuplicateFormatFlagsException::_class = java::fetch_class("java/util/DuplicateFormatFlagsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::DuplicateFormatFlagsException::getFlags() const {
    if (!::java::util::DuplicateFormatFlagsException::_class) ::java::util::DuplicateFormatFlagsException::_class = java::fetch_class("java/util/DuplicateFormatFlagsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::DuplicateFormatFlagsException::getMessage() const {
    if (!::java::util::DuplicateFormatFlagsException::_class) ::java::util::DuplicateFormatFlagsException::_class = java::fetch_class("java/util/DuplicateFormatFlagsException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::Iterator::hasNext() const {
    if (!::java::util::Iterator::_class) ::java::util::Iterator::_class = java::fetch_class("java/util/Iterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::util::Iterator::next() const {
    if (!::java::util::Iterator::_class) ::java::util::Iterator::_class = java::fetch_class("java/util/Iterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::Iterator::remove() const {
    if (!::java::util::Iterator::_class) ::java::util::Iterator::_class = java::fetch_class("java/util/Iterator");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Comparator java::util::SortedSet::comparator() const {
    if (!::java::util::SortedSet::_class) ::java::util::SortedSet::_class = java::fetch_class("java/util/SortedSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "comparator", "()Ljava/util/Comparator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Comparator _ret(ret);
    return _ret;
}

::java::lang::Object java::util::SortedSet::first() const {
    if (!::java::util::SortedSet::_class) ::java::util::SortedSet::_class = java::fetch_class("java/util/SortedSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "first", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::SortedSet::headSet(const ::java::lang::Object& arg0) const {
    if (!::java::util::SortedSet::_class) ::java::util::SortedSet::_class = java::fetch_class("java/util/SortedSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "headSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

::java::lang::Object java::util::SortedSet::last() const {
    if (!::java::util::SortedSet::_class) ::java::util::SortedSet::_class = java::fetch_class("java/util/SortedSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "last", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::SortedSet::subSet(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::SortedSet::_class) ::java::util::SortedSet::_class = java::fetch_class("java/util/SortedSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "subSet", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

::java::util::SortedSet java::util::SortedSet::tailSet(const ::java::lang::Object& arg0) const {
    if (!::java::util::SortedSet::_class) ::java::util::SortedSet::_class = java::fetch_class("java/util/SortedSet");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailSet", "(Ljava/lang/Object;)Ljava/util/SortedSet;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedSet _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Scanner::Scanner(const ::java::io::File& arg0) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Scanner::Scanner(const ::java::io::File& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/File;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Scanner::Scanner(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Scanner::Scanner(const ::java::io::InputStream& arg0) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Scanner::Scanner(const ::java::io::InputStream& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/io/InputStream;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Scanner::Scanner(const ::java::lang::Readable& arg0) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Readable;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Scanner::Scanner(const ::java::nio::channels::ReadableByteChannel& arg0) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/nio/channels/ReadableByteChannel;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Scanner::Scanner(const ::java::nio::channels::ReadableByteChannel& arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::util::Iterator((jobject)0) {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/nio/channels/ReadableByteChannel;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::util::Scanner::close() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "close", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::regex::Pattern java::util::Scanner::delimiter() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "delimiter", "()Ljava/util/regex/Pattern;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::regex::Pattern _ret(ret);
    return _ret;
}

::java::lang::String java::util::Scanner::findInLine(const ::java::util::regex::Pattern& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "findInLine", "(Ljava/util/regex/Pattern;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Scanner::findInLine(const ::java::lang::String& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "findInLine", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Scanner::findWithinHorizon(const ::java::util::regex::Pattern& arg0, int32_t arg1) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "findWithinHorizon", "(Ljava/util/regex/Pattern;I)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Scanner::findWithinHorizon(const ::java::lang::String& arg0, int32_t arg1) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "findWithinHorizon", "(Ljava/lang/String;I)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool java::util::Scanner::hasNext() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNext(const ::java::util::regex::Pattern& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "(Ljava/util/regex/Pattern;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Scanner::hasNext(const ::java::lang::String& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNext", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Scanner::hasNextBigDecimal() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextBigDecimal", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNextBigInteger() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextBigInteger", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNextBigInteger(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextBigInteger", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Scanner::hasNextBoolean() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextBoolean", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNextByte() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextByte", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNextByte(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextByte", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Scanner::hasNextDouble() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextDouble", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNextFloat() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextFloat", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNextInt() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextInt", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNextInt(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextInt", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Scanner::hasNextLine() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextLine", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNextLong() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextLong", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNextLong(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextLong", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::Scanner::hasNextShort() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextShort", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

bool java::util::Scanner::hasNextShort(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasNextShort", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::io::IOException java::util::Scanner::ioException() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "ioException", "()Ljava/io/IOException;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::io::IOException _ret(ret);
    return _ret;
}

::java::util::Locale java::util::Scanner::locale() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "locale", "()Ljava/util/Locale;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Locale _ret(ret);
    return _ret;
}

::java::util::regex::MatchResult java::util::Scanner::match() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "match", "()Ljava/util/regex/MatchResult;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::regex::MatchResult _ret(ret);
    return _ret;
}

::java::lang::String java::util::Scanner::next() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Scanner::next(const ::java::util::regex::Pattern& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "(Ljava/util/regex/Pattern;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::Scanner::next(const ::java::lang::String& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "next", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::math::BigDecimal java::util::Scanner::nextBigDecimal() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextBigDecimal", "()Ljava/math/BigDecimal;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigDecimal _ret(ret);
    return _ret;
}

::java::math::BigInteger java::util::Scanner::nextBigInteger() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextBigInteger", "()Ljava/math/BigInteger;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

::java::math::BigInteger java::util::Scanner::nextBigInteger(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextBigInteger", "(I)Ljava/math/BigInteger;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::math::BigInteger _ret(ret);
    return _ret;
}

bool java::util::Scanner::nextBoolean() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextBoolean", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int8_t java::util::Scanner::nextByte() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextByte", "()B");
    return java::jni->CallByteMethod(obj, mid);
}

int8_t java::util::Scanner::nextByte(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextByte", "(I)B");
    int32_t _arg0 = arg0;
    return java::jni->CallByteMethod(obj, mid, _arg0);
}

double java::util::Scanner::nextDouble() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextDouble", "()D");
    return java::jni->CallDoubleMethod(obj, mid);
}

float java::util::Scanner::nextFloat() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextFloat", "()F");
    return java::jni->CallFloatMethod(obj, mid);
}

int32_t java::util::Scanner::nextInt() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextInt", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t java::util::Scanner::nextInt(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextInt", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::lang::String java::util::Scanner::nextLine() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextLine", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int64_t java::util::Scanner::nextLong() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextLong", "()J");
    return java::jni->CallLongMethod(obj, mid);
}

int64_t java::util::Scanner::nextLong(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextLong", "(I)J");
    int32_t _arg0 = arg0;
    return java::jni->CallLongMethod(obj, mid, _arg0);
}

int16_t java::util::Scanner::nextShort() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextShort", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

int16_t java::util::Scanner::nextShort(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextShort", "(I)S");
    int32_t _arg0 = arg0;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

int32_t java::util::Scanner::radix() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "radix", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::util::Scanner java::util::Scanner::skip(const ::java::util::regex::Pattern& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(Ljava/util/regex/Pattern;)Ljava/util/Scanner;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Scanner _ret(ret);
    return _ret;
}

::java::util::Scanner java::util::Scanner::skip(const ::java::lang::String& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "skip", "(Ljava/lang/String;)Ljava/util/Scanner;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Scanner _ret(ret);
    return _ret;
}

::java::lang::String java::util::Scanner::toString() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Scanner java::util::Scanner::useDelimiter(const ::java::util::regex::Pattern& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "useDelimiter", "(Ljava/util/regex/Pattern;)Ljava/util/Scanner;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Scanner _ret(ret);
    return _ret;
}

::java::util::Scanner java::util::Scanner::useDelimiter(const ::java::lang::String& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "useDelimiter", "(Ljava/lang/String;)Ljava/util/Scanner;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Scanner _ret(ret);
    return _ret;
}

::java::util::Scanner java::util::Scanner::useLocale(const ::java::util::Locale& arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "useLocale", "(Ljava/util/Locale;)Ljava/util/Scanner;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Scanner _ret(ret);
    return _ret;
}

::java::util::Scanner java::util::Scanner::useRadix(int32_t arg0) const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "useRadix", "(I)Ljava/util/Scanner;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Scanner _ret(ret);
    return _ret;
}

void java::util::Scanner::remove() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::util::Scanner java::util::Scanner::reset() const {
    if (!::java::util::Scanner::_class) ::java::util::Scanner::_class = java::fetch_class("java/util/Scanner");
    static jmethodID mid = java::jni->GetMethodID(_class, "reset", "()Ljava/util/Scanner;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Scanner _ret(ret);
    return _ret;
}

bool java::util::AbstractCollection::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::AbstractCollection::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::AbstractCollection::clear() const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::AbstractCollection::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::AbstractCollection::containsAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::AbstractCollection::isEmpty() const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::util::Iterator java::util::AbstractCollection::iterator() const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "iterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool java::util::AbstractCollection::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::AbstractCollection::removeAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::AbstractCollection::retainAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "retainAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::AbstractCollection::size() const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

std::vector< ::java::lang::Object> java::util::AbstractCollection::toArray() const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::util::AbstractCollection::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

::java::lang::String java::util::AbstractCollection::toString() const {
    if (!::java::util::AbstractCollection::_class) ::java::util::AbstractCollection::_class = java::fetch_class("java/util/AbstractCollection");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::UnknownFormatConversionException::UnknownFormatConversionException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::UnknownFormatConversionException::_class) ::java::util::UnknownFormatConversionException::_class = java::fetch_class("java/util/UnknownFormatConversionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::UnknownFormatConversionException::getConversion() const {
    if (!::java::util::UnknownFormatConversionException::_class) ::java::util::UnknownFormatConversionException::_class = java::fetch_class("java/util/UnknownFormatConversionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConversion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String java::util::UnknownFormatConversionException::getMessage() const {
    if (!::java::util::UnknownFormatConversionException::_class) ::java::util::UnknownFormatConversionException::_class = java::fetch_class("java/util/UnknownFormatConversionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::IllegalFormatPrecisionException::IllegalFormatPrecisionException(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::IllegalFormatPrecisionException::_class) ::java::util::IllegalFormatPrecisionException::_class = java::fetch_class("java/util/IllegalFormatPrecisionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

int32_t java::util::IllegalFormatPrecisionException::getPrecision() const {
    if (!::java::util::IllegalFormatPrecisionException::_class) ::java::util::IllegalFormatPrecisionException::_class = java::fetch_class("java/util/IllegalFormatPrecisionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrecision", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::IllegalFormatPrecisionException::getMessage() const {
    if (!::java::util::IllegalFormatPrecisionException::_class) ::java::util::IllegalFormatPrecisionException::_class = java::fetch_class("java/util/IllegalFormatPrecisionException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::NavigableMap::lowerEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lowerEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::NavigableMap::lowerKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lowerKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::NavigableMap::floorEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "floorEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::NavigableMap::floorKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "floorKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::NavigableMap::ceilingEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "ceilingEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::NavigableMap::ceilingKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "ceilingKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::NavigableMap::higherEntry(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "higherEntry", "(Ljava/lang/Object;)Ljava/util/Map$Entry;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::lang::Object java::util::NavigableMap::higherKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "higherKey", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::NavigableMap::firstEntry() const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "firstEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::NavigableMap::lastEntry() const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::NavigableMap::pollFirstEntry() const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirstEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::util::Map_Entry java::util::NavigableMap::pollLastEntry() const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLastEntry", "()Ljava/util/Map$Entry;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Map_Entry _ret(ret);
    return _ret;
}

::java::util::NavigableMap java::util::NavigableMap::descendingMap() const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingMap", "()Ljava/util/NavigableMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableMap _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::NavigableMap::navigableKeySet() const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "navigableKeySet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableSet java::util::NavigableMap::descendingKeySet() const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingKeySet", "()Ljava/util/NavigableSet;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::NavigableSet _ret(ret);
    return _ret;
}

::java::util::NavigableMap java::util::NavigableMap::subMap(const ::java::lang::Object& arg0, bool arg1, const ::java::lang::Object& arg2, bool arg3) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "subMap", "(Ljava/lang/Object;ZLjava/lang/Object;Z)Ljava/util/NavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    bool _arg3 = arg3;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2, _arg3);
    ::java::util::NavigableMap _ret(ret);
    return _ret;
}

::java::util::NavigableMap java::util::NavigableMap::headMap(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "headMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableMap _ret(ret);
    return _ret;
}

::java::util::NavigableMap java::util::NavigableMap::tailMap(const ::java::lang::Object& arg0, bool arg1) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailMap", "(Ljava/lang/Object;Z)Ljava/util/NavigableMap;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::NavigableMap _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::NavigableMap::subMap(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::NavigableMap::headMap(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

::java::util::SortedMap java::util::NavigableMap::tailMap(const ::java::lang::Object& arg0) const {
    if (!::java::util::NavigableMap::_class) ::java::util::NavigableMap::_class = java::fetch_class("java/util/NavigableMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::SortedMap _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(const ::java::lang::String& arg0, uint16_t arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::IllegalArgumentException((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0), ::java::util::IllegalFormatException((jobject)0) {
    if (!::java::util::FormatFlagsConversionMismatchException::_class) ::java::util::FormatFlagsConversionMismatchException::_class = java::fetch_class("java/util/FormatFlagsConversionMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;C)V");
    jobject _arg0 = arg0.obj;
    uint16_t _arg1 = arg1;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::java::lang::String java::util::FormatFlagsConversionMismatchException::getFlags() const {
    if (!::java::util::FormatFlagsConversionMismatchException::_class) ::java::util::FormatFlagsConversionMismatchException::_class = java::fetch_class("java/util/FormatFlagsConversionMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFlags", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

uint16_t java::util::FormatFlagsConversionMismatchException::getConversion() const {
    if (!::java::util::FormatFlagsConversionMismatchException::_class) ::java::util::FormatFlagsConversionMismatchException::_class = java::fetch_class("java/util/FormatFlagsConversionMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getConversion", "()C");
    return java::jni->CallCharMethod(obj, mid);
}

::java::lang::String java::util::FormatFlagsConversionMismatchException::getMessage() const {
    if (!::java::util::FormatFlagsConversionMismatchException::_class) ::java::util::FormatFlagsConversionMismatchException::_class = java::fetch_class("java/util/FormatFlagsConversionMismatchException");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::Stack::Stack() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::List((jobject)0), ::java::util::RandomAccess((jobject)0), ::java::util::Vector((jobject)0) {
    if (!::java::util::Stack::_class) ::java::util::Stack::_class = java::fetch_class("java/util/Stack");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

bool java::util::Stack::empty() const {
    if (!::java::util::Stack::_class) ::java::util::Stack::_class = java::fetch_class("java/util/Stack");
    static jmethodID mid = java::jni->GetMethodID(_class, "empty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::util::Stack::peek() const {
    if (!::java::util::Stack::_class) ::java::util::Stack::_class = java::fetch_class("java/util/Stack");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Stack::pop() const {
    if (!::java::util::Stack::_class) ::java::util::Stack::_class = java::fetch_class("java/util/Stack");
    static jmethodID mid = java::jni->GetMethodID(_class, "pop", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::Stack::push(const ::java::lang::Object& arg0) const {
    if (!::java::util::Stack::_class) ::java::util::Stack::_class = java::fetch_class("java/util/Stack");
    static jmethodID mid = java::jni->GetMethodID(_class, "push", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::Stack::search(const ::java::lang::Object& arg0) const {
    if (!::java::util::Stack::_class) ::java::util::Stack::_class = java::fetch_class("java/util/Stack");
    static jmethodID mid = java::jni->GetMethodID(_class, "search", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

bool java::util::Enumeration::hasMoreElements() const {
    if (!::java::util::Enumeration::_class) ::java::util::Enumeration::_class = java::fetch_class("java/util/Enumeration");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasMoreElements", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::Object java::util::Enumeration::nextElement() const {
    if (!::java::util::Enumeration::_class) ::java::util::Enumeration::_class = java::fetch_class("java/util/Enumeration");
    static jmethodID mid = java::jni->GetMethodID(_class, "nextElement", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::GregorianCalendar::GregorianCalendar() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Calendar((jobject)0) {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::GregorianCalendar::GregorianCalendar(int32_t arg0, int32_t arg1, int32_t arg2) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Calendar((jobject)0) {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(III)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::GregorianCalendar::GregorianCalendar(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Calendar((jobject)0) {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::GregorianCalendar::GregorianCalendar(int32_t arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Calendar((jobject)0) {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(IIIIII)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    int32_t _arg2 = arg2;
    int32_t _arg3 = arg3;
    int32_t _arg4 = arg4;
    int32_t _arg5 = arg5;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1, _arg2, _arg3, _arg4, _arg5);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::GregorianCalendar::GregorianCalendar(const ::java::util::Locale& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Calendar((jobject)0) {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::GregorianCalendar::GregorianCalendar(const ::java::util::TimeZone& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Calendar((jobject)0) {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/TimeZone;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::GregorianCalendar::GregorianCalendar(const ::java::util::TimeZone& arg0, const ::java::util::Locale& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Comparable((jobject)0), ::java::util::Calendar((jobject)0) {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/TimeZone;Ljava/util/Locale;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

void java::util::GregorianCalendar::add(int32_t arg0, int32_t arg1) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object java::util::GregorianCalendar::clone() const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::GregorianCalendar::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::GregorianCalendar::getActualMaximum(int32_t arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActualMaximum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::GregorianCalendar::getActualMinimum(int32_t arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getActualMinimum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::GregorianCalendar::getGreatestMinimum(int32_t arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGreatestMinimum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::Date java::util::GregorianCalendar::getGregorianChange() const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getGregorianChange", "()Ljava/util/Date;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Date _ret(ret);
    return _ret;
}

int32_t java::util::GregorianCalendar::getLeastMaximum(int32_t arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLeastMaximum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::GregorianCalendar::getMaximum(int32_t arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMaximum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::GregorianCalendar::getMinimum(int32_t arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMinimum", "(I)I");
    int32_t _arg0 = arg0;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::GregorianCalendar::hashCode() const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::GregorianCalendar::isLeapYear(int32_t arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "isLeapYear", "(I)Z");
    int32_t _arg0 = arg0;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::GregorianCalendar::roll(int32_t arg0, int32_t arg1) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "roll", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::GregorianCalendar::roll(int32_t arg0, bool arg1) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "roll", "(IZ)V");
    int32_t _arg0 = arg0;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void java::util::GregorianCalendar::setGregorianChange(const ::java::util::Date& arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setGregorianChange", "(Ljava/util/Date;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::GregorianCalendar::setFirstDayOfWeek(int32_t arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setFirstDayOfWeek", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::GregorianCalendar::setMinimalDaysInFirstWeek(int32_t arg0) const {
    if (!::java::util::GregorianCalendar::_class) ::java::util::GregorianCalendar::_class = java::fetch_class("java/util/GregorianCalendar");
    static jmethodID mid = java::jni->GetMethodID(_class, "setMinimalDaysInFirstWeek", "(I)V");
    int32_t _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedList::LinkedList() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::AbstractSequentialList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::List((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::LinkedList::LinkedList(const ::java::util::Collection& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::lang::Iterable((jobject)0), ::java::util::AbstractCollection((jobject)0), ::java::util::AbstractList((jobject)0), ::java::util::AbstractSequentialList((jobject)0), ::java::util::Collection((jobject)0), ::java::util::Deque((jobject)0), ::java::util::List((jobject)0), ::java::util::Queue((jobject)0) {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Collection;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::LinkedList::add(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(ILjava/lang/Object;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

bool java::util::LinkedList::add(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "add", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::LinkedList::addAll(int32_t arg0, const ::java::util::Collection& arg1) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(ILjava/util/Collection;)Z");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

bool java::util::LinkedList::addAll(const ::java::util::Collection& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addAll", "(Ljava/util/Collection;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

void java::util::LinkedList::addFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addFirst", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::LinkedList::addLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "addLast", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void java::util::LinkedList::clear() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::java::lang::Object java::util::LinkedList::clone() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::LinkedList::contains(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::LinkedList::get(int32_t arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::getFirst() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::getLast() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::LinkedList::indexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "indexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

int32_t java::util::LinkedList::lastIndexOf(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "lastIndexOf", "(Ljava/lang/Object;)I");
    jobject _arg0 = arg0.obj;
    return java::jni->CallIntMethod(obj, mid, _arg0);
}

::java::util::ListIterator java::util::LinkedList::listIterator(int32_t arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "listIterator", "(I)Ljava/util/ListIterator;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::util::ListIterator _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::remove(int32_t arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(I)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::LinkedList::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::LinkedList::removeFirst() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::removeLast() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Iterator java::util::LinkedList::descendingIterator() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "descendingIterator", "()Ljava/util/Iterator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Iterator _ret(ret);
    return _ret;
}

bool java::util::LinkedList::offerFirst(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerFirst", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::LinkedList::offerLast(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "offerLast", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::LinkedList::peekFirst() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::peekLast() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "peekLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::pollFirst() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollFirst", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::pollLast() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "pollLast", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::pop() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "pop", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::LinkedList::push(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "push", "(Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool java::util::LinkedList::removeFirstOccurrence(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::LinkedList::removeLastOccurrence(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::LinkedList::set(int32_t arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

int32_t java::util::LinkedList::size() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool java::util::LinkedList::offer(const ::java::lang::Object& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "offer", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::LinkedList::poll() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "poll", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::remove() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::peek() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "peek", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::LinkedList::element() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "element", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

std::vector< ::java::lang::Object> java::util::LinkedList::toArray() const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "()[Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

std::vector< ::java::lang::Object> java::util::LinkedList::toArray(const std::vector< ::java::lang::Object>& arg0) const {
    if (!::java::util::LinkedList::_class) ::java::util::LinkedList::_class = java::fetch_class("java/util/LinkedList");
    static jmethodID mid = java::jni->GetMethodID(_class, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");
    unsigned arg0s = arg0.size();
    if (!::java::lang::Object::_class) ::java::lang::Object::_class = java::fetch_class("java/lang/Object");
    jobjectArray _arg0 = java::jni->NewObjectArray(arg0s, ::java::lang::Object::_class, nullptr);
    for (unsigned arg0i = 0; arg0i < arg0s; ++arg0i) {
      const ::java::lang::Object& arg0e = arg0[arg0i];
        jobject arg0d = arg0e.obj;
      java::jni->SetObjectArrayElement(_arg0, arg0i, arg0d);
    }
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    unsigned rets = java::jni->GetArrayLength((jarray)ret);
    std::vector< ::java::lang::Object> _ret(rets, ::java::lang::Object((jobject)nullptr));
    for (unsigned reti = 0; reti < rets; ++reti) {
      jobject rete = java::jni->GetObjectArrayElement((jobjectArray)ret, reti);
        ::java::lang::Object retd(rete);
      _ret[reti] = std::move(retd);
    }
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::EventListenerProxy::EventListenerProxy(const ::java::util::EventListener& arg0) : ::java::lang::Object((jobject)0), ::java::util::EventListener((jobject)0) {
    if (!::java::util::EventListenerProxy::_class) ::java::util::EventListenerProxy::_class = java::fetch_class("java/util/EventListenerProxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/EventListener;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::util::EventListener java::util::EventListenerProxy::getListener() const {
    if (!::java::util::EventListenerProxy::_class) ::java::util::EventListenerProxy::_class = java::fetch_class("java/util/EventListenerProxy");
    static jmethodID mid = java::jni->GetMethodID(_class, "getListener", "()Ljava/util/EventListener;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::EventListener _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TooManyListenersException::TooManyListenersException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::TooManyListenersException::_class) ::java::util::TooManyListenersException::_class = java::fetch_class("java/util/TooManyListenersException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::TooManyListenersException::TooManyListenersException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::TooManyListenersException::_class) ::java::util::TooManyListenersException::_class = java::fetch_class("java/util/TooManyListenersException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::AbstractMap_SimpleEntry::AbstractMap_SimpleEntry(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Map_Entry((jobject)0) {
    if (!::java::util::AbstractMap_SimpleEntry::_class) ::java::util::AbstractMap_SimpleEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::AbstractMap_SimpleEntry::AbstractMap_SimpleEntry(const ::java::util::Map_Entry& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::util::Map_Entry((jobject)0) {
    if (!::java::util::AbstractMap_SimpleEntry::_class) ::java::util::AbstractMap_SimpleEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map$Entry;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

::java::lang::Object java::util::AbstractMap_SimpleEntry::getKey() const {
    if (!::java::util::AbstractMap_SimpleEntry::_class) ::java::util::AbstractMap_SimpleEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getKey", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::AbstractMap_SimpleEntry::getValue() const {
    if (!::java::util::AbstractMap_SimpleEntry::_class) ::java::util::AbstractMap_SimpleEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::AbstractMap_SimpleEntry::setValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractMap_SimpleEntry::_class) ::java::util::AbstractMap_SimpleEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::AbstractMap_SimpleEntry::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::AbstractMap_SimpleEntry::_class) ::java::util::AbstractMap_SimpleEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

int32_t java::util::AbstractMap_SimpleEntry::hashCode() const {
    if (!::java::util::AbstractMap_SimpleEntry::_class) ::java::util::AbstractMap_SimpleEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "hashCode", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String java::util::AbstractMap_SimpleEntry::toString() const {
    if (!::java::util::AbstractMap_SimpleEntry::_class) ::java::util::AbstractMap_SimpleEntry::_class = java::fetch_class("java/util/AbstractMap$SimpleEntry");
    static jmethodID mid = java::jni->GetMethodID(_class, "toString", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::IdentityHashMap::IdentityHashMap() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::IdentityHashMap::IdentityHashMap(int32_t arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(I)V");
    int32_t _arg0 = arg0;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::IdentityHashMap::IdentityHashMap(const ::java::util::Map& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Cloneable((jobject)0), ::java::util::AbstractMap((jobject)0), ::java::util::Map((jobject)0) {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

void java::util::IdentityHashMap::clear() const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clear", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool java::util::IdentityHashMap::containsKey(const ::java::lang::Object& arg0) const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsKey", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool java::util::IdentityHashMap::containsValue(const ::java::lang::Object& arg0) const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsValue", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::IdentityHashMap::get(const ::java::lang::Object& arg0) const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "get", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object java::util::IdentityHashMap::put(const ::java::lang::Object& arg0, const ::java::lang::Object& arg1) const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

void java::util::IdentityHashMap::putAll(const ::java::util::Map& arg0) const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "putAll", "(Ljava/util/Map;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::IdentityHashMap::remove(const ::java::lang::Object& arg0) const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "remove", "(Ljava/lang/Object;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::util::Set java::util::IdentityHashMap::entrySet() const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "entrySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Set java::util::IdentityHashMap::keySet() const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "keySet", "()Ljava/util/Set;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Set _ret(ret);
    return _ret;
}

::java::util::Collection java::util::IdentityHashMap::values() const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "values", "()Ljava/util/Collection;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::util::Collection _ret(ret);
    return _ret;
}

bool java::util::IdentityHashMap::equals(const ::java::lang::Object& arg0) const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "equals", "(Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object java::util::IdentityHashMap::clone() const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "clone", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool java::util::IdentityHashMap::isEmpty() const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEmpty", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

int32_t java::util::IdentityHashMap::size() const {
    if (!::java::util::IdentityHashMap::_class) ::java::util::IdentityHashMap::_class = java::fetch_class("java/util/IdentityHashMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "size", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::NoSuchElementException::NoSuchElementException() : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::NoSuchElementException::_class) ::java::util::NoSuchElementException::_class = java::fetch_class("java/util/NoSuchElementException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "()V");
    obj = java::jni->NewObject(_class, mid);
}
#pragma GCC diagnostic pop

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::java::util::NoSuchElementException::NoSuchElementException(const ::java::lang::String& arg0) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::java::util::NoSuchElementException::_class) ::java::util::NoSuchElementException::_class = java::fetch_class("java/util/NoSuchElementException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    obj = java::jni->NewObject(_class, mid, _arg0);
}
#pragma GCC diagnostic pop

