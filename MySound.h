#pragma once
#include <Windows.h>

#pragma comment(lib, "winmm.lib")

/*

SND_APPLICATION	The pszSound parameter is an application-specific alias in the registry. You can combine this flag with the SND_ALIAS or SND_ALIAS_ID flag to specify an application-defined sound alias.
SND_ALIAS	The pszSound parameter is a system-event alias in the registry or the WIN.INI file. Do not use with either SND_FILENAME or SND_RESOURCE.
SND_ALIAS_ID	The pszSound parameter is a predefined identifier for a system-event alias. See Remarks.
SND_ASYNC	The sound is played asynchronously and PlaySound returns immediately after beginning the sound. To terminate an asynchronously played waveform sound, call PlaySound with pszSound set to NULL.
SND_FILENAME	The pszSound parameter is a file name. If the file cannot be found, the function plays the default sound unless the SND_NODEFAULT flag is set.
SND_LOOP	The sound plays repeatedly until PlaySound is called again with the pszSound parameter set to NULL. If this flag is set, you must also set the SND_ASYNC flag.
SND_MEMORY	The pszSound parameter points to a sound loaded in memory.
SND_NODEFAULT	No default sound event is used. If the sound cannot be found, PlaySound returns silently without playing the default sound.
SND_NOSTOP The specified sound event will yield to another sound event that is already playing in the same process. If a sound cannot be played because the resource needed to generate that sound is busy playing another sound, the function immediately returns FALSE without playing the requested sound.
			If this flag is not specified, PlaySound attempts to stop any sound that is currently playing in the same process. Sounds played in other processes are not affected.
SND_NOWAIT	Not supported.
SND_PURGE	Not supported.
SND_RESOURCE	The pszSound parameter is a resource identifier; hmod must identify the instance that contains the resource.
SND_SENTRY	Note  Requires Windows Vista or later.
			If this flag is set, the function triggers a SoundSentry event when the sound is played.
			SoundSentry is an accessibility feature that causes the computer to display a visual cue when a sound is played. If the user did not enable SoundSentry, the visual cue is not displayed.
SND_SYNC	The sound is played synchronously, and PlaySound returns after the sound event completes. This is the default behavior.
SND_SYSTEM	Note  Requires Windows Vista or later.
			If this flag is set, the sound is assigned to the audio session for system notification sounds. The system volume-control program (SndVol) displays a volume slider that controls system notification sounds. Setting this flag puts the sound under the control of that volume slider
			If this flag is not set, the sound is assigned to the default audio session for the application's process.
*/


class MySound
{
public:
	void Play(LPCWSTR filename, HMODULE hmod, DWORD fdwsound);
};
