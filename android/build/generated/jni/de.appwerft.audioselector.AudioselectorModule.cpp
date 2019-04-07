/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2018 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This code is generated, do not edit by hand. **/

#include "de.appwerft.audioselector.AudioselectorModule.h"

#include "AndroidUtil.h"
#include "JNIUtil.h"
#include "JSException.h"
#include "TypeConverter.h"
#include "V8Util.h"




#include "org.appcelerator.kroll.KrollModule.h"

#define TAG "AudioselectorModule"

using namespace v8;

namespace de {
namespace appwerft {
namespace audioselector {


Persistent<FunctionTemplate> AudioselectorModule::proxyTemplate;
jclass AudioselectorModule::javaClass = NULL;

AudioselectorModule::AudioselectorModule() : titanium::Proxy()
{
}

void AudioselectorModule::bindProxy(Local<Object> exports, Local<Context> context)
{
	Isolate* isolate = context->GetIsolate();

	Local<FunctionTemplate> pt = getProxyTemplate(isolate);

	v8::TryCatch tryCatch(isolate);
	Local<Function> constructor;
	MaybeLocal<Function> maybeConstructor = pt->GetFunction(context);
	if (!maybeConstructor.ToLocal(&constructor)) {
		titanium::V8Util::fatalException(isolate, tryCatch);
		return;
	}

	Local<String> nameSymbol = NEW_SYMBOL(isolate, "Audioselector"); // use symbol over string for efficiency
	MaybeLocal<Object> maybeInstance = constructor->NewInstance(context);
	Local<Object> moduleInstance;
	if (!maybeInstance.ToLocal(&moduleInstance)) {
		titanium::V8Util::fatalException(isolate, tryCatch);
		return;
	}
	exports->Set(context, nameSymbol, moduleInstance);
}

void AudioselectorModule::dispose(Isolate* isolate)
{
	LOGD(TAG, "dispose()");
	if (!proxyTemplate.IsEmpty()) {
		proxyTemplate.Reset();
	}

	titanium::KrollModule::dispose(isolate);
}

Local<FunctionTemplate> AudioselectorModule::getProxyTemplate(v8::Isolate* isolate)
{
	Local<Context> context = isolate->GetCurrentContext();
	if (!proxyTemplate.IsEmpty()) {
		return proxyTemplate.Get(isolate);
	}

	LOGD(TAG, "AudioselectorModule::getProxyTemplate()");

	javaClass = titanium::JNIUtil::findClass("de/appwerft/audioselector/AudioselectorModule");
	EscapableHandleScope scope(isolate);

	// use symbol over string for efficiency
	Local<String> nameSymbol = NEW_SYMBOL(isolate, "Audioselector");

	Local<FunctionTemplate> t = titanium::Proxy::inheritProxyTemplate(
		isolate,
		titanium::KrollModule::getProxyTemplate(isolate),
		javaClass,
		nameSymbol);

	proxyTemplate.Reset(isolate, t);
	t->Set(titanium::Proxy::inheritSymbol.Get(isolate), FunctionTemplate::New(isolate, titanium::Proxy::inherit<AudioselectorModule>));

	// Method bindings --------------------------------------------------------
	titanium::SetProtoMethod(isolate, t, "getDevices", AudioselectorModule::getDevices);
	titanium::SetProtoMethod(isolate, t, "getActiveAudioDevice", AudioselectorModule::getActiveAudioDevice);
	titanium::SetProtoMethod(isolate, t, "setTypeOn", AudioselectorModule::setTypeOn);
	titanium::SetProtoMethod(isolate, t, "setActiveAudioDevice", AudioselectorModule::setActiveAudioDevice);
	titanium::SetProtoMethod(isolate, t, "getAudioRoute", AudioselectorModule::getAudioRoute);
	titanium::SetProtoMethod(isolate, t, "isSpeakerphoneOn", AudioselectorModule::isSpeakerphoneOn);
	titanium::SetProtoMethod(isolate, t, "isWiredHeadsetOn", AudioselectorModule::isWiredHeadsetOn);
	titanium::SetProtoMethod(isolate, t, "setRingerMode", AudioselectorModule::setRingerMode);
	titanium::SetProtoMethod(isolate, t, "enable", AudioselectorModule::enable);
	titanium::SetProtoMethod(isolate, t, "getRingerMode", AudioselectorModule::getRingerMode);
	titanium::SetProtoMethod(isolate, t, "isMusicActive", AudioselectorModule::isMusicActive);
	titanium::SetProtoMethod(isolate, t, "isBluetoothA2dpOn", AudioselectorModule::isBluetoothA2dpOn);
	titanium::SetProtoMethod(isolate, t, "isBluetoothScoOn", AudioselectorModule::isBluetoothScoOn);
	titanium::SetProtoMethod(isolate, t, "isTypeOn", AudioselectorModule::isTypeOn);

	Local<ObjectTemplate> prototypeTemplate = t->PrototypeTemplate();
	Local<ObjectTemplate> instanceTemplate = t->InstanceTemplate();

	// Delegate indexed property get and set to the Java proxy.
	instanceTemplate->SetIndexedPropertyHandler(titanium::Proxy::getIndexedProperty,
		titanium::Proxy::setIndexedProperty);

	// Constants --------------------------------------------------------------
	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		LOGE(TAG, "Failed to get environment in AudioselectorModule");
		//return;
	}


			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "USAGE_NOTIFICATION_COMMUNICATION_REQUEST", 7);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "TYPE_BUILTIN_SPEAKER", 2);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "TYPE_WIRED_HEADPHONES", 4);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "USAGE_GAME", 14);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "TYPE_AUX_LINE", 19);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CONTENT_TYPE_MOVIE", 3);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "TYPE_BLUETOOTH_A2DP", 8);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CONTENT_TYPE_UNKNOWN", 0);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "USAGE_NOTIFICATION_COMMUNICATION_DELAYED", 9);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CHANNEL_IN_MONO", 16);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "USAGE_NOTIFICATION", 5);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CONTENT_TYPE_MUSIC", 2);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CHANNEL_CONFIGURATION_DEFAULT", 1);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CHANNEL_IN_STEREO", 12);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "USAGE_MEDIA", 1);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "RINGER_MODE_NORMAL", 2);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "USAGE_NOTIFICATION_INSTANT", 8);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "RINGER_MODE_SILENT", 0);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CHANNEL_CHANNEL_CONFIGURATION_INVALID", 0);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "USAGE_ASSISTANCE", 16);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "TYPE_WIRED_HEADSET", 3);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "TYPE_BLUETOOTH_SCO", 7);

			DEFINE_STRING_CONSTANT(isolate, prototypeTemplate, "RINGER_MODE_CHANGED_ACTION", "android.media.RINGER_MODE_CHANGED");

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "TYPE_TELEPHONY", 18);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "TYPE_BUILTIN_EARPIECE", 1);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "USAGE_ASSISTANCE_ACCESSIBILITY", 11);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "TYPE_HDMI", 9);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "USAGE_ASSISTANCE_NAVIGATION_GUIDANCE", 12);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "USAGE_ASSISTANCE_SONIFICATION", 13);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CONTENT_TYPE_SPEECH", 1);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "RINGER_MODE_VIBRATE", 1);

			DEFINE_INT_CONSTANT(isolate, prototypeTemplate, "CONTENT_TYPE_SONIFICATION", 4);


	// Dynamic properties -----------------------------------------------------

	// Accessors --------------------------------------------------------------

	return scope.Escape(t);
}

