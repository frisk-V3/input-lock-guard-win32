#include <windows.h>
#include "input_lock.h"
#include "hotkey.h"

void RunHotkeyLoop() {
    // Ctrl + Alt + L
    RegisterHotKey(NULL, 1, MOD_CONTROL | MOD_ALT, 'L');

    MSG msg = {0};

    while (GetMessage(&msg, NULL, 0, 0)) {
        if (msg.message == WM_HOTKEY) {
            LockInput();

            // キーが離されるまで待つ
            while (GetAsyncKeyState('L') & 0x8000) {
                Sleep(10);
            }

            UnlockInput();
        }
    }
}
