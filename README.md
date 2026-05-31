# STM32F429\_HAL\_Project\_Template 工程模板

## 一、项目简介
本项目为 **STM32F429IGT6 HAL 库通用开发模板**，基于 STM32CubeMX 生成，适配 VSCode+ 插件STM32CUBEIDE for VScode \+ CMake \+ Ninja \+ OpenOCD 全套开源开发环境，
需要：
    需要安装的vscode插件：插件STM32CUBEIDE for VScode会自动安装编译工具链,安装cortex-debug插件用于调试，安装Task Buttons用于快捷任务按钮；另外需安装openocd，路径设置到cortex-debug插件中。
    此工程应先从cubeMX打开.ioc文件，配置生成代码后，再进行调试开发。

## 二、硬件平台
- **主控芯片**：STM32F429IGT6
- **开发板**：野火 STM32F429IGT6\_V2 开发板
- **开发框架**：STM32 HAL 库

## 三、开发环境
- 代码生成工具：STM32CubeMX
- 编译工具：CMake \+ Ninja
- 调试烧录：OpenOCD \+ cortex\-debug
- 编辑器：VSCode（含完整工程配置）
- 代码格式化：clang\-format

## 四、工程整体结构说明
### 1\. 工程目录核心文件
- **STM32F429\BSP**： 板级支持文件夹,适配野火 F429 开发板的板级驱动包，包含板载 LED、按键、串口、屏幕等底层驱动，可直接复用。
- **\_HAL\_Project\_Template\.ioc**：CubeMX 工程配置文件，保存所有外设、时钟、引脚配置，可二次修改重生成代码。
- **STM32F429\.svd**：外设寄存器描述文件，调试时可直接在 VSCode 查看 STM32 所有外设寄存器数值。
- **\.clang\-format**：全局代码格式化规则，统一代码风格，一键格式化整个工程代码。
- **STM32F429\.vscode**： 工程配置文件夹:
    - **settings\.json**
        - 配置 clangd 路径、CMake 工具路径、默认编译生成器
        - 配置全局编译环境变量、工具链路径
        - Doxygen注释风格
        - 适配 STM32CubeIDE 编译环境规范
    - **tasks\.json**
        - 内置一键任务：CMake 配置、工程构建、代码编译、程序烧录、工程清理（clean）
        - VSCode 顶部快捷按钮可直接调用，无需手动输入命令
    - **launch\.json**
        - OpenOCD 调试配置
        - 配置 GDB 调试路径、下载算法、调试参数
        - 支持断点调试、寄存器查看、变量监控
### 2\. 关键资源文件夹
- **UserSettingJSON**：用户全局配置文件夹，存放 **settings\.json**，统一管理工程环境参数。
- **STM32.code-profile**:vscode开发环境的配置文件

## 五、已配置的核心功能
- ✅ 完整 VSCode 开发环境预配置
- ✅ CMake \+ Ninja 跨平台编译体系
- ✅ OpenOCD 一键下载 \+ 在线调试
- ✅ SVD 外设寄存器可视化调试
- ✅ 统一 clang\-format 代码格式化规范
- ✅ 野火 F429 全套板级驱动支持
- ✅ 内置 VSCode 快捷任务按钮：编译、构建、烧录、清理

## 六、使用说明
1. 使用 VSCode 打开工程根目录（必须打开文件夹，不能单开文件）
2. 等待 STM32CUBEIDE for VScode 自动加载配置，执行 `CMake: Configure`
3. 点击 VSCode 快捷任务按钮：Build 编译工程
4. 连接下载器，一键 Flash 下载程序
5. 支持Debug 在线断点调试

## 七、工程优势
- 标准化、规范化模板
- 规避 VSCode \+ STM32 环境配置繁琐、路径报错、调试失效等常见问题
- 结构清晰，分层规范，适合学习、毕设、项目开发
- 完美适配 Gitee/GitHub 版本管理，支持镜像自动同步

## 八、更新记录
2026\.05\.30 — 初始化完整 STM32F429 HAL 工程模板，配置全套编译调试环境、BSP 驱动、代码格式化、寄存器调试功能。
2026\.05\.31 — 更新setting.json文件，增加Doxygen注释风格，增加STM32.code-profile文件，可直接导入到vscode中。
> （注：文档部分内容可能由 AI 生成）
