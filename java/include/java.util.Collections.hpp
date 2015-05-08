#pragma once

#include "../src/java-core.hpp"
#include <jni.h>
#include <cstdint>
#include <memory>
#include <vector>

#include "java.lang.Object.hpp"

namespace java { namespace lang { class Class; } }
namespace java { namespace lang { class Comparable; } }
namespace java { namespace lang { class Object; } }
namespace java { namespace util { class ArrayList; } }
namespace java { namespace util { class Collection; } }
namespace java { namespace util { class Comparator; } }
namespace java { namespace util { class Deque; } }
namespace java { namespace util { class Enumeration; } }
namespace java { namespace util { class List; } }
namespace java { namespace util { class Map; } }
namespace java { namespace util { class Queue; } }
namespace java { namespace util { class Random; } }
namespace java { namespace util { class Set; } }
namespace java { namespace util { class SortedMap; } }
namespace java { namespace util { class SortedSet; } }

namespace java {
namespace util {
class Collections : public virtual ::java::lang::Object {
public:

    
    static jclass _class;
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    explicit Collections(jobject _obj) : ::java::lang::Object(_obj) {}
    #pragma GCC diagnostic pop
    
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wreorder"
    Collections(const ::java::util::Collections& x) : ::java::lang::Object((jobject)0) {obj = x.obj;}
    Collections(::java::util::Collections&& x) : ::java::lang::Object((jobject)0) {obj = x.obj; x.obj = JavaObjectHolder((jobject)0);}
    #pragma GCC diagnostic pop
    
    ::java::util::Collections& operator=(const ::java::util::Collections& x) {obj = x.obj; return *this;}
    ::java::util::Collections& operator=(::java::util::Collections&& x) {obj = std::move(x.obj); return *this;}
    
    static int32_t binarySearch(const ::java::util::List&, const ::java::lang::Object&);
    static int32_t binarySearch(const ::java::util::List&, const ::java::lang::Object&, const ::java::util::Comparator&);
    static void copy(const ::java::util::List&, const ::java::util::List&);
    static ::java::util::Enumeration enumeration(const ::java::util::Collection&);
    static void fill(const ::java::util::List&, const ::java::lang::Object&);
    static ::java::lang::Comparable max(const ::java::util::Collection&);
    static ::java::lang::Object max(const ::java::util::Collection&, const ::java::util::Comparator&);
    static ::java::lang::Comparable min(const ::java::util::Collection&);
    static ::java::lang::Object min(const ::java::util::Collection&, const ::java::util::Comparator&);
    static ::java::util::List nCopies(int32_t, const ::java::lang::Object&);
    static void reverse(const ::java::util::List&);
    static ::java::util::Comparator reverseOrder();
    static ::java::util::Comparator reverseOrder(const ::java::util::Comparator&);
    static void shuffle(const ::java::util::List&);
    static void shuffle(const ::java::util::List&, const ::java::util::Random&);
    static ::java::util::Set singleton(const ::java::lang::Object&);
    static ::java::util::List singletonList(const ::java::lang::Object&);
    static ::java::util::Map singletonMap(const ::java::lang::Object&, const ::java::lang::Object&);
    static void sort(const ::java::util::List&);
    static void sort(const ::java::util::List&, const ::java::util::Comparator&);
    static void swap(const ::java::util::List&, int32_t, int32_t);
    static bool replaceAll(const ::java::util::List&, const ::java::lang::Object&, const ::java::lang::Object&);
    static void rotate(const ::java::util::List&, int32_t);
    static int32_t indexOfSubList(const ::java::util::List&, const ::java::util::List&);
    static int32_t lastIndexOfSubList(const ::java::util::List&, const ::java::util::List&);
    static ::java::util::ArrayList list(const ::java::util::Enumeration&);
    static ::java::util::Collection synchronizedCollection(const ::java::util::Collection&);
    static ::java::util::List synchronizedList(const ::java::util::List&);
    static ::java::util::Map synchronizedMap(const ::java::util::Map&);
    static ::java::util::Set synchronizedSet(const ::java::util::Set&);
    static ::java::util::SortedMap synchronizedSortedMap(const ::java::util::SortedMap&);
    static ::java::util::SortedSet synchronizedSortedSet(const ::java::util::SortedSet&);
    static ::java::util::Collection unmodifiableCollection(const ::java::util::Collection&);
    static ::java::util::List unmodifiableList(const ::java::util::List&);
    static ::java::util::Map unmodifiableMap(const ::java::util::Map&);
    static ::java::util::Set unmodifiableSet(const ::java::util::Set&);
    static ::java::util::SortedMap unmodifiableSortedMap(const ::java::util::SortedMap&);
    static ::java::util::SortedSet unmodifiableSortedSet(const ::java::util::SortedSet&);
    static int32_t frequency(const ::java::util::Collection&, const ::java::lang::Object&);
    static ::java::util::List emptyList();
    static ::java::util::Set emptySet();
    static ::java::util::Map emptyMap();
    static ::java::util::Collection checkedCollection(const ::java::util::Collection&, const ::java::lang::Class&);
    static ::java::util::Map checkedMap(const ::java::util::Map&, const ::java::lang::Class&, const ::java::lang::Class&);
    static ::java::util::List checkedList(const ::java::util::List&, const ::java::lang::Class&);
    static ::java::util::Set checkedSet(const ::java::util::Set&, const ::java::lang::Class&);
    static ::java::util::SortedMap checkedSortedMap(const ::java::util::SortedMap&, const ::java::lang::Class&, const ::java::lang::Class&);
    static ::java::util::SortedSet checkedSortedSet(const ::java::util::SortedSet&, const ::java::lang::Class&);
    static bool addAll(const ::java::util::Collection&, const std::vector< ::java::lang::Object>&);
    static bool disjoint(const ::java::util::Collection&, const ::java::util::Collection&);
    static ::java::util::Set newSetFromMap(const ::java::util::Map&);
    static ::java::util::Queue asLifoQueue(const ::java::util::Deque&);

};
}
}


