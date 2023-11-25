# 51-headers

用于学习 51, 修改自 [platformio/toolchain-sdcc](https://registry.platformio.org/tools/platformio/toolchain-sdcc)

## 已知问题

1. upload 卡在 `Cycling power: done`
    - 原因是 `.platformio/platforms/intel_mcs51/builder/main.py:155` 默认有 `-a`
    - 直接注释掉, 或者 `platformio.ini` 中添加 `upload_flags = -r;` (有分号, 让它执行空语句)
    - 然后手动按电源开关
