/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#ifndef JSCSSRuleList_H
#define JSCSSRuleList_H

#include "kjs_binding.h"

namespace WebCore {

class CSSRuleList;

class JSCSSRuleList : public KJS::DOMObject {
public:
    JSCSSRuleList(KJS::ExecState*, CSSRuleList*);
    virtual ~JSCSSRuleList();
    virtual bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    KJS::JSValue* getValueProperty(KJS::ExecState*, int token) const;
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;

    static KJS::JSValue* getConstructor(KJS::ExecState*);
    enum {
        // Attributes
        LengthAttrNum, 

        // The Constructor Attribute
        ConstructorAttrNum, 

        // Functions
        ItemFuncNum
    };
    CSSRuleList* impl() const { return m_impl.get(); }
private:
    RefPtr<CSSRuleList> m_impl;
private:
    static KJS::JSValue* indexGetter(KJS::ExecState*, KJS::JSObject*, const KJS::Identifier&, const KJS::PropertySlot&);
};

KJS::JSValue* toJS(KJS::ExecState*, CSSRuleList*);
CSSRuleList* toCSSRuleList(KJS::JSValue*);

class JSCSSRuleListPrototype : public KJS::JSObject {
public:
    static KJS::JSObject* self(KJS::ExecState* exec);
    virtual const KJS::ClassInfo* classInfo() const { return &info; }
    static const KJS::ClassInfo info;
    bool getOwnPropertySlot(KJS::ExecState*, const KJS::Identifier&, KJS::PropertySlot&);
    JSCSSRuleListPrototype(KJS::ExecState* exec)
        : KJS::JSObject(exec->lexicalInterpreter()->builtinObjectPrototype()) { }
};

class JSCSSRuleListPrototypeFunction : public KJS::InternalFunctionImp {
public:
    JSCSSRuleListPrototypeFunction(KJS::ExecState* exec, int i, int len, const KJS::Identifier& name)
        : KJS::InternalFunctionImp(static_cast<KJS::FunctionPrototype*>(exec->lexicalInterpreter()->builtinFunctionPrototype()), name)
        , id(i)
    {
        put(exec, exec->propertyNames().length, KJS::jsNumber(len), KJS::DontDelete|KJS::ReadOnly|KJS::DontEnum);
    }
    virtual KJS::JSValue* callAsFunction(KJS::ExecState*, KJS::JSObject*, const KJS::List&);

private:
    int id;
};

} // namespace WebCore

#endif