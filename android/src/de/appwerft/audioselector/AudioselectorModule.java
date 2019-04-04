/**
 * This file was auto-generated by the Titanium Module SDK helper for Android
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2018 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 */
package de.appwerft.audioselector;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Set;

import org.appcelerator.kroll.KrollModule;
import org.appcelerator.kroll.KrollDict;
import org.appcelerator.kroll.KrollFunction;
import org.appcelerator.kroll.annotations.Kroll;

import org.appcelerator.titanium.TiApplication;

import android.bluetooth.BluetoothA2dp;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothHeadset;
import android.bluetooth.BluetoothManager;
import android.bluetooth.BluetoothProfile;
import android.bluetooth.BluetoothDevice;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.media.AudioAttributes;
import android.media.AudioDeviceInfo;
import android.media.AudioFormat;
import android.media.AudioManager;
import android.media.AudioPlaybackConfiguration;
import android.media.MediaRouter;
import android.media.MediaRouter.RouteInfo;
import android.os.Build;

import org.appcelerator.kroll.common.Log;
import org.appcelerator.kroll.common.TiConfig;

@Kroll.module(name = "Audioselector", id = "de.appwerft.audioselector")
public class AudioselectorModule extends KrollModule {

	// Standard Debugging variables
	private static final String LCAT = "AudioselectorModule";
	private static final boolean DBG = TiConfig.LOGD;

	@Kroll.constant
	public static final int TYPE_AUX_LINE = AudioDeviceInfo.TYPE_AUX_LINE;
	@Kroll.constant
	public static final int TYPE_BLUETOOTH_A2DP = AudioDeviceInfo.TYPE_BLUETOOTH_A2DP;
	@Kroll.constant
	public static final int TYPE_BLUETOOTH_SCO = AudioDeviceInfo.TYPE_BLUETOOTH_SCO;
	@Kroll.constant
	public static final int TYPE_BUILTIN_EARPIECE = AudioDeviceInfo.TYPE_BUILTIN_EARPIECE;
	@Kroll.constant
	public static final int TYPE_BUILTIN_SPEAKER = AudioDeviceInfo.TYPE_BUILTIN_SPEAKER;
	@Kroll.constant
	public static final int TYPE_WIRED_HEADSET = AudioDeviceInfo.TYPE_WIRED_HEADSET;
	@Kroll.constant
	public static final int TYPE_HDMI = AudioDeviceInfo.TYPE_HDMI;
	@Kroll.constant
	public static final int TYPE_WIRED_HEADPHONES = AudioDeviceInfo.TYPE_WIRED_HEADPHONES;
	@Kroll.constant
	public static final int CHANNEL_IN_STEREO = AudioFormat.CHANNEL_IN_STEREO;
	@Kroll.constant
	public static final int CHANNEL_IN_MONO = AudioFormat.CHANNEL_IN_MONO;
	@Kroll.constant
	public static final int CHANNEL_CONFIGURATION_DEFAULT = AudioFormat.CHANNEL_CONFIGURATION_DEFAULT;
	@Kroll.constant
	public static final int CHANNEL_CHANNEL_CONFIGURATION_INVALID = AudioFormat.CHANNEL_CONFIGURATION_INVALID;
	@Kroll.constant
	public static final int CONTENT_TYPE_MOVIE = AudioAttributes.CONTENT_TYPE_MOVIE;
	@Kroll.constant
	public static final int CONTENT_TYPE_MUSIC = AudioAttributes.CONTENT_TYPE_MUSIC;
	@Kroll.constant
	public static final int CONTENT_TYPE_SONIFICATION = AudioAttributes.CONTENT_TYPE_SONIFICATION;
	@Kroll.constant
	public static final int CONTENT_TYPE_SPEECH = AudioAttributes.CONTENT_TYPE_SPEECH;
	@Kroll.constant
	public static final int CONTENT_TYPE_UNKNOWN = AudioAttributes.CONTENT_TYPE_UNKNOWN;
	@Kroll.constant
	public static final int USAGE_ASSISTANCE_ACCESSIBILITY = AudioAttributes.USAGE_ASSISTANCE_ACCESSIBILITY;
	@Kroll.constant
	public static final int USAGE_ASSISTANCE_NAVIGATION_GUIDANCE = AudioAttributes.USAGE_ASSISTANCE_NAVIGATION_GUIDANCE;
	@Kroll.constant
	public static final int USAGE_ASSISTANCE_SONIFICATION = AudioAttributes.USAGE_ASSISTANCE_SONIFICATION;
	@Kroll.constant
	public static final int USAGE_ASSISTANCE = AudioAttributes.USAGE_ASSISTANT;
	@Kroll.constant
	public static final int USAGE_GAME = AudioAttributes.USAGE_GAME;
	@Kroll.constant
	public static final int USAGE_MEDIA = AudioAttributes.USAGE_MEDIA;
	@Kroll.constant
	public static final int USAGE_NOTIFICATION = AudioAttributes.USAGE_NOTIFICATION;
	@Kroll.constant
	public static final int USAGE_NOTIFICATION_COMMUNICATION_DELAYED = AudioAttributes.USAGE_NOTIFICATION_COMMUNICATION_DELAYED;
	@Kroll.constant
	public static final int USAGE_NOTIFICATION_INSTANT = AudioAttributes.USAGE_NOTIFICATION_COMMUNICATION_INSTANT;
	@Kroll.constant
	public static final int USAGE_NOTIFICATION_COMMUNICATION_REQUEST = AudioAttributes.USAGE_NOTIFICATION_COMMUNICATION_REQUEST;

