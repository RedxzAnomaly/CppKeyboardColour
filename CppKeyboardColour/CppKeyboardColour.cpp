// Created by DeviceIoControl

#include "stdafx.h"

#include "Test.h"
#include "Keyboard.h"
#include "Animations.h"
#include "ServiceMain.h"

#pragma warning(disable: 4995)


int main(int argc, const char* argv[])
{
	// SERVICE_TABLE_ENTRYW svcTableEntry{};
	// svcTableEntry.lpServiceName = g_strServiceName.data();
	// svcTableEntry.lpServiceProc = ServiceMain;
	// 
	// StartServiceCtrlDispatcherW(&svcTableEntry);
	
	Keyboard keyboard;

	BreatheAnimation breathe;
	ColourShiftAnimation colourShift;

	keyboard.PlayAnimation(breathe, true);

	return 0;
}

