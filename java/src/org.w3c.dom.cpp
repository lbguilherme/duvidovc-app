#include "java-core.hpp"
#include <memory>
#include "java.lang.Object.hpp"
#include "java.lang.String.hpp"
#include "org.w3c.dom.Attr.hpp"
#include "org.w3c.dom.CDATASection.hpp"
#include "org.w3c.dom.CharacterData.hpp"
#include "org.w3c.dom.Comment.hpp"
#include "org.w3c.dom.DOMConfiguration.hpp"
#include "org.w3c.dom.DOMError.hpp"
#include "org.w3c.dom.DOMErrorHandler.hpp"
#include "org.w3c.dom.DOMException.hpp"
#include "org.w3c.dom.DOMImplementation.hpp"
#include "org.w3c.dom.DOMImplementationList.hpp"
#include "org.w3c.dom.DOMImplementationSource.hpp"
#include "org.w3c.dom.DOMLocator.hpp"
#include "org.w3c.dom.DOMStringList.hpp"
#include "org.w3c.dom.Document.hpp"
#include "org.w3c.dom.DocumentFragment.hpp"
#include "org.w3c.dom.DocumentType.hpp"
#include "org.w3c.dom.Element.hpp"
#include "org.w3c.dom.Entity.hpp"
#include "org.w3c.dom.EntityReference.hpp"
#include "org.w3c.dom.NameList.hpp"
#include "org.w3c.dom.NamedNodeMap.hpp"
#include "org.w3c.dom.Node.hpp"
#include "org.w3c.dom.NodeList.hpp"
#include "org.w3c.dom.Notation.hpp"
#include "org.w3c.dom.ProcessingInstruction.hpp"
#include "org.w3c.dom.Text.hpp"
#include "org.w3c.dom.TypeInfo.hpp"
#include "org.w3c.dom.UserDataHandler.hpp"

jclass org::w3c::dom::Attr::_class = nullptr;
jclass org::w3c::dom::Entity::_class = nullptr;
jclass org::w3c::dom::DOMStringList::_class = nullptr;
jclass org::w3c::dom::Text::_class = nullptr;
jclass org::w3c::dom::ProcessingInstruction::_class = nullptr;
jclass org::w3c::dom::Element::_class = nullptr;
jclass org::w3c::dom::DOMImplementationSource::_class = nullptr;
jclass org::w3c::dom::DOMConfiguration::_class = nullptr;
jclass org::w3c::dom::DOMImplementation::_class = nullptr;
jclass org::w3c::dom::NamedNodeMap::_class = nullptr;
jclass org::w3c::dom::Comment::_class = nullptr;
jclass org::w3c::dom::DOMLocator::_class = nullptr;
jclass org::w3c::dom::Node::_class = nullptr;
jclass org::w3c::dom::Document::_class = nullptr;
jclass org::w3c::dom::Notation::_class = nullptr;
jclass org::w3c::dom::EntityReference::_class = nullptr;
jclass org::w3c::dom::DOMException::_class = nullptr;
jclass org::w3c::dom::DOMImplementationList::_class = nullptr;
jclass org::w3c::dom::DOMErrorHandler::_class = nullptr;
jclass org::w3c::dom::NodeList::_class = nullptr;
jclass org::w3c::dom::DocumentFragment::_class = nullptr;
jclass org::w3c::dom::UserDataHandler::_class = nullptr;
jclass org::w3c::dom::CDATASection::_class = nullptr;
jclass org::w3c::dom::DOMError::_class = nullptr;
jclass org::w3c::dom::CharacterData::_class = nullptr;
jclass org::w3c::dom::TypeInfo::_class = nullptr;
jclass org::w3c::dom::DocumentType::_class = nullptr;
jclass org::w3c::dom::NameList::_class = nullptr;

