#include "Globals.h"
#include "System.h"
#include "XorString.hpp"

// This way, static variables are created only when they are defined in the cpp file.
Rust::HackSetting Rust::Globals::hack_setting;
Rust::GameState Rust::Globals::game_state;
Rust::SystemData Rust::Globals::system_data;
Rust::HackData Rust::Globals::hack_data;
bool Rust::Globals::CheatRunning = true;

void Rust::Globals::Init()
{
	XorWS(RustClient, L"RustClient.exe");
	XorWS(UnityPlayer, L"UnityPlayer.dll");
	XorWS(Rust, L"Rust");

	hack_data.RustMemory = new Cheat::ExternalMemoryManager(XorWString(RustClient));
	hack_data.RustMemory->ChangeBaseAddressOfModule((PWCHAR)XorWString(UnityPlayer));

	auto hwnd = Cheat::System::GetHWND((PWCHAR)XorWString(Rust));

	RECT rect = { 0 };
	GetWindowRect(hwnd, &rect);
	system_data.GameWindowRect = rect;
	system_data.width = rect.right - rect.left;
	system_data.height = rect.bottom - rect.top;

	Rust::Globals::game_state.inGame = true;
}
