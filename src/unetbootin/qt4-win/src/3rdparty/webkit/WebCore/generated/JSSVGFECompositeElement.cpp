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

#include "config.h"


#if ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGFECompositeElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "JSCSSStyleDeclaration.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFECompositeElement.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSSVGFECompositeElementTableEntries[] =
{
    { "in2", JSSVGFECompositeElement::In2AttrNum, DontDelete|ReadOnly, 0, 0 },
    { "k2", JSSVGFECompositeElement::K2AttrNum, DontDelete|ReadOnly, 0, &JSSVGFECompositeElementTableEntries[15] },
    { "in1", JSSVGFECompositeElement::In1AttrNum, DontDelete|ReadOnly, 0, &JSSVGFECompositeElementTableEntries[17] },
    { 0, 0, 0, 0, 0 },
    { "k4", JSSVGFECompositeElement::K4AttrNum, DontDelete|ReadOnly, 0, 0 },
    { "k1", JSSVGFECompositeElement::K1AttrNum, DontDelete|ReadOnly, 0, 0 },
    { "result", JSSVGFECompositeElement::ResultAttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "className", JSSVGFECompositeElement::ClassNameAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "x", JSSVGFECompositeElement::XAttrNum, DontDelete|ReadOnly, 0, &JSSVGFECompositeElementTableEntries[16] },
    { "k3", JSSVGFECompositeElement::K3AttrNum, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "_operator", JSSVGFECompositeElement::_operatorAttrNum, DontDelete|ReadOnly, 0, &JSSVGFECompositeElementTableEntries[14] },
    { 0, 0, 0, 0, 0 },
    { "y", JSSVGFECompositeElement::YAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "width", JSSVGFECompositeElement::WidthAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "height", JSSVGFECompositeElement::HeightAttrNum, DontDelete|ReadOnly, 0, 0 },
    { "style", JSSVGFECompositeElement::StyleAttrNum, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFECompositeElementTable = 
{
    2, 18, JSSVGFECompositeElementTableEntries, 14
};

/* Hash table for prototype */

static const HashEntry JSSVGFECompositeElementPrototypeTableEntries[] =
{
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SVG_FECOMPOSITE_OPERATOR_OUT", WebCore::SVG_FECOMPOSITE_OPERATOR_OUT, DontDelete|ReadOnly, 0, 0 },
    { "SVG_FECOMPOSITE_OPERATOR_ATOP", WebCore::SVG_FECOMPOSITE_OPERATOR_ATOP, DontDelete|ReadOnly, 0, 0 },
    { "SVG_FECOMPOSITE_OPERATOR_ARITHMETIC", WebCore::SVG_FECOMPOSITE_OPERATOR_ARITHMETIC, DontDelete|ReadOnly, 0, 0 },
    { "SVG_FECOMPOSITE_OPERATOR_OVER", WebCore::SVG_FECOMPOSITE_OPERATOR_OVER, DontDelete|ReadOnly, 0, 0 },
    { "SVG_FECOMPOSITE_OPERATOR_UNKNOWN", WebCore::SVG_FECOMPOSITE_OPERATOR_UNKNOWN, DontDelete|ReadOnly, 0, &JSSVGFECompositeElementPrototypeTableEntries[7] },
    { "SVG_FECOMPOSITE_OPERATOR_IN", WebCore::SVG_FECOMPOSITE_OPERATOR_IN, DontDelete|ReadOnly, 0, &JSSVGFECompositeElementPrototypeTableEntries[8] },
    { "SVG_FECOMPOSITE_OPERATOR_XOR", WebCore::SVG_FECOMPOSITE_OPERATOR_XOR, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSSVGFECompositeElementPrototypeTable = 
{
    2, 9, JSSVGFECompositeElementPrototypeTableEntries, 7
};

const ClassInfo JSSVGFECompositeElementPrototype::info = { "SVGFECompositeElementPrototype", 0, &JSSVGFECompositeElementPrototypeTable, 0 };

JSObject* JSSVGFECompositeElementPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSSVGFECompositeElementPrototype>(exec, "[[JSSVGFECompositeElement.prototype]]");
}

bool JSSVGFECompositeElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFECompositeElementPrototype, JSObject>(exec, &JSSVGFECompositeElementPrototypeTable, this, propertyName, slot);
}

JSValue* JSSVGFECompositeElementPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSSVGFECompositeElement::info = { "SVGFECompositeElement", &JSSVGElement::info, &JSSVGFECompositeElementTable, 0 };

JSSVGFECompositeElement::JSSVGFECompositeElement(ExecState* exec, SVGFECompositeElement* impl)
    : JSSVGElement(exec, impl)
{
    setPrototype(JSSVGFECompositeElementPrototype::self(exec));
}

bool JSSVGFECompositeElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFECompositeElement, JSSVGElement>(exec, &JSSVGFECompositeElementTable, this, propertyName, slot);
}

JSValue* JSSVGFECompositeElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case In1AttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->in1Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case In2AttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->in2Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case _operatorAttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedEnumeration> obj = imp->_operatorAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedEnumeration>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedEnumeration>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedEnumeration>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case K1AttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->k1Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case K2AttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->k2Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case K3AttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->k3Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case K4AttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedNumber> obj = imp->k4Animated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedNumber>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedNumber>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedNumber>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case XAttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case YAttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case WidthAttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case HeightAttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedLength>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedLength>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedLength>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ResultAttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case ClassNameAttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        ASSERT(exec && exec->dynamicInterpreter());

        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        Frame* activeFrame = static_cast<ScriptInterpreter*>(exec->dynamicInterpreter())->frame();
        if (activeFrame) {
            SVGDocumentExtensions* extensions = (activeFrame->document() ? activeFrame->document()->accessSVGExtensions() : 0);
            if (extensions) {
                if (extensions->hasGenericContext<SVGAnimatedString>(obj.get()))
                    ASSERT(extensions->genericContext<SVGAnimatedString>(obj.get()) == imp);
                else
                    extensions->setGenericContext<SVGAnimatedString>(obj.get(), imp);
            }
        }

        return toJS(exec, obj.get());
    }
    case StyleAttrNum: {
        SVGFECompositeElement* imp = static_cast<SVGFECompositeElement*>(impl());

        return toJS(exec, WTF::getPtr(imp->style()));
    }
    }
    return 0;
}


}

#endif // ENABLE(SVG) && ENABLE(SVG_EXPERIMENTAL_FEATURES)
