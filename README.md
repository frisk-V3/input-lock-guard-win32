# Input Lock Guard (Win32)

Windowsで「特定キーを押している間だけ」キーボードとマウス入力を完全にロックする軽量ユーティリティ。

猫がキーボードに乗る、子供が触るなどの誤操作を一時的に防ぐ用途を想定しています。

---

##  Features

- キーボード + マウス入力を完全ブロック
- 指定ホットキーで即時ON
- キーを離すと自動解除
- Win32 APIベース（軽量・ネイティブ）

---

##  Default Hotkey
Ctrl + Alt + L

- 押した瞬間 → 入力ロック
- Lキーを離す → ロック解除

※必要に応じて `src/hotkey.cpp` を編集してください

---

##  Warning

このアプリは `BlockInput(TRUE)` を使用しています。

- 入力が完全に無効化されます
- バグがあると操作不能になる可能性があります

### 推奨事項

- 管理者権限で実行
- 仮想環境やサブPCでテスト
- 必ず解除ロジックを確認すること

---

##  Build (Local)

### 必要環境

- Windows
- CMake (>= 3.10)
- Visual Studio / MSVC

### ビルド手順

```bash
cmake -B build
cmake --build build --config Release
