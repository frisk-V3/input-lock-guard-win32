#include <windows.h>
#include "input_lock.h"

void LockInput() {
    BlockInput(TRUE);
}

void UnlockInput() {
    BlockInput(FALSE);
}