Local<FunctionTemplate> AudioselectorModule::getProxyTemplate(v8::Local<v8::Context> context)
{
	return getProxyTemplate(context->GetIsolate());
}

// Methods --------------------------------------------------------------------
void AudioselectorModule::getDevices(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getDevices()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "getDevices", "()[Ljava/lang/Object;");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getDevices' with signature '()[Ljava/lang/Object;'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	jobjectArray jResult = (jobjectArray)env->CallObjectMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}

	if (jResult == NULL) {
		args.GetReturnValue().Set(Null(isolate));
		return;
	}

	Local<Array> v8Result = titanium::TypeConverter::javaArrayToJsArray(isolate, env, jResult);

	env->DeleteLocalRef(jResult);


	args.GetReturnValue().Set(v8Result);

}
void AudioselectorModule::getActiveAudioDevice(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getActiveAudioDevice()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "getActiveAudioDevice", "()I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getActiveAudioDevice' with signature '()I'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	jint jResult = (jint)env->CallIntMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Number> v8Result = titanium::TypeConverter::javaIntToJsNumber(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void AudioselectorModule::setTypeOn(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setTypeOn()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "setTypeOn", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setTypeOn' with signature '(I)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setTypeOn: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	
		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(context).FromMaybe(String::Empty(isolate))->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
		if (!args[0]->IsNull()) {
		MaybeLocal<Number> arg_0 = args[0]->ToNumber(context);
		if (arg_0.IsEmpty()) {
			const char *error = "Invalid argument at index 0, expected type Number and failed to coerce.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		} else {
			jArguments[0].i =
				titanium::TypeConverter::jsNumberToJavaInt(
					env, arg_0.ToLocalChecked());
		}
	} else {
		jArguments[0].i = NULL;
	}


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void AudioselectorModule::setActiveAudioDevice(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setActiveAudioDevice()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "setActiveAudioDevice", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setActiveAudioDevice' with signature '(I)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setActiveAudioDevice: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	
		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(context).FromMaybe(String::Empty(isolate))->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
		if (!args[0]->IsNull()) {
		MaybeLocal<Number> arg_0 = args[0]->ToNumber(context);
		if (arg_0.IsEmpty()) {
			const char *error = "Invalid argument at index 0, expected type Number and failed to coerce.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		} else {
			jArguments[0].i =
				titanium::TypeConverter::jsNumberToJavaInt(
					env, arg_0.ToLocalChecked());
		}
	} else {
		jArguments[0].i = NULL;
	}


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void AudioselectorModule::getAudioRoute(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getAudioRoute()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "getAudioRoute", "()I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getAudioRoute' with signature '()I'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	jint jResult = (jint)env->CallIntMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Number> v8Result = titanium::TypeConverter::javaIntToJsNumber(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void AudioselectorModule::isSpeakerphoneOn(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "isSpeakerphoneOn()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "isSpeakerphoneOn", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isSpeakerphoneOn' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void AudioselectorModule::isWiredHeadsetOn(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "isWiredHeadsetOn()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "isWiredHeadsetOn", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isWiredHeadsetOn' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void AudioselectorModule::setRingerMode(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "setRingerMode()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "setRingerMode", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'setRingerMode' with signature '(I)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "setRingerMode: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	
		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(context).FromMaybe(String::Empty(isolate))->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
		if (!args[0]->IsNull()) {
		MaybeLocal<Number> arg_0 = args[0]->ToNumber(context);
		if (arg_0.IsEmpty()) {
			const char *error = "Invalid argument at index 0, expected type Number and failed to coerce.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		} else {
			jArguments[0].i =
				titanium::TypeConverter::jsNumberToJavaInt(
					env, arg_0.ToLocalChecked());
		}
	} else {
		jArguments[0].i = NULL;
	}


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void AudioselectorModule::enable(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "enable()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "enable", "(I)V");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'enable' with signature '(I)V'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "enable: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	
		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(context).FromMaybe(String::Empty(isolate))->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
		if (!args[0]->IsNull()) {
		MaybeLocal<Number> arg_0 = args[0]->ToNumber(context);
		if (arg_0.IsEmpty()) {
			const char *error = "Invalid argument at index 0, expected type Number and failed to coerce.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		} else {
			jArguments[0].i =
				titanium::TypeConverter::jsNumberToJavaInt(
					env, arg_0.ToLocalChecked());
		}
	} else {
		jArguments[0].i = NULL;
	}


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	env->CallVoidMethodA(javaProxy, methodID, jArguments);

	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
	}




	args.GetReturnValue().Set(v8::Undefined(isolate));

}
void AudioselectorModule::getRingerMode(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "getRingerMode()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "getRingerMode", "()I");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'getRingerMode' with signature '()I'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	jint jResult = (jint)env->CallIntMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Number> v8Result = titanium::TypeConverter::javaIntToJsNumber(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void AudioselectorModule::isMusicActive(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "isMusicActive()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "isMusicActive", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isMusicActive' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void AudioselectorModule::isBluetoothA2dpOn(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "isBluetoothA2dpOn()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "isBluetoothA2dpOn", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isBluetoothA2dpOn' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void AudioselectorModule::isBluetoothScoOn(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "isBluetoothScoOn()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "isBluetoothScoOn", "()Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isBluetoothScoOn' with signature '()Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	jvalue* jArguments = 0;


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}
void AudioselectorModule::isTypeOn(const FunctionCallbackInfo<Value>& args)
{
	LOGD(TAG, "isTypeOn()");
	Isolate* isolate = args.GetIsolate();
	Local<Context> context = isolate->GetCurrentContext();
	HandleScope scope(isolate);

	JNIEnv *env = titanium::JNIScope::getEnv();
	if (!env) {
		titanium::JSException::GetJNIEnvironmentError(isolate);
		return;
	}
	static jmethodID methodID = NULL;
	if (!methodID) {
		methodID = env->GetMethodID(AudioselectorModule::javaClass, "isTypeOn", "(I)Z");
		if (!methodID) {
			const char *error = "Couldn't find proxy method 'isTypeOn' with signature '(I)Z'";
			LOGE(TAG, error);
				titanium::JSException::Error(isolate, error);
				return;
		}
	}

	Local<Object> holder = args.Holder();
	if (!JavaObject::isJavaObject(holder)) {
		holder = holder->FindInstanceInPrototypeChain(getProxyTemplate(isolate));
	}
	if (holder.IsEmpty() || holder->IsNull()) {
		LOGE(TAG, "Couldn't obtain argument holder");
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	titanium::Proxy* proxy = NativeObject::Unwrap<titanium::Proxy>(holder);
	if (!proxy) {
		args.GetReturnValue().Set(Undefined(isolate));
		return;
	}

	if (args.Length() < 1) {
		char errorStringBuffer[100];
		sprintf(errorStringBuffer, "isTypeOn: Invalid number of arguments. Expected 1 but got %d", args.Length());
		titanium::JSException::Error(isolate, errorStringBuffer);
		return;
	}

	jvalue jArguments[1];




	
		if ((titanium::V8Util::isNaN(isolate, args[0]) && !args[0]->IsUndefined()) || args[0]->ToString(context).FromMaybe(String::Empty(isolate))->Length() == 0) {
			const char *error = "Invalid value, expected type Number.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		}
		if (!args[0]->IsNull()) {
		MaybeLocal<Number> arg_0 = args[0]->ToNumber(context);
		if (arg_0.IsEmpty()) {
			const char *error = "Invalid argument at index 0, expected type Number and failed to coerce.";
			LOGE(TAG, error);
			titanium::JSException::Error(isolate, error);
			return;
		} else {
			jArguments[0].i =
				titanium::TypeConverter::jsNumberToJavaInt(
					env, arg_0.ToLocalChecked());
		}
	} else {
		jArguments[0].i = NULL;
	}


	jobject javaProxy = proxy->getJavaObject();
	if (javaProxy == NULL) {
		args.GetReturnValue().Set(v8::Undefined(isolate));
		return;
	}
	jboolean jResult = (jboolean)env->CallBooleanMethodA(javaProxy, methodID, jArguments);



	proxy->unreferenceJavaObject(javaProxy);



	if (env->ExceptionCheck()) {
		Local<Value> jsException = titanium::JSException::fromJavaException(isolate);
		env->ExceptionClear();
		return;
	}


	Local<Boolean> v8Result = titanium::TypeConverter::javaBooleanToJsBoolean(isolate, env, jResult);



	args.GetReturnValue().Set(v8Result);

}

// Dynamic property accessors -------------------------------------------------


} // audioselector
} // appwerft
} // de
