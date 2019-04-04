/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2011-2018 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

/** This is generated, do not edit by hand. **/

#include <jni.h>

#include "Proxy.h"

namespace de {
namespace appwerft {
namespace audioselector {

class AudioselectorModule : public titanium::Proxy
{
public:
	explicit AudioselectorModule();

	static void bindProxy(v8::Local<v8::Object>, v8::Local<v8::Context>);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Isolate*);
	static v8::Local<v8::FunctionTemplate> getProxyTemplate(v8::Local<v8::Context>);
	static void dispose(v8::Isolate*);

	static jclass javaClass;

private:
	static v8::Persistent<v8::FunctionTemplate> proxyTemplate;

	// Methods -----------------------------------------------------------
	static void setRingerMode(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getDevices(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getActiveAudioDevice(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getActivePlaybackConfigurations(const v8::FunctionCallbackInfo<v8::Value>&);
	static void setActiveAudioDevice(const v8::FunctionCallbackInfo<v8::Value>&);
	static void getBoundedDevices(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isBluetoothA2dpOn(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isSpeakerphoneOn(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isBluetoothScoOn(const v8::FunctionCallbackInfo<v8::Value>&);
	static void isWiredHeadsetOn(const v8::FunctionCallbackInfo<v8::Value>&);

	// Dynamic property accessors ----------------------------------------

};

} // audioselector
} // appwerft
} // de
