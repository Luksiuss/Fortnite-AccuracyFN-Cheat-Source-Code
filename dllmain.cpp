//AccuracyFN source leak aka neutron with out hes menu leaked by bunyip24#9999

#include "stdafx.h"
#include <Windows.h>


VOID Main()
{
    MH_Initialize();

    SettingsHelper::LoadDefaultConfig();

    if (!Util::Initialize()) {
        return;
    }

    if (!offsets::Initialize()) {
        return;
    }
    if (!hooks::Initialize()) {
        return;
    }

    if (!rend::Initialize()) {
        return;
    }
}



BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID reserved) {
    if (reason == DLL_PROCESS_ATTACH) {
       // Util::CreateConsole();
       Main();
    }

    return TRUE;
}


/*


#include <Windows.h>
#include "proc.h"

int FlyHack() {

if (LocalPawn)
//Get ProcId of the target process
DWORD procId = GetProcId(L"FortniteClient-Win64-Shipping.exe);

    //Getmodulebaseaddress
    uintptr_t moduleBase = GetModuleBaseAddress(procId, L"FortniteClient-Win64-Shipping.exe");

//Get Handle to Process
HANDLE hProcess = 0;
hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, procId);

//Resolve base address of the pointer chain
uintptr_t dynamicPtrBaseAddr = moduleBase + 0x10f4f4;

//hack vars
bool bHack = false;
BYTE flyon = 5;
BYTE flyOff = 0;
BYTE invisibleOn = 11;
BYTE invisibleOff = 0;

uintptr_t flyAddr = 0;
uintptr_t spectateAddr = 0;
uintptr_t invisibleAddr = 0;

while (1)
{
    if (GetAsyncKeyState(VK_CAPS) & 1)
    {
        bHack = !bHack;

        ReadProcessMemory(hProcess, (BYTE)dynamicPtrBaseAddr, &entAddr, sizeof(entAddr), nullptr);
        spectateAddr = entAddr + 0x548;
        invisibleAddr = entAddr + 0x82;

        if (bHack)
        {
            WriteProcessMemory(hProcess, (BYTE)flyAddr, &flyOn, sizeof(flyOn), nullptr);
            WriteProcessMemory(hProcess, (BYTE)invisibleAddr, &invisibleOn, sizeof(invisibleOn), nullptr);
        }
        else
        {
            WriteProcessMemory(hProcess, (BYTE)spectateAddr, &flyon, sizeof(spectateOff), nullptr);
            WriteProcessMemory(hProcess, (BYTE*)invisibleAddr, &invisibleon, sizeof(invisibleOff), nullptr);
        }
    }
}
return 0;
}
*/