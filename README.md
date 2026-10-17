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
├── task2
│   ├── cpp
│   │   ├── 1                  # 洛谷入门1，5题
│   │   │   ├── 入门1-1.cpp
│   │   │   ├── 入门1-1.png
│   │   │   └── …（1-2～1-5，同结构）
│   │   └── 2                  # 洛谷入门2，5题
│   │       ├── 入门2-1.cpp
│   │       ├── 入门2-1.png
│   │       └── …（2-2～2-5，同结构）
│   └── ros                    # ROS 2 turtlesim
│       └── ROS2 turtlesim.png
├── .gitignore
└── README.md
```

## 存放约定

每个任务一个 `taskN` 目录，其下再按任务名分目录，例如 `task1/environment`、`task2/cpp/1`。
源码与同题截图同名配对，只差扩展名。
不同任务不需要新建分支，统一提交到 `main` 分支。
编译产物（`*.exe`）与本地编辑器配置不入库，见 `.gitignore`。

## 任务清单

| 任务 | 内容 | 状态 |
| --- | --- | --- |
| task1 | environment：C/C++ 编译环境、虚拟机 Ubuntu、GitHub 环境配置 | 已完成 |
| task2 | cpp：洛谷入门1、入门2各5题；ros：ROS 2 turtlesim 键盘控制 | 已完成 |

### task1/environment

| 文件 | 说明 |
| --- | --- |
| `helloworld.c` | gcc 编译运行通过的测试源码 |
| `CPP环境截图.png` | VSCode + MinGW(gcc) 编译与运行结果截图 |
| `VM+Ubuntu+Github截图.png` | VMware 虚拟机 Ubuntu 访问 GitHub 截图 |

### task2/cpp/1（洛谷入门1）

| 题号 | 题目 | 源码 | 截图 |
| --- | --- | --- | --- |
| P5707 | 【深基2.例12】上学迟到 | `入门1-1.cpp` | `入门1-1.png` |
| B2029 | 大象喝水 | `入门1-2.cpp` | `入门1-2.png` |
| P1425 | 小鱼的游泳时间 | `入门1-3.cpp` | `入门1-3.png` |
| P1421 | 小玉买文具 | `入门1-4.cpp` | `入门1-4.png` |
| P3954 | [NOIP2017 普及组] 成绩 | `入门1-5.cpp` | `入门1-5.png` |

### task2/cpp/2（洛谷入门2）

| 题号 | 题目 | 源码 | 截图 |
| --- | --- | --- | --- |
| P1085 | [NOIP2004 普及组] 不高兴的津津 | `入门2-1.cpp` | `入门2-1.png` |
| P1909 | [NOIP2016 普及组] 买铅笔 | `入门2-2.cpp` | `入门2-2.png` |
| P1424 | 小鱼的航程（改进版） | `入门2-3.cpp` | `入门2-3.png` |
| P4414 | [COCI2006/2007 #2] ABC | `入门2-4.cpp` | `入门2-4.png` |
| P1055 | [NOIP2008 普及组] ISBN号码 | `入门2-5.cpp` | `入门2-5.png` |

### task2/ros

| 文件 | 说明 |
| --- | --- |
| `ROS2 turtlesim.png` | VMware 虚拟机 Ubuntu 中运行 turtlesim，键盘控制小海龟移动并画出轨迹 |
