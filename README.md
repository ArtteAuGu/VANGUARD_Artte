# VANGUARD

RoboMaster 算法组作业提交仓库。

## 目录结构

```text
.
├── task1
│   └── environment            # 配置环境
│       ├── helloworld.c
│       ├── CPP环境截图.png
│       └── VM+Ubuntu+Github截图.png
├── .gitignore
└── README.md
```

## 存放约定

每个任务一个 `taskN` 目录，其下再按任务名分目录，例如 `task1/environment`。
不同任务不需要新建分支，统一提交到 `main` 分支。
编译产物（`*.exe`）与本地编辑器配置不入库，见 `.gitignore`。

## 任务清单

| 任务 | 内容 | 状态 |
| --- | --- | --- |
| task1 | environment：C/C++ 编译环境、虚拟机 Ubuntu、GitHub 环境配置 | 已完成 |

### task1/environment

| 文件 | 说明 |
| --- | --- |
| `helloworld.c` | gcc 编译运行通过的测试源码 |
| `CPP环境截图.png` | VSCode + MinGW(gcc) 编译与运行结果截图 |
| `VM+Ubuntu+Github截图.png` | VMware 虚拟机 Ubuntu 访问 GitHub 截图 |
