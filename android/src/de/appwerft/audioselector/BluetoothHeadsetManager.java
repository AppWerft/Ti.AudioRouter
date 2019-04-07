package de.appwerft.audioselector;

import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothHeadset;
import android.bluetooth.BluetoothProfile;
import android.content.Context;

public class BluetoothHeadsetManager {

	public interface onBluetoothHeadSetListener {
		public void connectedToProxy(BluetoothHeadset aBluetoothHeadset);

		public void disconnectedToProxy();
	}
	private BluetoothHeadset mBluetoothHeadset;
	private BluetoothAdapter mBluetoothAdapter;
	private Context mContext;
	private onBluetoothHeadSetListener mCallBackListener;
	public BluetoothHeadsetManager(Context mContext) {
		this.mContext = mContext;
		mBluetoothAdapter = BluetoothAdapter.getDefaultAdapter();
	}

	public void addListener(onBluetoothHeadSetListener aListener) {
		this.mCallBackListener = aListener;
	}

	public boolean hasEnableBluetooth() {
		return (mBluetoothAdapter.isEnabled()) ? true : false;
	}

	public void connectionToProxy() {
		mBluetoothAdapter.getProfileProxy(mContext, mProfileListener, BluetoothProfile.HEADSET);

	}

	public void disconnectProxy() {
		mBluetoothAdapter.closeProfileProxy(BluetoothProfile.HEADSET, mBluetoothHeadset);
	}

	private BluetoothHeadset getBTHandSetInstance() {
		return mBluetoothHeadset;
	}

	private BluetoothProfile.ServiceListener mProfileListener = new BluetoothProfile.ServiceListener() {

		@Override
		public void onServiceConnected(int profile, BluetoothProfile proxy) {
			if (profile == BluetoothProfile.HEADSET) {
				mBluetoothHeadset = (BluetoothHeadset) proxy;
				mCallBackListener.connectedToProxy(getBTHandSetInstance());
			}
		}

		@Override
		public void onServiceDisconnected(int profile) {
			if (profile == BluetoothProfile.HEADSET) {
				mBluetoothHeadset = null;
				mCallBackListener.disconnectedToProxy();
			}
		}
	};
}
// How switch to speaker:
//https://stackoverflow.com/questions/12036221/how-to-turn-speaker-on-off-programmatically-in-android-4-0/12037719#12037719