	@Kroll.constant
	public static final String RINGER_MODE_CHANGED_ACTION = AudioManager.RINGER_MODE_CHANGED_ACTION;
	@Kroll.constant
	public static final int RINGER_MODE_NORMAL = AudioManager.RINGER_MODE_NORMAL;
	@Kroll.constant
	public static final int RINGER_MODE_SILENT = AudioManager.RINGER_MODE_SILENT;
	@Kroll.constant
	public static final int RINGER_MODE_VIBRATE = AudioManager.RINGER_MODE_VIBRATE;

	public static Context ctx;
	private static AudioManager audioManager;

	// Get the default adapter
	BluetoothAdapter bluetoothAdapter = BluetoothAdapter.getDefaultAdapter();

	public BluetoothHeadset bluetoothHeadset;
	public BluetoothA2dp bluetoothA2dp;

	public AudioselectorModule() {
		super();
	}

	@Kroll.onAppCreate
	public static void onAppCreate(TiApplication app) {
		Log.d(LCAT, "inside onAppCreate");
		ctx = app.getApplicationContext();
		audioManager = (AudioManager) ctx.getSystemService(Context.AUDIO_SERVICE);
		audioManager.setMode(AudioManager.MODE_IN_COMMUNICATION);

		// put module init code that needs to run when the application is created
	}

	// Methods
	@Kroll.method
	public static void setRingerMode(int tone) {
		audioManager.setRingerMode(tone);
	}

	@Kroll.method
	public int getRingerMode() {
		return audioManager.getRingerMode();
	}

