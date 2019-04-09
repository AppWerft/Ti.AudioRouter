# Ti.AudioSelector

## Preliminary remarks

An Android device has a couple of output devices.

#### BUILTIN_SPEAKER
 
This is the main, default output for music playing etc, on bottom on device.

#### WIRED_HEADSET 

It is the 3.5" plug, mostly on top for connecting headphones, headsets and external loudspeaker.

#### BLUETOOTH_A2DP

This is the mostly used connector for Bluetooth Audio devices.

#### BUILTIN_EARPIECE
This output used during a phone call. This is the little loudspeaker in top of device


#### BUILTIN_TELEPHONY
This output used during a phone call. This is the telophone line. The audio will listen by the other member of talk.


There are more devices like  USB, HDMI, etc, but the first 3 devices arw the most used.

The defaul device is the builtin speaker. If you plug a cable in the 3.5" plug then the internal speaker is switched off. There is no way to force select the internal speaker. 

## Standard way of routing

If you call the official API `audiomanager.setSpeakerphoneOn(true)`  then the command 
`audioManager.isSpeakerphoneOn()` returns with true, but in real the loudspeaker is muted and the sound comes from the connected  device. 

## Alternatives

### K.Shoji

[K.Shoji](https://github.com/kshoji) from Osaka found an [inofficial way](https://github.com/kshoji/Android-Audio-Router): 

_When the headphone connected, audio output will switch to the headphone, and speaker will be turned off. This is the default behaviour. With using setRouteMode(AudioRouteMode)method … , this class forces the audio output to the specified audio route._

_This class uses the hidden API, so the function will be broken in the future Android updates._

I have tested, it doesn't work with API28 on Nokia8.

### Technical background

The library calls the hidden and very old class [android.media.AudioSystem](https://android.googlesource.com/platform/frameworks/base/+/b267554/media/java/android/media/AudioSystem.java) and in this class the methods

* setDeviceConnectionState()
* setForceUse()
* getForceUse()

### Googles Oboe

[This C++ library](https://github.com/google/oboe/tree/master/samples/hello-oboe) runs on NOKIA8, but the library used an own (C++) audio stack. By using of this lib all audio functionality have to use this library. You can the [apk here](https://github.com/AppWerft/Ti.AudioRouter/blob/master/oboe.apk?raw=true) 

<img src="https://api.qrserver.com/v1/create-qr-code/?data=https%3A%2F%2Fbit.ly%2F2uUe7wD&size=220x220&margin=0" width="80" />

