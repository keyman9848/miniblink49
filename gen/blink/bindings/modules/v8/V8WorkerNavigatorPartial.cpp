// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8WorkerNavigatorPartial.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8WorkerNavigator.h"
#include "bindings/modules/v8/V8DeprecatedStorageQuota.h"
#include "bindings/modules/v8/V8Geofencing.h"
#include "bindings/modules/v8/V8NetworkInformation.h"
#include "bindings/modules/v8/V8Permissions.h"
#include "bindings/modules/v8/V8ServicePortCollection.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "modules/geofencing/WorkerNavigatorGeofencing.h"
#include "modules/navigatorconnect/WorkerNavigatorServices.h"
#include "modules/netinfo/WorkerNavigatorNetworkInformation.h"
#include "modules/permissions/WorkerNavigatorPermissions.h"
#include "modules/quota/WorkerNavigatorStorageQuota.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

namespace WorkerNavigatorPartialV8Internal {

static void geofencingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
#ifdef MINIBLINK_NOT_IMPLEMENTED
    v8::Local<v8::Object> holder = info.Holder();
    WorkerNavigator* impl = V8WorkerNavigator::toImpl(holder);
    RawPtr<Geofencing> cppValue(WorkerNavigatorGeofencing::geofencing(*impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "geofencing"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
#endif
    DebugBreak();
}

static void geofencingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    WorkerNavigatorPartialV8Internal::geofencingAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void servicesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerNavigator* impl = V8WorkerNavigator::toImpl(holder);
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RawPtr<ServicePortCollection> cppValue(WorkerNavigatorServices::services(executionContext, *impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "services"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void servicesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    WorkerNavigatorPartialV8Internal::servicesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void connectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerNavigator* impl = V8WorkerNavigator::toImpl(holder);
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RawPtr<NetworkInformation> cppValue(WorkerNavigatorNetworkInformation::connection(executionContext, *impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "connection"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void connectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::NetInfo);
    WorkerNavigatorPartialV8Internal::connectionAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void permissionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerNavigator* impl = V8WorkerNavigator::toImpl(holder);
    RawPtr<Permissions> cppValue(WorkerNavigatorPermissions::permissions(*impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "permissions"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void permissionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    WorkerNavigatorPartialV8Internal::permissionsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void webkitTemporaryStorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerNavigator* impl = V8WorkerNavigator::toImpl(holder);
    RawPtr<DeprecatedStorageQuota> cppValue(WorkerNavigatorStorageQuota::webkitTemporaryStorage(*impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "webkitTemporaryStorage"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void webkitTemporaryStorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::PrefixedStorageQuota);
    WorkerNavigatorPartialV8Internal::webkitTemporaryStorageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void webkitPersistentStorageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerNavigator* impl = V8WorkerNavigator::toImpl(holder);
    RawPtr<DeprecatedStorageQuota> cppValue(WorkerNavigatorStorageQuota::webkitPersistentStorage(*impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "webkitPersistentStorage"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void webkitPersistentStorageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), callingExecutionContext(info.GetIsolate()), UseCounter::PrefixedStorageQuota);
    WorkerNavigatorPartialV8Internal::webkitPersistentStorageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace WorkerNavigatorPartialV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8WorkerNavigatorAccessors[] = {
    {"webkitTemporaryStorage", WorkerNavigatorPartialV8Internal::webkitTemporaryStorageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"webkitPersistentStorage", WorkerNavigatorPartialV8Internal::webkitPersistentStorageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

void V8WorkerNavigatorPartial::installV8WorkerNavigatorTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    V8WorkerNavigator::installV8WorkerNavigatorTemplate(functionTemplate, isolate);

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::geofencingEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "WorkerNavigator", v8::Local<v8::FunctionTemplate>(), V8WorkerNavigator::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "WorkerNavigator", v8::Local<v8::FunctionTemplate>(), V8WorkerNavigator::internalFieldCount,
            0, 0,
            V8WorkerNavigatorAccessors, WTF_ARRAY_LENGTH(V8WorkerNavigatorAccessors),
            0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
#ifdef MINIBLINK_NOT_IMPLEMENTED
    if (RuntimeEnabledFeatures::geofencingEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"geofencing", WorkerNavigatorPartialV8Internal::geofencingAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::navigatorConnectEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"services", WorkerNavigatorPartialV8Internal::servicesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::networkInformationEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"connection", WorkerNavigatorPartialV8Internal::connectionAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
    if (RuntimeEnabledFeatures::permissionsEnabled()) {
        static const V8DOMConfiguration::AccessorConfiguration accessorConfiguration =\
        {"permissions", WorkerNavigatorPartialV8Internal::permissionsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, instanceTemplate, prototypeTemplate, functionTemplate, defaultSignature, accessorConfiguration);
    }
#endif
}

void V8WorkerNavigatorPartial::preparePrototypeObject(v8::Isolate* isolate, v8::Local<v8::Object> prototypeObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    V8WorkerNavigator::preparePrototypeObject(isolate, prototypeObject, interfaceTemplate);
}

void V8WorkerNavigatorPartial::initialize()
{
    // Should be invoked from initModules.
    V8WorkerNavigator::updateWrapperTypeInfo(
        &V8WorkerNavigatorPartial::installV8WorkerNavigatorTemplate,
        &V8WorkerNavigatorPartial::preparePrototypeObject);
}

} // namespace blink