	@Kroll.method
	public Object[] getDevices() {
		@SuppressWarnings("rawtypes")
		ArrayList<HashMap> deviceList = new ArrayList<HashMap>();
		if (Build.VERSION.SDK_INT < Build.VERSION_CODES.M)
			return null;
		AudioDeviceInfo[] infos = audioManager.getDevices(AudioManager.GET_DEVICES_OUTPUTS);
		for (AudioDeviceInfo info : infos) {
			HashMap<String, Object> opt = new HashMap<String, Object>();
			opt.put("id", info.getId());
			opt.put("type", info.getType());
			opt.put("channelcounts", info.getChannelCounts());
			opt.put("productname", info.getProductName());

			opt.put("samplerates", info.getSampleRates());
			if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.P)
				opt.put("address", info.getAddress());
			opt.put("channelmasks", info.getChannelMasks());
			opt.put("channelindexmasks", info.getChannelIndexMasks());
			opt.put("encodings", info.getEncodings());
			opt.put("hashcode", info.hashCode());
			deviceList.add(opt);
		}
		return deviceList.toArray();
	}

	@Kroll.method
	public Object[] getActivePlaybackConfigurations() {
		if (Build.VERSION.SDK_INT < Build.VERSION_CODES.O)
			return null;
		ArrayList<HashMap> configurationList = new ArrayList<HashMap>();
		final List<AudioPlaybackConfiguration> configurations = audioManager.getActivePlaybackConfigurations();
		Log.d(LCAT, "Count of AudioPlaybackConfigurations: " + configurations.size());
		for (AudioPlaybackConfiguration configuration : configurations) {
			HashMap<String, Object> opt = new HashMap<String, Object>();
			opt.put("describecontents", configuration.describeContents());
			// audioattributes
			HashMap<String, Object> audioattributes = new HashMap<String, Object>();
			AudioAttributes aa = configuration.getAudioAttributes();
			audioattributes.put("describecontents", aa.describeContents());
			audioattributes.put("contenttype", aa.getContentType());
			audioattributes.put("flags", aa.getFlags());
			audioattributes.put("usage", aa.getUsage());
			audioattributes.put("volumecontrolstream", aa.getVolumeControlStream());
			opt.put("audioattributes", audioattributes);
			configurationList.add(opt);
		}
		return configurationList.toArray();
	}

	@Kroll.method
	public boolean isSpeakerphoneOn() {
		return audioManager.isSpeakerphoneOn();
	}

	@Kroll.method
	public boolean isMusicActive() {
		return audioManager.isMusicActive();
	}

	@Kroll.method
	public boolean isBluetoothScoOn() {
		return audioManager.isBluetoothScoOn();
	}

	@Kroll.method
	public boolean isTypeOn(int type) {
		if (type == AudioDeviceInfo.TYPE_BUILTIN_SPEAKER && isSpeakerphoneOn())
			return true;
		if (type == AudioDeviceInfo.TYPE_WIRED_HEADSET && isWiredHeadsetOn())
			return true;
		if (type == AudioDeviceInfo.TYPE_BLUETOOTH_A2DP && isBluetoothA2dpOn())
			return true;
		return false;
	}

	@Kroll.method
	public void setTypeOn(int type) {
		setActiveAudioDevice(type);
	}

	@Kroll.method
	public boolean isBluetoothA2dpOn() {
		return audioManager.isBluetoothA2dpOn();
	}

	@Kroll.method
	public boolean isWiredHeadsetOn() {
		return isHeadsetOn();
	}

	// https://stackoverflow.com/questions/47057889/how-to-switch-audio-output-from-phone-phone-speaker-earphones-or-bluetooth-dev
	@SuppressWarnings("deprecation")
	private void reset(AudioManager audioManager) {
		if (audioManager != null) {
			audioManager.setMode(AudioManager.MODE_NORMAL);
			audioManager.stopBluetoothSco();
			audioManager.setBluetoothScoOn(false);
			audioManager.setSpeakerphoneOn(false);
			audioManager.setWiredHeadsetOn(false);
		}
	}

	public void connectEarpiece(AudioManager audioManager) {
		reset(audioManager);
		audioManager.setMode(AudioManager.MODE_IN_COMMUNICATION);
	}

	public void connectSpeaker(AudioManager audioManager) {
		reset(audioManager);
		audioManager.setSpeakerphoneOn(true);
	}

	public void connectHeadphones(AudioManager audioManager) {
		reset(audioManager);
		audioManager.setWiredHeadsetOn(true);
	}

	public void connectBluetoothA2DP(AudioManager audioManager) {
		reset(audioManager);
		audioManager.setBluetoothA2dpOn(true);
	}

	// https://www.programcreek.com/java-api-examples/?class=android.media.AudioManager&method=MODE_NORMAL
	@Kroll.method
	public int getActiveAudioDevice() {
		int type = 0;
		if (audioManager.isBluetoothA2dpOn()) {
			type = AudioDeviceInfo.TYPE_BLUETOOTH_A2DP;
			// Adjust output for Bluetooth.
		} else if (audioManager.isSpeakerphoneOn()) {
			type = AudioDeviceInfo.TYPE_BUILTIN_SPEAKER;
			// Adjust output for Speakerphone.
		} else if (audioManager.isWiredHeadsetOn()) {
			type = AudioDeviceInfo.TYPE_WIRED_HEADSET;
			// Adjust output for headsets
		} else {
			// If audio plays and noone can hear it, is it still playing?
		}
		return type;
	}

	@Kroll.method
	public void setActiveAudioDevice(int type) {
		switch (type) {
		case AudioDeviceInfo.TYPE_BLUETOOTH_A2DP:
			connectBluetoothA2DP(audioManager);
			break;
		case AudioDeviceInfo.TYPE_BUILTIN_SPEAKER:
			connectSpeaker(audioManager);
			break;
		case AudioDeviceInfo.TYPE_WIRED_HEADSET:
			connectHeadphones(audioManager);
			break;
		}

	}

	private BluetoothProfile.ServiceListener headsetListener = new BluetoothProfile.ServiceListener() {
		public void onServiceConnected(int profile, BluetoothProfile proxy) {
			if (profile == BluetoothProfile.HEADSET) {
				bluetoothHeadset = (BluetoothHeadset) proxy;
			}
		}

		public void onServiceDisconnected(int profile) {
			if (profile == BluetoothProfile.HEADSET) {
				bluetoothHeadset = null;
			}
		}
	};
	private BluetoothProfile.ServiceListener a2dpListener = new BluetoothProfile.ServiceListener() {
		public void onServiceConnected(int profile, BluetoothProfile proxy) {
			if (profile == BluetoothProfile.A2DP) {
				bluetoothA2dp = (BluetoothA2dp) proxy;
			}
		}

		public void onServiceDisconnected(int profile) {
			if (profile == BluetoothProfile.A2DP) {
				bluetoothA2dp = null;
			}
		}
	};

	public void BTinit() {
		// Establish connection to the proxy.
		bluetoothAdapter.getProfileProxy(ctx, headsetListener, BluetoothProfile.HEADSET);
		bluetoothAdapter.getProfileProxy(ctx, a2dpListener, BluetoothProfile.A2DP);

		// ... call functions on bluetoothHeadset

		// Close proxy connection after use.
		bluetoothAdapter.closeProfileProxy(BluetoothProfile.HEADSET, bluetoothHeadset);
		bluetoothAdapter.closeProfileProxy(BluetoothProfile.A2DP, bluetoothA2dp);

	}

	private boolean isHeadsetOn() {
		AudioManager am = (AudioManager) ctx.getSystemService(Context.AUDIO_SERVICE);

		if (am == null)
			return false;

		if (Build.VERSION.SDK_INT < Build.VERSION_CODES.M) {
			return am.isWiredHeadsetOn() || am.isBluetoothScoOn() || am.isBluetoothA2dpOn();
		} else {
			AudioDeviceInfo[] devices = am.getDevices(AudioManager.GET_DEVICES_OUTPUTS);

			for (int i = 0; i < devices.length; i++) {
				AudioDeviceInfo device = devices[i];

				if (device.getType() == AudioDeviceInfo.TYPE_WIRED_HEADSET
						|| device.getType() == AudioDeviceInfo.TYPE_WIRED_HEADPHONES) {
					return true;
				}
			}
		}
		return false;

	}

	private class BecomingNoisyReceiver extends BroadcastReceiver {
		@Override
		public void onReceive(Context context, Intent intent) {
			if (AudioManager.ACTION_AUDIO_BECOMING_NOISY.equals(intent.getAction())) {
				if (becomingNoisyCallback != null) {
					becomingNoisyCallback.call(getKrollObject(), getDevices());
				}
			}
		}

		private IntentFilter intentFilter = new IntentFilter(AudioManager.ACTION_AUDIO_BECOMING_NOISY);
		BecomingNoisyReceiver becomingNoisyReceiver = new BecomingNoisyReceiver();

		private KrollFunction becomingNoisyCallback;

		@Kroll.method
		public void startBecomingNoisyReceiver(Object cb) {
			if (cb instanceof KrollFunction) {
				becomingNoisyCallback = (KrollFunction) cb;
			}
			ctx.registerReceiver(becomingNoisyReceiver, intentFilter);
		}

		@Kroll.method
		public void registerReceiver(String receiver, Object cb) {
			if (receiver.equals("becomingnoisy")) {
				if (cb instanceof KrollFunction) {
					becomingNoisyCallback = (KrollFunction) cb;
				}
				ctx.registerReceiver(becomingNoisyReceiver, intentFilter);
			}
		}
		@Kroll.method
		public void unregisterReceiver(String receiver, @Kroll.argument(optional=true) Object cb) {
			if (receiver.equals("becomingnoisy")) {
				ctx.unregisterReceiver(becomingNoisyReceiver);
			}
		}

		@Kroll.method
		public void stopBecomingNoisyReceiver() {
			ctx.unregisterReceiver(becomingNoisyReceiver);

		}

	}

}
