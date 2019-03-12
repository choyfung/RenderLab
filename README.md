# RenderLab

> 渲染实验室

## 0. 简介

渲染实验室

## 1. 资源

项目所需的资源文件并没有上传到 github 上，放在了网盘里

链接：https://pan.baidu.com/s/1D2dIBmN2Ub8dKYjO6LsV3w 

提取码：amiw 

## 2. 编译

（安装方法以后补充）

CMake: 3.1.0 以上

Visual Studio: 2017

系统：windows 64位

Qt: 5.12.0 64位

CUDA: 9.0

Optix: 6.0

驱动：418.81 or later is required.

```bash
mkdir build
cd build
cmake .. -Wno-dev
```

## 3. TODO

- [x] 移植 OpenGL

- [x] 通过移植 LearnOpenGL / [ 05_08_Bloom ] 测试是否成功移植

- [x] 实现事件传递机制（键盘，鼠标，滚轮等）

- [x] 移植 CPU RTX
  - [x] 渲染图片的类
  - [x] 将光线追踪的结果渲染到图片上

- [x] 实现基础的UI功能
  - [x] 开始
  - [x] 停止
  - [x] 进度条
  - [x] 保存

- [x] 优化数据结构
  - [x] 动态访问模式
  - [x] 场景对象（组件模式）
  - [x] 相交器

- [x] 用新的架构来写离线渲染
  - [x] 相机
  - [x] 组件机制优化
  - [x] Material (BSDF)
    - [x] Diffuse
    - [x] Mirror
    - [x] Glass
  - [x] PathTracer (PTX)
    - [x] 基本框架
    - [x] Mirror
    - [x] Glass
    - [x] Transform
    - [x] Plane
    - [x] 灯光
    - [x] 测试 Cornell Box
    - [x] 网格
      - [x] Triangle
      - [x] TriMesh
      - [x] BVH
    - [x] 相交性测试（不需要找到最近，只要相交就退出）

- [x] 用新的架构来写实时渲染
  - [x] Viewer
  - [x] Raster
  - [x] Roamer（把 Viewer 中的相机相关部分抽出）

- [x] 实装UI功能（查看，编辑）
  - [x] 层次面板
  - [x] 属性面板（展示 component）
    - [x] 基础框架
    - [x] Transform
    - [x] Geometry
    - [x] Material
    - [x] Light
  - [x] 选择器 Picker
  - [x] 设置面板

- [ ] 优化光线追踪
  - [x] 噪点异常
  - [x] 降噪（OptixAIDenoiser）
  - [x] 场景BVH（因为在编辑时场景是动态的，所以在光线追踪任务开始时才建立 BVH）
  - [ ] 块化渲染
  - [x] 线程化（不要用OpenMP）

- [ ] 光线追踪新增功能
  - [x] Cook Torrance BRDF
  - [x] 金属工作流

    - [x] 基础公式
    - [x] 贴图
      - [x] albedo
      - [x] metallic
      - [x] roughness
      - [x] ao
      - [x] normal
  - [ ] 低差异序列
  - [ ] 景深
  - [x] 点光源

- [ ] 引擎新增功能
  - [x] xml 场景文件
    - [x] 保存 SObj
    - [x] 载入 SObj
    - [x] 在 UI 中实现
  - [x] 场景编辑
  - [x] connect 信号槽机制
  - [ ] 统一相机

- [ ] UI 界面新增功能
  - [x] 滑动条
  - [x] 图片选择
  - [x] 下拉选择（切换材质等）
  - [x] 添加 / 删除组件
  - [x] 添加 / 删除 / 移动（改变父子关系） SObj
    - [x] 移动
    - [x] 添加
    - [x] 删除
  - [x] SObj 改名
  - [ ] 旋转拖动缩放物体
  - [ ] 方向标明

- [ ] 优化实时渲染
  - [ ] 直接光照
    - [x] 点光源
      - [x] Diffuse
      - [x] Metal WorkFlow
      - [x] Frosted Glass
      - [x] 阴影（支持多光源）
    - [ ] 面光源



