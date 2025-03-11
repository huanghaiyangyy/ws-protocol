目录结构：

.third-party
├── android_install
├── android_toolchain.cmake
├── boost_1_83_0
├── json-3.10.5
├── openssl-1.1.1w
├── protobuf-3.21.3
├── src_tarball
├── websocketpp-0.8.2
└── zlib-1.2.13


huanghaiyangyy: 编译成功后我该如何部署，需要拷贝哪些库到目标平台上

GitHub Copilot: 编译成功后，你需要将生成的可执行文件和所有依赖的共享库（如果有）拷贝到目标平台上。以下是一般步骤：

### 1. 拷贝可执行文件

将生成的可执行文件拷贝到目标平台上。例如，如果生成的可执行文件是 `example_server_protobuf`，你可以使用以下命令：

```sh
scp path/to/build/example_server_protobuf user@target:/path/to/deploy/
```

### 2. 拷贝依赖的共享库

你需要拷贝所有依赖的共享库到目标平台上。可以使用 `ldd` 命令来列出可执行文件的所有依赖库：

```sh
ldd path/to/build/example_server_protobuf
```

这将列出所有依赖的共享库及其路径。你需要将这些库拷贝到目标平台上。例如：

```sh
scp /path/to/dependency/libprotobuf.so user@target:/path/to/deploy/libs/
scp /path/to/dependency/libssl.so user@target:/path/to/deploy/libs/
scp /path/to/dependency/libcrypto.so user@target:/path/to/deploy/libs/
scp /path/to/dependency/libz.so user@target:/path/to/deploy/libs/
scp /path/to/dependency/liblog.so user@target:/path/to/deploy/libs/
```

### 3. 设置环境变量

在目标平台上，你需要设置 `LD_LIBRARY_PATH` 环境变量，以便系统能够找到这些共享库。例如：

```sh
export LD_LIBRARY_PATH=/path/to/deploy/libs:$LD_LIBRARY_PATH
```

你可以将这行命令添加到目标平台上的 `.bashrc` 或 `.profile` 文件中，以便每次登录时自动设置。

### 4. 运行可执行文件

最后，你可以在目标平台上运行可执行文件：

```sh
cd /path/to/deploy
./example_server_protobuf
```

### 示例脚本

以下是一个示例脚本，展示如何将可执行文件和依赖库拷贝到目标平台上，并设置环境变量：

```sh
#!/bin/bash

# 定义变量
TARGET_USER="user"
TARGET_HOST="target"
TARGET_DIR="/path/to/deploy"
BUILD_DIR="path/to/build"
LIB_DIR="$TARGET_DIR/libs"

# 创建目标目录
ssh $TARGET_USER@$TARGET_HOST "mkdir -p $TARGET_DIR $LIB_DIR"

# 拷贝可执行文件
scp $BUILD_DIR/example_server_protobuf $TARGET_USER@$TARGET_HOST:$TARGET_DIR/

# 拷贝依赖库
scp /path/to/dependency/libprotobuf.so $TARGET_USER@$TARGET_HOST:$LIB_DIR/
scp /path/to/dependency/libssl.so $TARGET_USER@$TARGET_HOST:$LIB_DIR/
scp /path/to/dependency/libcrypto.so $TARGET_USER@$TARGET_HOST:$LIB_DIR/
scp /path/to/dependency/libz.so $TARGET_USER@$TARGET_HOST:$LIB_DIR/
scp /path/to/dependency/liblog.so $TARGET_USER@$TARGET_HOST:$LIB_DIR/

# 设置环境变量
ssh $TARGET_USER@$TARGET_HOST "echo 'export LD_LIBRARY_PATH=$LIB_DIR:\$LD_LIBRARY_PATH' >> ~/.bashrc"

# 运行可执行文件
ssh $TARGET_USER@$TARGET_HOST "cd $TARGET_DIR && ./example_server_protobuf"
```

通过这些步骤，你可以将编译生成的可执行文件和依赖库部署到目标平台上，并确保它们能够正确运行。

