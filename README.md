# 试验室网络化

本仓库用于试验室网络化的开发，试验室网络主要包括数据中心和试验中心。

## 数据中心

采用Linux操作系统和nginx建立主网站，数据存储采用mysql数据库，拥有以下功能

+ 工程师登录
+ 数字化试验手册
+ 查看故障列表
+ 查看历史数据
+ 大数据分析

## 试验中心

采用Windows操作系统和IIS建立副网站，数据存储采用sqlite数据库，拥有以下功能

+ 实时试验状态查看
+ 故障上报
+ 存储临时数据并选择数据上传

## 数据同步

在试验中心，工程师可以选择性地将当日试验数据上传至数据中心；整个实验网络采用星形结构，数据中心为整个网络控制中心，采用TCP/IP网络连接各试验中心；

## 技术选择

### 操作系统
试验中心选择Windows的原因是大多数工程师日常接触的都是Windows电脑，便于工程师进行日常的操作；而数据中心对性能要求较高不需要显示界面，且主要是开发人员使用，开发人员更习惯使用Linux而不是Windows Server进行开发。

### 数据库
数据中心要存储大量数据首选采用大型数据库比如mysql，而试验中心仅仅是存储当日或短时间数据，且有大量数据可能不会被使用，采用sqlite满足需求且不会让Windows客户机运行缓慢，方便工程师日常使用。且工程师日常使用的Excel等软件都有很好的插件可以方便利用sqlite中的数据。

### 依赖库

+ [tencent/rapidjson](https://github.com/tencent/rapidjson)
+ [mysql/mysql-connector-cpp](https://github.com/mysql/mysql-connector-cpp)
+ [chronolaw/ngx_cpp_dev](https://github.com/chronolaw/ngx_cpp_dev)