::java::lang::String org::w3c::dom::Attr::getName() const {
    if (!::org::w3c::dom::Attr::_class) ::org::w3c::dom::Attr::_class = java::fetch_class("org/w3c/dom/Attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::w3c::dom::Attr::getSpecified() const {
    if (!::org::w3c::dom::Attr::_class) ::org::w3c::dom::Attr::_class = java::fetch_class("org/w3c/dom/Attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSpecified", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::w3c::dom::Attr::getValue() const {
    if (!::org::w3c::dom::Attr::_class) ::org::w3c::dom::Attr::_class = java::fetch_class("org/w3c/dom/Attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "getValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::Attr::setValue(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Attr::_class) ::org::w3c::dom::Attr::_class = java::fetch_class("org/w3c/dom/Attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "setValue", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::Element org::w3c::dom::Attr::getOwnerElement() const {
    if (!::org::w3c::dom::Attr::_class) ::org::w3c::dom::Attr::_class = java::fetch_class("org/w3c/dom/Attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOwnerElement", "()Lorg/w3c/dom/Element;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Element _ret(ret);
    return _ret;
}

::org::w3c::dom::TypeInfo org::w3c::dom::Attr::getSchemaTypeInfo() const {
    if (!::org::w3c::dom::Attr::_class) ::org::w3c::dom::Attr::_class = java::fetch_class("org/w3c/dom/Attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::TypeInfo _ret(ret);
    return _ret;
}

bool org::w3c::dom::Attr::isId() const {
    if (!::org::w3c::dom::Attr::_class) ::org::w3c::dom::Attr::_class = java::fetch_class("org/w3c/dom/Attr");
    static jmethodID mid = java::jni->GetMethodID(_class, "isId", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::w3c::dom::Entity::getPublicId() const {
    if (!::org::w3c::dom::Entity::_class) ::org::w3c::dom::Entity::_class = java::fetch_class("org/w3c/dom/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Entity::getSystemId() const {
    if (!::org::w3c::dom::Entity::_class) ::org::w3c::dom::Entity::_class = java::fetch_class("org/w3c/dom/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Entity::getNotationName() const {
    if (!::org::w3c::dom::Entity::_class) ::org::w3c::dom::Entity::_class = java::fetch_class("org/w3c/dom/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotationName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Entity::getInputEncoding() const {
    if (!::org::w3c::dom::Entity::_class) ::org::w3c::dom::Entity::_class = java::fetch_class("org/w3c/dom/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Entity::getXmlEncoding() const {
    if (!::org::w3c::dom::Entity::_class) ::org::w3c::dom::Entity::_class = java::fetch_class("org/w3c/dom/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXmlEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Entity::getXmlVersion() const {
    if (!::org::w3c::dom::Entity::_class) ::org::w3c::dom::Entity::_class = java::fetch_class("org/w3c/dom/Entity");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXmlVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::DOMStringList::item(int32_t arg0) const {
    if (!::org::w3c::dom::DOMStringList::_class) ::org::w3c::dom::DOMStringList::_class = java::fetch_class("org/w3c/dom/DOMStringList");
    static jmethodID mid = java::jni->GetMethodID(_class, "item", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::w3c::dom::DOMStringList::getLength() const {
    if (!::org::w3c::dom::DOMStringList::_class) ::org::w3c::dom::DOMStringList::_class = java::fetch_class("org/w3c/dom/DOMStringList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::w3c::dom::DOMStringList::contains(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::DOMStringList::_class) ::org::w3c::dom::DOMStringList::_class = java::fetch_class("org/w3c/dom/DOMStringList");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::org::w3c::dom::Text org::w3c::dom::Text::splitText(int32_t arg0) const {
    if (!::org::w3c::dom::Text::_class) ::org::w3c::dom::Text::_class = java::fetch_class("org/w3c/dom/Text");
    static jmethodID mid = java::jni->GetMethodID(_class, "splitText", "(I)Lorg/w3c/dom/Text;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Text _ret(ret);
    return _ret;
}

bool org::w3c::dom::Text::isElementContentWhitespace() const {
    if (!::org::w3c::dom::Text::_class) ::org::w3c::dom::Text::_class = java::fetch_class("org/w3c/dom/Text");
    static jmethodID mid = java::jni->GetMethodID(_class, "isElementContentWhitespace", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::w3c::dom::Text::getWholeText() const {
    if (!::org::w3c::dom::Text::_class) ::org::w3c::dom::Text::_class = java::fetch_class("org/w3c/dom/Text");
    static jmethodID mid = java::jni->GetMethodID(_class, "getWholeText", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::w3c::dom::Text org::w3c::dom::Text::replaceWholeText(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Text::_class) ::org::w3c::dom::Text::_class = java::fetch_class("org/w3c/dom/Text");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceWholeText", "(Ljava/lang/String;)Lorg/w3c/dom/Text;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Text _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::ProcessingInstruction::getTarget() const {
    if (!::org::w3c::dom::ProcessingInstruction::_class) ::org::w3c::dom::ProcessingInstruction::_class = java::fetch_class("org/w3c/dom/ProcessingInstruction");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTarget", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::ProcessingInstruction::getData() const {
    if (!::org::w3c::dom::ProcessingInstruction::_class) ::org::w3c::dom::ProcessingInstruction::_class = java::fetch_class("org/w3c/dom/ProcessingInstruction");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::ProcessingInstruction::setData(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::ProcessingInstruction::_class) ::org::w3c::dom::ProcessingInstruction::_class = java::fetch_class("org/w3c/dom/ProcessingInstruction");
    static jmethodID mid = java::jni->GetMethodID(_class, "setData", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::Element::getTagName() const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTagName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Element::getAttribute(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttribute", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::Element::setAttribute(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttribute", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::w3c::dom::Element::removeAttribute(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAttribute", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::Attr org::w3c::dom::Element::getAttributeNode(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeNode", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Attr _ret(ret);
    return _ret;
}

::org::w3c::dom::Attr org::w3c::dom::Element::setAttributeNode(const ::org::w3c::dom::Attr& arg0) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Attr _ret(ret);
    return _ret;
}

::org::w3c::dom::Attr org::w3c::dom::Element::removeAttributeNode(const ::org::w3c::dom::Attr& arg0) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAttributeNode", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Attr _ret(ret);
    return _ret;
}

::org::w3c::dom::NodeList org::w3c::dom::Element::getElementsByTagName(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::NodeList _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Element::getAttributeNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::Element::setAttributeNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::w3c::dom::Element::removeAttributeNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::w3c::dom::Attr org::w3c::dom::Element::getAttributeNodeNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributeNodeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::Attr _ret(ret);
    return _ret;
}

::org::w3c::dom::Attr org::w3c::dom::Element::setAttributeNodeNS(const ::org::w3c::dom::Attr& arg0) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setAttributeNodeNS", "(Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Attr;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Attr _ret(ret);
    return _ret;
}

::org::w3c::dom::NodeList org::w3c::dom::Element::getElementsByTagNameNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::NodeList _ret(ret);
    return _ret;
}

bool org::w3c::dom::Element::hasAttribute(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAttribute", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::w3c::dom::Element::hasAttributeNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::org::w3c::dom::TypeInfo org::w3c::dom::Element::getSchemaTypeInfo() const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSchemaTypeInfo", "()Lorg/w3c/dom/TypeInfo;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::TypeInfo _ret(ret);
    return _ret;
}

void org::w3c::dom::Element::setIdAttribute(const ::java::lang::String& arg0, bool arg1) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIdAttribute", "(Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::w3c::dom::Element::setIdAttributeNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1, bool arg2) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIdAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Z)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    bool _arg2 = arg2;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

void org::w3c::dom::Element::setIdAttributeNode(const ::org::w3c::dom::Attr& arg0, bool arg1) const {
    if (!::org::w3c::dom::Element::_class) ::org::w3c::dom::Element::_class = java::fetch_class("org/w3c/dom/Element");
    static jmethodID mid = java::jni->GetMethodID(_class, "setIdAttributeNode", "(Lorg/w3c/dom/Attr;Z)V");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::org::w3c::dom::DOMImplementation org::w3c::dom::DOMImplementationSource::getDOMImplementation(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::DOMImplementationSource::_class) ::org::w3c::dom::DOMImplementationSource::_class = java::fetch_class("org/w3c/dom/DOMImplementationSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDOMImplementation", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementation;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::DOMImplementation _ret(ret);
    return _ret;
}

::org::w3c::dom::DOMImplementationList org::w3c::dom::DOMImplementationSource::getDOMImplementationList(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::DOMImplementationSource::_class) ::org::w3c::dom::DOMImplementationSource::_class = java::fetch_class("org/w3c/dom/DOMImplementationSource");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDOMImplementationList", "(Ljava/lang/String;)Lorg/w3c/dom/DOMImplementationList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::DOMImplementationList _ret(ret);
    return _ret;
}

void org::w3c::dom::DOMConfiguration::setParameter(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::w3c::dom::DOMConfiguration::_class) ::org::w3c::dom::DOMConfiguration::_class = java::fetch_class("org/w3c/dom/DOMConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

::java::lang::Object org::w3c::dom::DOMConfiguration::getParameter(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::DOMConfiguration::_class) ::org::w3c::dom::DOMConfiguration::_class = java::fetch_class("org/w3c/dom/DOMConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameter", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

bool org::w3c::dom::DOMConfiguration::canSetParameter(const ::java::lang::String& arg0, const ::java::lang::Object& arg1) const {
    if (!::org::w3c::dom::DOMConfiguration::_class) ::org::w3c::dom::DOMConfiguration::_class = java::fetch_class("org/w3c/dom/DOMConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "canSetParameter", "(Ljava/lang/String;Ljava/lang/Object;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::org::w3c::dom::DOMStringList org::w3c::dom::DOMConfiguration::getParameterNames() const {
    if (!::org::w3c::dom::DOMConfiguration::_class) ::org::w3c::dom::DOMConfiguration::_class = java::fetch_class("org/w3c/dom/DOMConfiguration");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParameterNames", "()Lorg/w3c/dom/DOMStringList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::DOMStringList _ret(ret);
    return _ret;
}

bool org::w3c::dom::DOMImplementation::hasFeature(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::DOMImplementation::_class) ::org::w3c::dom::DOMImplementation::_class = java::fetch_class("org/w3c/dom/DOMImplementation");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasFeature", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::org::w3c::dom::DocumentType org::w3c::dom::DOMImplementation::createDocumentType(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::w3c::dom::DOMImplementation::_class) ::org::w3c::dom::DOMImplementation::_class = java::fetch_class("org/w3c/dom/DOMImplementation");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDocumentType", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/DocumentType;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::w3c::dom::DocumentType _ret(ret);
    return _ret;
}

::org::w3c::dom::Document org::w3c::dom::DOMImplementation::createDocument(const ::java::lang::String& arg0, const ::java::lang::String& arg1, const ::org::w3c::dom::DocumentType& arg2) const {
    if (!::org::w3c::dom::DOMImplementation::_class) ::org::w3c::dom::DOMImplementation::_class = java::fetch_class("org/w3c/dom/DOMImplementation");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDocument", "(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/DocumentType;)Lorg/w3c/dom/Document;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::w3c::dom::Document _ret(ret);
    return _ret;
}

::java::lang::Object org::w3c::dom::DOMImplementation::getFeature(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::DOMImplementation::_class) ::org::w3c::dom::DOMImplementation::_class = java::fetch_class("org/w3c/dom/DOMImplementation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::NamedNodeMap::getNamedItem(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::NamedNodeMap::_class) ::org::w3c::dom::NamedNodeMap::_class = java::fetch_class("org/w3c/dom/NamedNodeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::NamedNodeMap::setNamedItem(const ::org::w3c::dom::Node& arg0) const {
    if (!::org::w3c::dom::NamedNodeMap::_class) ::org::w3c::dom::NamedNodeMap::_class = java::fetch_class("org/w3c/dom/NamedNodeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNamedItem", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::NamedNodeMap::removeNamedItem(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::NamedNodeMap::_class) ::org::w3c::dom::NamedNodeMap::_class = java::fetch_class("org/w3c/dom/NamedNodeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeNamedItem", "(Ljava/lang/String;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::NamedNodeMap::item(int32_t arg0) const {
    if (!::org::w3c::dom::NamedNodeMap::_class) ::org::w3c::dom::NamedNodeMap::_class = java::fetch_class("org/w3c/dom/NamedNodeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "item", "(I)Lorg/w3c/dom/Node;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

int32_t org::w3c::dom::NamedNodeMap::getLength() const {
    if (!::org::w3c::dom::NamedNodeMap::_class) ::org::w3c::dom::NamedNodeMap::_class = java::fetch_class("org/w3c/dom/NamedNodeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::w3c::dom::Node org::w3c::dom::NamedNodeMap::getNamedItemNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::NamedNodeMap::_class) ::org::w3c::dom::NamedNodeMap::_class = java::fetch_class("org/w3c/dom/NamedNodeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::NamedNodeMap::setNamedItemNS(const ::org::w3c::dom::Node& arg0) const {
    if (!::org::w3c::dom::NamedNodeMap::_class) ::org::w3c::dom::NamedNodeMap::_class = java::fetch_class("org/w3c/dom/NamedNodeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNamedItemNS", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::NamedNodeMap::removeNamedItemNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::NamedNodeMap::_class) ::org::w3c::dom::NamedNodeMap::_class = java::fetch_class("org/w3c/dom/NamedNodeMap");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeNamedItemNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

int32_t org::w3c::dom::DOMLocator::getLineNumber() const {
    if (!::org::w3c::dom::DOMLocator::_class) ::org::w3c::dom::DOMLocator::_class = java::fetch_class("org/w3c/dom/DOMLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLineNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::w3c::dom::DOMLocator::getColumnNumber() const {
    if (!::org::w3c::dom::DOMLocator::_class) ::org::w3c::dom::DOMLocator::_class = java::fetch_class("org/w3c/dom/DOMLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getColumnNumber", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::w3c::dom::DOMLocator::getByteOffset() const {
    if (!::org::w3c::dom::DOMLocator::_class) ::org::w3c::dom::DOMLocator::_class = java::fetch_class("org/w3c/dom/DOMLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getByteOffset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

int32_t org::w3c::dom::DOMLocator::getUtf16Offset() const {
    if (!::org::w3c::dom::DOMLocator::_class) ::org::w3c::dom::DOMLocator::_class = java::fetch_class("org/w3c/dom/DOMLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUtf16Offset", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::org::w3c::dom::Node org::w3c::dom::DOMLocator::getRelatedNode() const {
    if (!::org::w3c::dom::DOMLocator::_class) ::org::w3c::dom::DOMLocator::_class = java::fetch_class("org/w3c/dom/DOMLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRelatedNode", "()Lorg/w3c/dom/Node;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::DOMLocator::getUri() const {
    if (!::org::w3c::dom::DOMLocator::_class) ::org::w3c::dom::DOMLocator::_class = java::fetch_class("org/w3c/dom/DOMLocator");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUri", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Node::getNodeName() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNodeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Node::getNodeValue() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNodeValue", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::Node::setNodeValue(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "setNodeValue", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int16_t org::w3c::dom::Node::getNodeType() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNodeType", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

::org::w3c::dom::Node org::w3c::dom::Node::getParentNode() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getParentNode", "()Lorg/w3c/dom/Node;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::NodeList org::w3c::dom::Node::getChildNodes() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getChildNodes", "()Lorg/w3c/dom/NodeList;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::NodeList _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::Node::getFirstChild() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFirstChild", "()Lorg/w3c/dom/Node;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::Node::getLastChild() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLastChild", "()Lorg/w3c/dom/Node;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::Node::getPreviousSibling() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPreviousSibling", "()Lorg/w3c/dom/Node;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::Node::getNextSibling() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNextSibling", "()Lorg/w3c/dom/Node;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::NamedNodeMap org::w3c::dom::Node::getAttributes() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getAttributes", "()Lorg/w3c/dom/NamedNodeMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::NamedNodeMap _ret(ret);
    return _ret;
}

::org::w3c::dom::Document org::w3c::dom::Node::getOwnerDocument() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getOwnerDocument", "()Lorg/w3c/dom/Document;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Document _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::Node::insertBefore(const ::org::w3c::dom::Node& arg0, const ::org::w3c::dom::Node& arg1) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "insertBefore", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::Node::replaceChild(const ::org::w3c::dom::Node& arg0, const ::org::w3c::dom::Node& arg1) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::Node::removeChild(const ::org::w3c::dom::Node& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "removeChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::Node::appendChild(const ::org::w3c::dom::Node& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

bool org::w3c::dom::Node::hasChildNodes() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasChildNodes", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::org::w3c::dom::Node org::w3c::dom::Node::cloneNode(bool arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "cloneNode", "(Z)Lorg/w3c/dom/Node;");
    bool _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

void org::w3c::dom::Node::normalize() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "normalize", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

bool org::w3c::dom::Node::isSupported(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSupported", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

::java::lang::String org::w3c::dom::Node::getNamespaceURI() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespaceURI", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Node::getPrefix() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPrefix", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::Node::setPrefix(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "setPrefix", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::Node::getLocalName() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocalName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::w3c::dom::Node::hasAttributes() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "hasAttributes", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

::java::lang::String org::w3c::dom::Node::getBaseURI() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getBaseURI", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

int16_t org::w3c::dom::Node::compareDocumentPosition(const ::org::w3c::dom::Node& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "compareDocumentPosition", "(Lorg/w3c/dom/Node;)S");
    jobject _arg0 = arg0.obj;
    return java::jni->CallShortMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::Node::getTextContent() const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTextContent", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::Node::setTextContent(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "setTextContent", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::w3c::dom::Node::isSameNode(const ::org::w3c::dom::Node& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "isSameNode", "(Lorg/w3c/dom/Node;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::Node::lookupPrefix(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "lookupPrefix", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::w3c::dom::Node::isDefaultNamespace(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDefaultNamespace", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::Node::lookupNamespaceURI(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "lookupNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::w3c::dom::Node::isEqualNode(const ::org::w3c::dom::Node& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "isEqualNode", "(Lorg/w3c/dom/Node;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::java::lang::Object org::w3c::dom::Node::getFeature(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getFeature", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::w3c::dom::Node::setUserData(const ::java::lang::String& arg0, const ::java::lang::Object& arg1, const ::org::w3c::dom::UserDataHandler& arg2) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "setUserData", "(Ljava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::w3c::dom::Node::getUserData(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Node::_class) ::org::w3c::dom::Node::_class = java::fetch_class("org/w3c/dom/Node");
    static jmethodID mid = java::jni->GetMethodID(_class, "getUserData", "(Ljava/lang/String;)Ljava/lang/Object;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::org::w3c::dom::DocumentType org::w3c::dom::Document::getDoctype() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDoctype", "()Lorg/w3c/dom/DocumentType;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::DocumentType _ret(ret);
    return _ret;
}

::org::w3c::dom::DOMImplementation org::w3c::dom::Document::getImplementation() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getImplementation", "()Lorg/w3c/dom/DOMImplementation;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::DOMImplementation _ret(ret);
    return _ret;
}

::org::w3c::dom::Element org::w3c::dom::Document::getDocumentElement() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDocumentElement", "()Lorg/w3c/dom/Element;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::Element _ret(ret);
    return _ret;
}

::org::w3c::dom::Element org::w3c::dom::Document::createElement(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "createElement", "(Ljava/lang/String;)Lorg/w3c/dom/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Element _ret(ret);
    return _ret;
}

::org::w3c::dom::DocumentFragment org::w3c::dom::Document::createDocumentFragment() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "createDocumentFragment", "()Lorg/w3c/dom/DocumentFragment;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::DocumentFragment _ret(ret);
    return _ret;
}

::org::w3c::dom::Text org::w3c::dom::Document::createTextNode(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "createTextNode", "(Ljava/lang/String;)Lorg/w3c/dom/Text;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Text _ret(ret);
    return _ret;
}

::org::w3c::dom::Comment org::w3c::dom::Document::createComment(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "createComment", "(Ljava/lang/String;)Lorg/w3c/dom/Comment;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Comment _ret(ret);
    return _ret;
}

::org::w3c::dom::CDATASection org::w3c::dom::Document::createCDATASection(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "createCDATASection", "(Ljava/lang/String;)Lorg/w3c/dom/CDATASection;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::CDATASection _ret(ret);
    return _ret;
}

::org::w3c::dom::ProcessingInstruction org::w3c::dom::Document::createProcessingInstruction(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "createProcessingInstruction", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ProcessingInstruction;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::ProcessingInstruction _ret(ret);
    return _ret;
}

::org::w3c::dom::Attr org::w3c::dom::Document::createAttribute(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAttribute", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Attr _ret(ret);
    return _ret;
}

::org::w3c::dom::EntityReference org::w3c::dom::Document::createEntityReference(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "createEntityReference", "(Ljava/lang/String;)Lorg/w3c/dom/EntityReference;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::EntityReference _ret(ret);
    return _ret;
}

::org::w3c::dom::NodeList org::w3c::dom::Document::getElementsByTagName(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElementsByTagName", "(Ljava/lang/String;)Lorg/w3c/dom/NodeList;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::NodeList _ret(ret);
    return _ret;
}

::org::w3c::dom::Node org::w3c::dom::Document::importNode(const ::org::w3c::dom::Node& arg0, bool arg1) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "importNode", "(Lorg/w3c/dom/Node;Z)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    bool _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::Element org::w3c::dom::Document::createElementNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "createElementNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::Element _ret(ret);
    return _ret;
}

::org::w3c::dom::Attr org::w3c::dom::Document::createAttributeNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "createAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::Attr _ret(ret);
    return _ret;
}

::org::w3c::dom::NodeList org::w3c::dom::Document::getElementsByTagNameNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElementsByTagNameNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/NodeList;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::org::w3c::dom::NodeList _ret(ret);
    return _ret;
}

::org::w3c::dom::Element org::w3c::dom::Document::getElementById(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getElementById", "(Ljava/lang/String;)Lorg/w3c/dom/Element;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Element _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Document::getInputEncoding() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInputEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Document::getXmlEncoding() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXmlEncoding", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::w3c::dom::Document::getXmlStandalone() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXmlStandalone", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::w3c::dom::Document::setXmlStandalone(bool arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXmlStandalone", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::Document::getXmlVersion() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getXmlVersion", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::Document::setXmlVersion(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "setXmlVersion", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

bool org::w3c::dom::Document::getStrictErrorChecking() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getStrictErrorChecking", "()Z");
    return java::jni->CallBooleanMethod(obj, mid);
}

void org::w3c::dom::Document::setStrictErrorChecking(bool arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "setStrictErrorChecking", "(Z)V");
    bool _arg0 = arg0;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::java::lang::String org::w3c::dom::Document::getDocumentURI() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDocumentURI", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::Document::setDocumentURI(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "setDocumentURI", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

::org::w3c::dom::Node org::w3c::dom::Document::adoptNode(const ::org::w3c::dom::Node& arg0) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "adoptNode", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::org::w3c::dom::DOMConfiguration org::w3c::dom::Document::getDomConfig() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::DOMConfiguration _ret(ret);
    return _ret;
}

void org::w3c::dom::Document::normalizeDocument() const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "normalizeDocument", "()V");
    java::jni->CallVoidMethod(obj, mid);
}

::org::w3c::dom::Node org::w3c::dom::Document::renameNode(const ::org::w3c::dom::Node& arg0, const ::java::lang::String& arg1, const ::java::lang::String& arg2) const {
    if (!::org::w3c::dom::Document::_class) ::org::w3c::dom::Document::_class = java::fetch_class("org/w3c/dom/Document");
    static jmethodID mid = java::jni->GetMethodID(_class, "renameNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Node;");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1, _arg2);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Notation::getPublicId() const {
    if (!::org::w3c::dom::Notation::_class) ::org::w3c::dom::Notation::_class = java::fetch_class("org/w3c/dom/Notation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::Notation::getSystemId() const {
    if (!::org::w3c::dom::Notation::_class) ::org::w3c::dom::Notation::_class = java::fetch_class("org/w3c/dom/Notation");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreorder"
::org::w3c::dom::DOMException::DOMException(int16_t arg0, const ::java::lang::String& arg1) : ::java::lang::Object((jobject)0), ::java::io::Serializable((jobject)0), ::java::lang::Exception((jobject)0), ::java::lang::RuntimeException((jobject)0), ::java::lang::Throwable((jobject)0) {
    if (!::org::w3c::dom::DOMException::_class) ::org::w3c::dom::DOMException::_class = java::fetch_class("org/w3c/dom/DOMException");
    static jmethodID mid = java::jni->GetMethodID(_class, "<init>", "(SLjava/lang/String;)V");
    int16_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    obj = java::jni->NewObject(_class, mid, _arg0, _arg1);
}
#pragma GCC diagnostic pop

::org::w3c::dom::DOMImplementation org::w3c::dom::DOMImplementationList::item(int32_t arg0) const {
    if (!::org::w3c::dom::DOMImplementationList::_class) ::org::w3c::dom::DOMImplementationList::_class = java::fetch_class("org/w3c/dom/DOMImplementationList");
    static jmethodID mid = java::jni->GetMethodID(_class, "item", "(I)Lorg/w3c/dom/DOMImplementation;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::DOMImplementation _ret(ret);
    return _ret;
}

int32_t org::w3c::dom::DOMImplementationList::getLength() const {
    if (!::org::w3c::dom::DOMImplementationList::_class) ::org::w3c::dom::DOMImplementationList::_class = java::fetch_class("org/w3c/dom/DOMImplementationList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::w3c::dom::DOMErrorHandler::handleError(const ::org::w3c::dom::DOMError& arg0) const {
    if (!::org::w3c::dom::DOMErrorHandler::_class) ::org::w3c::dom::DOMErrorHandler::_class = java::fetch_class("org/w3c/dom/DOMErrorHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handleError", "(Lorg/w3c/dom/DOMError;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

::org::w3c::dom::Node org::w3c::dom::NodeList::item(int32_t arg0) const {
    if (!::org::w3c::dom::NodeList::_class) ::org::w3c::dom::NodeList::_class = java::fetch_class("org/w3c/dom/NodeList");
    static jmethodID mid = java::jni->GetMethodID(_class, "item", "(I)Lorg/w3c/dom/Node;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::org::w3c::dom::Node _ret(ret);
    return _ret;
}

int32_t org::w3c::dom::NodeList::getLength() const {
    if (!::org::w3c::dom::NodeList::_class) ::org::w3c::dom::NodeList::_class = java::fetch_class("org/w3c/dom/NodeList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

void org::w3c::dom::UserDataHandler::handle(int16_t arg0, const ::java::lang::String& arg1, const ::java::lang::Object& arg2, const ::org::w3c::dom::Node& arg3, const ::org::w3c::dom::Node& arg4) const {
    if (!::org::w3c::dom::UserDataHandler::_class) ::org::w3c::dom::UserDataHandler::_class = java::fetch_class("org/w3c/dom/UserDataHandler");
    static jmethodID mid = java::jni->GetMethodID(_class, "handle", "(SLjava/lang/String;Ljava/lang/Object;Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V");
    int16_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    jobject _arg2 = arg2.obj;
    jobject _arg3 = arg3.obj;
    jobject _arg4 = arg4.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2, _arg3, _arg4);
}

int16_t org::w3c::dom::DOMError::getSeverity() const {
    if (!::org::w3c::dom::DOMError::_class) ::org::w3c::dom::DOMError::_class = java::fetch_class("org/w3c/dom/DOMError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSeverity", "()S");
    return java::jni->CallShortMethod(obj, mid);
}

::java::lang::String org::w3c::dom::DOMError::getMessage() const {
    if (!::org::w3c::dom::DOMError::_class) ::org::w3c::dom::DOMError::_class = java::fetch_class("org/w3c/dom/DOMError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getMessage", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::DOMError::getType() const {
    if (!::org::w3c::dom::DOMError::_class) ::org::w3c::dom::DOMError::_class = java::fetch_class("org/w3c/dom/DOMError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getType", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::Object org::w3c::dom::DOMError::getRelatedException() const {
    if (!::org::w3c::dom::DOMError::_class) ::org::w3c::dom::DOMError::_class = java::fetch_class("org/w3c/dom/DOMError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRelatedException", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::java::lang::Object org::w3c::dom::DOMError::getRelatedData() const {
    if (!::org::w3c::dom::DOMError::_class) ::org::w3c::dom::DOMError::_class = java::fetch_class("org/w3c/dom/DOMError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getRelatedData", "()Ljava/lang/Object;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::Object _ret(ret);
    return _ret;
}

::org::w3c::dom::DOMLocator org::w3c::dom::DOMError::getLocation() const {
    if (!::org::w3c::dom::DOMError::_class) ::org::w3c::dom::DOMError::_class = java::fetch_class("org/w3c/dom/DOMError");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLocation", "()Lorg/w3c/dom/DOMLocator;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::DOMLocator _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::CharacterData::getData() const {
    if (!::org::w3c::dom::CharacterData::_class) ::org::w3c::dom::CharacterData::_class = java::fetch_class("org/w3c/dom/CharacterData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getData", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::CharacterData::setData(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::CharacterData::_class) ::org::w3c::dom::CharacterData::_class = java::fetch_class("org/w3c/dom/CharacterData");
    static jmethodID mid = java::jni->GetMethodID(_class, "setData", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

int32_t org::w3c::dom::CharacterData::getLength() const {
    if (!::org::w3c::dom::CharacterData::_class) ::org::w3c::dom::CharacterData::_class = java::fetch_class("org/w3c/dom/CharacterData");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

::java::lang::String org::w3c::dom::CharacterData::substringData(int32_t arg0, int32_t arg1) const {
    if (!::org::w3c::dom::CharacterData::_class) ::org::w3c::dom::CharacterData::_class = java::fetch_class("org/w3c/dom/CharacterData");
    static jmethodID mid = java::jni->GetMethodID(_class, "substringData", "(II)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0, _arg1);
    ::java::lang::String _ret(ret);
    return _ret;
}

void org::w3c::dom::CharacterData::appendData(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::CharacterData::_class) ::org::w3c::dom::CharacterData::_class = java::fetch_class("org/w3c/dom/CharacterData");
    static jmethodID mid = java::jni->GetMethodID(_class, "appendData", "(Ljava/lang/String;)V");
    jobject _arg0 = arg0.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0);
}

void org::w3c::dom::CharacterData::insertData(int32_t arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::CharacterData::_class) ::org::w3c::dom::CharacterData::_class = java::fetch_class("org/w3c/dom/CharacterData");
    static jmethodID mid = java::jni->GetMethodID(_class, "insertData", "(ILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    jobject _arg1 = arg1.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::w3c::dom::CharacterData::deleteData(int32_t arg0, int32_t arg1) const {
    if (!::org::w3c::dom::CharacterData::_class) ::org::w3c::dom::CharacterData::_class = java::fetch_class("org/w3c/dom/CharacterData");
    static jmethodID mid = java::jni->GetMethodID(_class, "deleteData", "(II)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1);
}

void org::w3c::dom::CharacterData::replaceData(int32_t arg0, int32_t arg1, const ::java::lang::String& arg2) const {
    if (!::org::w3c::dom::CharacterData::_class) ::org::w3c::dom::CharacterData::_class = java::fetch_class("org/w3c/dom/CharacterData");
    static jmethodID mid = java::jni->GetMethodID(_class, "replaceData", "(IILjava/lang/String;)V");
    int32_t _arg0 = arg0;
    int32_t _arg1 = arg1;
    jobject _arg2 = arg2.obj;
    java::jni->CallVoidMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String org::w3c::dom::TypeInfo::getTypeName() const {
    if (!::org::w3c::dom::TypeInfo::_class) ::org::w3c::dom::TypeInfo::_class = java::fetch_class("org/w3c/dom/TypeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::TypeInfo::getTypeNamespace() const {
    if (!::org::w3c::dom::TypeInfo::_class) ::org::w3c::dom::TypeInfo::_class = java::fetch_class("org/w3c/dom/TypeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "getTypeNamespace", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

bool org::w3c::dom::TypeInfo::isDerivedFrom(const ::java::lang::String& arg0, const ::java::lang::String& arg1, int32_t arg2) const {
    if (!::org::w3c::dom::TypeInfo::_class) ::org::w3c::dom::TypeInfo::_class = java::fetch_class("org/w3c/dom/TypeInfo");
    static jmethodID mid = java::jni->GetMethodID(_class, "isDerivedFrom", "(Ljava/lang/String;Ljava/lang/String;I)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    int32_t _arg2 = arg2;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1, _arg2);
}

::java::lang::String org::w3c::dom::DocumentType::getName() const {
    if (!::org::w3c::dom::DocumentType::_class) ::org::w3c::dom::DocumentType::_class = java::fetch_class("org/w3c/dom/DocumentType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::org::w3c::dom::NamedNodeMap org::w3c::dom::DocumentType::getEntities() const {
    if (!::org::w3c::dom::DocumentType::_class) ::org::w3c::dom::DocumentType::_class = java::fetch_class("org/w3c/dom/DocumentType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getEntities", "()Lorg/w3c/dom/NamedNodeMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::NamedNodeMap _ret(ret);
    return _ret;
}

::org::w3c::dom::NamedNodeMap org::w3c::dom::DocumentType::getNotations() const {
    if (!::org::w3c::dom::DocumentType::_class) ::org::w3c::dom::DocumentType::_class = java::fetch_class("org/w3c/dom/DocumentType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNotations", "()Lorg/w3c/dom/NamedNodeMap;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::org::w3c::dom::NamedNodeMap _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::DocumentType::getPublicId() const {
    if (!::org::w3c::dom::DocumentType::_class) ::org::w3c::dom::DocumentType::_class = java::fetch_class("org/w3c/dom/DocumentType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getPublicId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::DocumentType::getSystemId() const {
    if (!::org::w3c::dom::DocumentType::_class) ::org::w3c::dom::DocumentType::_class = java::fetch_class("org/w3c/dom/DocumentType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getSystemId", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::DocumentType::getInternalSubset() const {
    if (!::org::w3c::dom::DocumentType::_class) ::org::w3c::dom::DocumentType::_class = java::fetch_class("org/w3c/dom/DocumentType");
    static jmethodID mid = java::jni->GetMethodID(_class, "getInternalSubset", "()Ljava/lang/String;");
    jobject ret = java::jni->CallObjectMethod(obj, mid);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::NameList::getName(int32_t arg0) const {
    if (!::org::w3c::dom::NameList::_class) ::org::w3c::dom::NameList::_class = java::fetch_class("org/w3c/dom/NameList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getName", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

::java::lang::String org::w3c::dom::NameList::getNamespaceURI(int32_t arg0) const {
    if (!::org::w3c::dom::NameList::_class) ::org::w3c::dom::NameList::_class = java::fetch_class("org/w3c/dom/NameList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getNamespaceURI", "(I)Ljava/lang/String;");
    int32_t _arg0 = arg0;
    jobject ret = java::jni->CallObjectMethod(obj, mid, _arg0);
    ::java::lang::String _ret(ret);
    return _ret;
}

int32_t org::w3c::dom::NameList::getLength() const {
    if (!::org::w3c::dom::NameList::_class) ::org::w3c::dom::NameList::_class = java::fetch_class("org/w3c/dom/NameList");
    static jmethodID mid = java::jni->GetMethodID(_class, "getLength", "()I");
    return java::jni->CallIntMethod(obj, mid);
}

bool org::w3c::dom::NameList::contains(const ::java::lang::String& arg0) const {
    if (!::org::w3c::dom::NameList::_class) ::org::w3c::dom::NameList::_class = java::fetch_class("org/w3c/dom/NameList");
    static jmethodID mid = java::jni->GetMethodID(_class, "contains", "(Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0);
}

bool org::w3c::dom::NameList::containsNS(const ::java::lang::String& arg0, const ::java::lang::String& arg1) const {
    if (!::org::w3c::dom::NameList::_class) ::org::w3c::dom::NameList::_class = java::fetch_class("org/w3c/dom/NameList");
    static jmethodID mid = java::jni->GetMethodID(_class, "containsNS", "(Ljava/lang/String;Ljava/lang/String;)Z");
    jobject _arg0 = arg0.obj;
    jobject _arg1 = arg1.obj;
    return java::jni->CallBooleanMethod(obj, mid, _arg0, _arg1);
}

