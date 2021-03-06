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

#ifndef JSSVGPreserveAspectRatio_h
#define JSSVGPreserveAspectRatio_h


#if ENABLE(SVG)

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class SVGPreserveAspectRatio;

class JSSVGPreserveAspectRatio : public DOMObject {
    typedef DOMObject Base;
public:
    JSSVGPreserveAspectRatio(PassRefPtr<JSC::Structure>, PassRefPtr<SVGPreserveAspectRatio>, SVGElement* context);
    virtual ~JSSVGPreserveAspectRatio();
    static JSC::JSObject* createPrototype(JSC::ExecState*);
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::PropertySlot&);
    virtual void put(JSC::ExecState*, const JSC::Identifier& propertyName, JSC::JSValuePtr, JSC::PutPropertySlot&);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;

    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }

    static JSC::JSValuePtr getConstructor(JSC::ExecState*);
    SVGPreserveAspectRatio* impl() const { return m_impl.get(); }
    SVGElement* context() const { return m_context.get(); }

private:
    RefPtr<SVGElement> m_context;
    RefPtr<SVGPreserveAspectRatio > m_impl;
};

JSC::JSValuePtr toJS(JSC::ExecState*, SVGPreserveAspectRatio*, SVGElement* context);
SVGPreserveAspectRatio* toSVGPreserveAspectRatio(JSC::JSValuePtr);

class JSSVGPreserveAspectRatioPrototype : public JSC::JSObject {
public:
    static JSC::JSObject* self(JSC::ExecState*);
    virtual const JSC::ClassInfo* classInfo() const { return &s_info; }
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    static PassRefPtr<JSC::Structure> createStructure(JSC::JSValuePtr prototype)
    {
        return JSC::Structure::create(prototype, JSC::TypeInfo(JSC::ObjectType));
    }
    JSSVGPreserveAspectRatioPrototype(PassRefPtr<JSC::Structure> structure) : JSC::JSObject(structure) { }
};

// Attributes

JSC::JSValuePtr jsSVGPreserveAspectRatioAlign(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGPreserveAspectRatioAlign(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsSVGPreserveAspectRatioMeetOrSlice(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
void setJSSVGPreserveAspectRatioMeetOrSlice(JSC::ExecState*, JSC::JSObject*, JSC::JSValuePtr);
JSC::JSValuePtr jsSVGPreserveAspectRatioConstructor(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
// Constants

JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_UNKNOWN(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_NONE(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMIN(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMIN(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMIN(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMID(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMID(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMID(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMINYMAX(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMIDYMAX(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_PRESERVEASPECTRATIO_XMAXYMAX(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_MEETORSLICE_UNKNOWN(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_MEETORSLICE_MEET(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);
JSC::JSValuePtr jsSVGPreserveAspectRatioSVG_MEETORSLICE_SLICE(JSC::ExecState*, const JSC::Identifier&, const JSC::PropertySlot&);

} // namespace WebCore

#endif // ENABLE(SVG)

#endif
