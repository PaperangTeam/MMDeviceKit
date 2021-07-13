#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef MMDEVICEKIT_SWIFT_H
#define MMDEVICEKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MMDeviceKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM_NAMED(NSInteger, DeviceStatus, "DeviceStatus", closed) {
  DeviceStatusUnConnected = 0,
  DeviceStatusConnecting = 1,
  DeviceStatusConnectedIdle = 2,
  DeviceStatusWorking = 3,
};


SWIFT_CLASS("_TtC11MMDeviceKit8MMDevice")
@interface MMDevice : NSObject
@property (nonatomic, copy) NSString * _Nullable deviceName;
@property (nonatomic, copy) NSString * _Nullable deviceType;
@property (nonatomic, copy) NSString * _Nullable snCode;
@property (nonatomic, copy) NSString * _Nullable alias;
@property (nonatomic, copy) NSString * _Nullable MacAdress;
@property (nonatomic) NSInteger maxPackageLength;
@property (nonatomic, copy) NSString * _Nullable firmVersion;
@property (nonatomic) uint16_t maxWidth;
@property (nonatomic) uint16_t imageWidth;
@property (nonatomic) uint16_t bottomFeedLine;
/// 设备状态
@property (nonatomic) enum DeviceStatus status;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11MMDeviceKit13MMCloudDevice")
@interface MMCloudDevice : MMDevice
@property (nonatomic, copy) NSString * _Nullable ram;
@property (nonatomic, copy) NSString * _Nullable rom;
@property (nonatomic, copy) NSString * _Nullable bindInfo;
@property (nonatomic, copy) NSString * _Nullable delegate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11MMDeviceKit8MMConfig")
@interface MMConfig : NSObject
/// 单例
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MMConfig * _Nonnull shared;)
+ (MMConfig * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// 是否打印日志
@property (nonatomic) BOOL showLog;
/// 搜索设备的名字黑名单
@property (nonatomic, copy) NSArray<NSString *> * _Nullable unEnableNameArray;
/// 获取外部userID，用于P2S
@property (nonatomic, copy) NSString * _Nonnull (^ _Nullable getUserId)(void);
/// 蓝牙关闭
@property (nonatomic, copy) void (^ _Nullable blePoweredOff)(void);
/// 意外断开
@property (nonatomic, copy) void (^ _Nullable accidentDisconnect)(void);
/// 打印机状态
@property (nonatomic, copy) void (^ _Nullable helperViewSetStatuBlock)(NSInteger);
/// 双击按钮断开
@property (nonatomic, copy) void (^ _Nullable handleDisconnectBTCmdBlock)(void);
/// 注册设备参数
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable (^ _Nullable registDevicePara)(MMDevice * _Nullable);
/// 注册成功
@property (nonatomic, copy) void (^ _Nullable handleRegistDeviceSuccessShowHudBlock)(void);
/// 是否需要检查升级
@property (nonatomic, copy) BOOL (^ _Nullable shouldUpdateBlock)(MMDevice * _Nullable);
/// 注册成功后，处理纸张
@property (nonatomic, copy) void (^ _Nullable handlePaperAfterRegistDeviceBlock)(MMDevice * _Nullable);
/// 注册流程全部完成
@property (nonatomic, copy) void (^ _Nullable registFinish)(MMDevice * _Nullable);
/// 打印图片但是没连接设备时
@property (nonatomic, copy) void (^ _Nullable printImageButNotConnect)(MMDevice * _Nullable);
/// 打印成功
@property (nonatomic, copy) void (^ _Nullable handlePrintImageSuccessBlock)(void);
/// 升级成功
@property (nonatomic, copy) void (^ _Nullable didUpdateSuccessBlock)(void);
/// 是否支持平级升级
@property (nonatomic) BOOL isAllowUpgradeWhenEqual;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class UIImage;
@class MMGattDevice;

SWIFT_CLASS("_TtC11MMDeviceKit11MMDeviceApi")
@interface MMDeviceApi : NSObject
+ (void)regist:(NSString * _Nonnull)appKey :(NSString * _Nonnull)appSecret :(long)appID :(void (^ _Nullable)(void))success :(void (^ _Nullable)(NSInteger, NSString * _Nonnull))fail;
+ (NSString * _Nonnull)getSdkVersion SWIFT_WARN_UNUSED_RESULT;
+ (void)showLog:(BOOL)showLog;
+ (void)setScanOvertime:(NSTimeInterval)overtime;
+ (void)autoReconnect:(BOOL)autoReconnect;
+ (enum DeviceStatus)getConnectStatus:(MMDevice * _Nonnull)device SWIFT_WARN_UNUSED_RESULT;
+ (void)getAvailableDevices:(void (^ _Nonnull)(NSArray<MMDevice *> * _Nonnull))devicesHandle;
+ (void)stopFetchDevice;
+ (void)useDevice:(MMDevice * _Nonnull)device;
+ (void)unuseDevice:(MMDevice * _Nonnull)device;
+ (void)print:(MMDevice * _Nonnull)device :(UIImage * _Nonnull)image :(BOOL)isMono :(NSInteger)copy :(SWIFT_NOESCAPE void (^ _Nonnull)(void))complete;
+ (enum DeviceStatus)checkDeviceStatus:(MMDevice * _Nonnull)device SWIFT_WARN_UNUSED_RESULT;
+ (void)printTestPaper:(MMGattDevice * _Nonnull)device;
+ (void)updateGattDevice:(MMGattDevice * _Nonnull)device :(NSData * _Nonnull)firm;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11MMDeviceKit15MMDeviceManager")
@interface MMDeviceManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSNumber;
@class CBCharacteristic;

SWIFT_CLASS("_TtC11MMDeviceKit12MMGattDevice")
@interface MMGattDevice : MMDevice
@property (nonatomic, copy) NSString * _Nullable uuid;
@property (nonatomic, strong) NSNumber * _Nullable rssi;
@property (nonatomic) uint16_t offtime;
@property (nonatomic) uint8_t battery;
@property (nonatomic) double vol;
@property (nonatomic) double temperature;
@property (nonatomic, strong) CBCharacteristic * _Nullable writeCharacteristic;
@property (nonatomic, copy) NSString * _Nullable writeCharacteristicString;
@property (nonatomic, copy) NSString * _Nullable btCharacteristicString;
@property (nonatomic, copy) NSString * _Nullable mcuCharacteristicString;
@property (nonatomic, copy) NSString * _Nullable bindInfo;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable supportSize;
@property (nonatomic) uint16_t supportDpi;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable supportColour;
@property (nonatomic) uint8_t density;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11MMDeviceKit21MMNotificationStrings")
@interface MMNotificationStrings : NSObject
/// 打印数据大小变化
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull printDataSizeChangeNotificationName;)
+ (NSString * _Nonnull)printDataSizeChangeNotificationName SWIFT_WARN_UNUSED_RESULT;
/// 所有图片都打印完成
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull printFinishNotificationName;)
+ (NSString * _Nonnull)printFinishNotificationName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum MMPrintPaperType : NSInteger;

SWIFT_CLASS("_TtC11MMDeviceKit13MMPrintConfig")
@interface MMPrintConfig : NSObject
@property (nonatomic) CGFloat targetWidth;
@property (nonatomic) uint8_t precision;
@property (nonatomic) uint16_t width;
@property (nonatomic) uint16_t maxWidth;
@property (nonatomic) uint16_t offset;
@property (nonatomic) uint8_t isCompress;
/// 打印类型
@property (nonatomic) enum MMPrintPaperType paperType;
/// 份数
@property (nonatomic) NSInteger count;
/// 是否打印头部走纸
@property (nonatomic) BOOL printTopFeed;
@property (nonatomic) uint16_t topFeed;
/// 是否打印底部走纸
@property (nonatomic) BOOL printBottomFeed;
@property (nonatomic) uint16_t bottomFeed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11MMDeviceKit14MMPrintContent")
@interface MMPrintContent : NSObject
/// 单张图片,加入队列后自动清空
@property (nonatomic, strong) UIImage * _Nullable image;
/// 是否单色图
@property (nonatomic) BOOL isMono;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image isMono:(BOOL)isMono OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MMPrintTask;

SWIFT_CLASS("_TtC11MMDeviceKit14MMPrintManager")
@interface MMPrintManager : NSObject
/// 单例
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MMPrintManager * _Nonnull shared;)
+ (MMPrintManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// 添加打印任务
/// \param tasks 任务数组
///
/// \param device 设备
///
///
/// returns:
/// ()
- (void)addTaskWithTasks:(NSArray<MMPrintTask *> * _Nonnull)tasks device:(MMGattDevice * _Nullable)device;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, MMPrintPaperType, "MMPrintPaperType", closed) {
  MMPrintPaperTypeNormal = 0,
  MMPrintPaperTypeLabel = 1,
};


SWIFT_CLASS("_TtC11MMDeviceKit11MMPrintTask")
@interface MMPrintTask : NSObject
/// 打印内容
@property (nonatomic, strong) MMPrintContent * _Nullable content;
/// 打印配置
@property (nonatomic, strong) MMPrintConfig * _Nullable config;
/// 目标设备
@property (nonatomic, strong) MMDevice * _Nullable device;
/// 数据ID，用于后续读取沙盒缓存
@property (nonatomic, copy) NSString * _Nonnull dataId;
/// 已经打印多少份
@property (nonatomic) NSInteger printedCount;
/// 数据总大小（单个*份数）
@property (nonatomic) double dataSize;
- (nonnull instancetype)initWithContent:(MMPrintContent * _Nonnull)content config:(MMPrintConfig * _Nonnull)config device:(MMDevice * _Nonnull)device OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11MMDeviceKit17NotificationNames")
@interface NotificationNames : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NotificationNames (SWIFT_EXTENSION(MMDeviceKit))
/// Discover Paperang device notification with the device object
/// {
/// @“device”:MMDevice object,
/// }
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDidDiscoverDeviceNotification;)
+ (NSString * _Nonnull)MMDidDiscoverDeviceNotification SWIFT_WARN_UNUSED_RESULT;
/// Will connect to Paperang device notification
/// {
/// @“device”:MMDevice object
/// }
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMWillUseDeviceNotification;)
+ (NSString * _Nonnull)MMWillUseDeviceNotification SWIFT_WARN_UNUSED_RESULT;
/// Connected to Paperang device notification
/// {
/// @“device”:MMDevice object
/// }
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDeviceUsableNotification;)
+ (NSString * _Nonnull)MMDeviceUsableNotification SWIFT_WARN_UNUSED_RESULT;
/// Connect to Paperang device failed notification
/// {
/// @“errorCode”:@(313),
/// @“device”:MMDevice object
/// }
/// code:
/// -1  Cannot recognize the device
/// -2  Disallow connection to the device
/// -3  Connection timeout
/// -4  The specified device has disconnected from us
/// 313 Enable the device with Internet
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDidFailToUseDeviceNotification;)
+ (NSString * _Nonnull)MMDidFailToUseDeviceNotification SWIFT_WARN_UNUSED_RESULT;
/// Will transmit data notification
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMWillSendPrintDataNotification;)
+ (NSString * _Nonnull)MMWillSendPrintDataNotification SWIFT_WARN_UNUSED_RESULT;
/// Data transmission completed notification
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDidSendPrintDataNotification;)
+ (NSString * _Nonnull)MMDidSendPrintDataNotification SWIFT_WARN_UNUSED_RESULT;
/// Print completed notification
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDidFinishPrintNotification;)
+ (NSString * _Nonnull)MMDidFinishPrintNotification SWIFT_WARN_UNUSED_RESULT;
/// Device abnormal data:
/// {
/// @“code”:exceptionCode
/// @“errorStr”errorDescription
/// }
/// code:
/// -1 Low battery
/// -2 Lack of paper
/// -3 Overheated
/// -4 Cover opened
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDeviceExceptionStatusNotification;)
+ (NSString * _Nonnull)MMDeviceExceptionStatusNotification SWIFT_WARN_UNUSED_RESULT;
/// Device info received  notification
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDeviceInfoDidReceivedNotification;)
+ (NSString * _Nonnull)MMDeviceInfoDidReceivedNotification SWIFT_WARN_UNUSED_RESULT;
/// Device firm did send  notification
/// {
/// @“device”:MMDevice object
/// }
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDeviceFirmDidSendNotification;)
+ (NSString * _Nonnull)MMDeviceFirmDidSendNotification SWIFT_WARN_UNUSED_RESULT;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.3 (swiftlang-1200.0.29.2 clang-1200.0.30.1)
#ifndef MMDEVICEKIT_SWIFT_H
#define MMDEVICEKIT_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MMDeviceKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

typedef SWIFT_ENUM_NAMED(NSInteger, DeviceStatus, "DeviceStatus", closed) {
  DeviceStatusUnConnected = 0,
  DeviceStatusConnecting = 1,
  DeviceStatusConnectedIdle = 2,
  DeviceStatusWorking = 3,
};


SWIFT_CLASS("_TtC11MMDeviceKit8MMDevice")
@interface MMDevice : NSObject
@property (nonatomic, copy) NSString * _Nullable deviceName;
@property (nonatomic, copy) NSString * _Nullable deviceType;
@property (nonatomic, copy) NSString * _Nullable snCode;
@property (nonatomic, copy) NSString * _Nullable alias;
@property (nonatomic, copy) NSString * _Nullable MacAdress;
@property (nonatomic) NSInteger maxPackageLength;
@property (nonatomic, copy) NSString * _Nullable firmVersion;
@property (nonatomic) uint16_t maxWidth;
@property (nonatomic) uint16_t imageWidth;
@property (nonatomic) uint16_t bottomFeedLine;
/// 设备状态
@property (nonatomic) enum DeviceStatus status;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11MMDeviceKit13MMCloudDevice")
@interface MMCloudDevice : MMDevice
@property (nonatomic, copy) NSString * _Nullable ram;
@property (nonatomic, copy) NSString * _Nullable rom;
@property (nonatomic, copy) NSString * _Nullable bindInfo;
@property (nonatomic, copy) NSString * _Nullable delegate;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11MMDeviceKit8MMConfig")
@interface MMConfig : NSObject
/// 单例
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MMConfig * _Nonnull shared;)
+ (MMConfig * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// 是否打印日志
@property (nonatomic) BOOL showLog;
/// 搜索设备的名字黑名单
@property (nonatomic, copy) NSArray<NSString *> * _Nullable unEnableNameArray;
/// 获取外部userID，用于P2S
@property (nonatomic, copy) NSString * _Nonnull (^ _Nullable getUserId)(void);
/// 蓝牙关闭
@property (nonatomic, copy) void (^ _Nullable blePoweredOff)(void);
/// 意外断开
@property (nonatomic, copy) void (^ _Nullable accidentDisconnect)(void);
/// 打印机状态
@property (nonatomic, copy) void (^ _Nullable helperViewSetStatuBlock)(NSInteger);
/// 双击按钮断开
@property (nonatomic, copy) void (^ _Nullable handleDisconnectBTCmdBlock)(void);
/// 注册设备参数
@property (nonatomic, copy) NSDictionary<NSString *, id> * _Nullable (^ _Nullable registDevicePara)(MMDevice * _Nullable);
/// 注册成功
@property (nonatomic, copy) void (^ _Nullable handleRegistDeviceSuccessShowHudBlock)(void);
/// 是否需要检查升级
@property (nonatomic, copy) BOOL (^ _Nullable shouldUpdateBlock)(MMDevice * _Nullable);
/// 注册成功后，处理纸张
@property (nonatomic, copy) void (^ _Nullable handlePaperAfterRegistDeviceBlock)(MMDevice * _Nullable);
/// 注册流程全部完成
@property (nonatomic, copy) void (^ _Nullable registFinish)(MMDevice * _Nullable);
/// 打印图片但是没连接设备时
@property (nonatomic, copy) void (^ _Nullable printImageButNotConnect)(MMDevice * _Nullable);
/// 打印成功
@property (nonatomic, copy) void (^ _Nullable handlePrintImageSuccessBlock)(void);
/// 升级成功
@property (nonatomic, copy) void (^ _Nullable didUpdateSuccessBlock)(void);
/// 是否支持平级升级
@property (nonatomic) BOOL isAllowUpgradeWhenEqual;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class UIImage;
@class MMGattDevice;

SWIFT_CLASS("_TtC11MMDeviceKit11MMDeviceApi")
@interface MMDeviceApi : NSObject
+ (void)regist:(NSString * _Nonnull)appKey :(NSString * _Nonnull)appSecret :(long)appID :(void (^ _Nullable)(void))success :(void (^ _Nullable)(NSInteger, NSString * _Nonnull))fail;
+ (NSString * _Nonnull)getSdkVersion SWIFT_WARN_UNUSED_RESULT;
+ (void)showLog:(BOOL)showLog;
+ (void)setScanOvertime:(NSTimeInterval)overtime;
+ (void)autoReconnect:(BOOL)autoReconnect;
+ (enum DeviceStatus)getConnectStatus:(MMDevice * _Nonnull)device SWIFT_WARN_UNUSED_RESULT;
+ (void)getAvailableDevices:(void (^ _Nonnull)(NSArray<MMDevice *> * _Nonnull))devicesHandle;
+ (void)stopFetchDevice;
+ (void)useDevice:(MMDevice * _Nonnull)device;
+ (void)unuseDevice:(MMDevice * _Nonnull)device;
+ (void)print:(MMDevice * _Nonnull)device :(UIImage * _Nonnull)image :(BOOL)isMono :(NSInteger)copy :(SWIFT_NOESCAPE void (^ _Nonnull)(void))complete;
+ (enum DeviceStatus)checkDeviceStatus:(MMDevice * _Nonnull)device SWIFT_WARN_UNUSED_RESULT;
+ (void)printTestPaper:(MMGattDevice * _Nonnull)device;
+ (void)updateGattDevice:(MMGattDevice * _Nonnull)device :(NSData * _Nonnull)firm;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11MMDeviceKit15MMDeviceManager")
@interface MMDeviceManager : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSNumber;
@class CBCharacteristic;

SWIFT_CLASS("_TtC11MMDeviceKit12MMGattDevice")
@interface MMGattDevice : MMDevice
@property (nonatomic, copy) NSString * _Nullable uuid;
@property (nonatomic, strong) NSNumber * _Nullable rssi;
@property (nonatomic) uint16_t offtime;
@property (nonatomic) uint8_t battery;
@property (nonatomic) double vol;
@property (nonatomic) double temperature;
@property (nonatomic, strong) CBCharacteristic * _Nullable writeCharacteristic;
@property (nonatomic, copy) NSString * _Nullable writeCharacteristicString;
@property (nonatomic, copy) NSString * _Nullable btCharacteristicString;
@property (nonatomic, copy) NSString * _Nullable mcuCharacteristicString;
@property (nonatomic, copy) NSString * _Nullable bindInfo;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable supportSize;
@property (nonatomic) uint16_t supportDpi;
@property (nonatomic, copy) NSArray<NSNumber *> * _Nullable supportColour;
@property (nonatomic) uint8_t density;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11MMDeviceKit21MMNotificationStrings")
@interface MMNotificationStrings : NSObject
/// 打印数据大小变化
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull printDataSizeChangeNotificationName;)
+ (NSString * _Nonnull)printDataSizeChangeNotificationName SWIFT_WARN_UNUSED_RESULT;
/// 所有图片都打印完成
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull printFinishNotificationName;)
+ (NSString * _Nonnull)printFinishNotificationName SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum MMPrintPaperType : NSInteger;

SWIFT_CLASS("_TtC11MMDeviceKit13MMPrintConfig")
@interface MMPrintConfig : NSObject
@property (nonatomic) CGFloat targetWidth;
@property (nonatomic) uint8_t precision;
@property (nonatomic) uint16_t width;
@property (nonatomic) uint16_t maxWidth;
@property (nonatomic) uint16_t offset;
@property (nonatomic) uint8_t isCompress;
/// 打印类型
@property (nonatomic) enum MMPrintPaperType paperType;
/// 份数
@property (nonatomic) NSInteger count;
/// 是否打印头部走纸
@property (nonatomic) BOOL printTopFeed;
@property (nonatomic) uint16_t topFeed;
/// 是否打印底部走纸
@property (nonatomic) BOOL printBottomFeed;
@property (nonatomic) uint16_t bottomFeed;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC11MMDeviceKit14MMPrintContent")
@interface MMPrintContent : NSObject
/// 单张图片,加入队列后自动清空
@property (nonatomic, strong) UIImage * _Nullable image;
/// 是否单色图
@property (nonatomic) BOOL isMono;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image isMono:(BOOL)isMono OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MMPrintTask;

SWIFT_CLASS("_TtC11MMDeviceKit14MMPrintManager")
@interface MMPrintManager : NSObject
/// 单例
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MMPrintManager * _Nonnull shared;)
+ (MMPrintManager * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
/// 添加打印任务
/// \param tasks 任务数组
///
/// \param device 设备
///
///
/// returns:
/// ()
- (void)addTaskWithTasks:(NSArray<MMPrintTask *> * _Nonnull)tasks device:(MMGattDevice * _Nullable)device;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, MMPrintPaperType, "MMPrintPaperType", closed) {
  MMPrintPaperTypeNormal = 0,
  MMPrintPaperTypeLabel = 1,
};


SWIFT_CLASS("_TtC11MMDeviceKit11MMPrintTask")
@interface MMPrintTask : NSObject
/// 打印内容
@property (nonatomic, strong) MMPrintContent * _Nullable content;
/// 打印配置
@property (nonatomic, strong) MMPrintConfig * _Nullable config;
/// 目标设备
@property (nonatomic, strong) MMDevice * _Nullable device;
/// 数据ID，用于后续读取沙盒缓存
@property (nonatomic, copy) NSString * _Nonnull dataId;
/// 已经打印多少份
@property (nonatomic) NSInteger printedCount;
/// 数据总大小（单个*份数）
@property (nonatomic) double dataSize;
- (nonnull instancetype)initWithContent:(MMPrintContent * _Nonnull)content config:(MMPrintConfig * _Nonnull)config device:(MMDevice * _Nonnull)device OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC11MMDeviceKit17NotificationNames")
@interface NotificationNames : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NotificationNames (SWIFT_EXTENSION(MMDeviceKit))
/// Discover Paperang device notification with the device object
/// {
/// @“device”:MMDevice object,
/// }
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDidDiscoverDeviceNotification;)
+ (NSString * _Nonnull)MMDidDiscoverDeviceNotification SWIFT_WARN_UNUSED_RESULT;
/// Will connect to Paperang device notification
/// {
/// @“device”:MMDevice object
/// }
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMWillUseDeviceNotification;)
+ (NSString * _Nonnull)MMWillUseDeviceNotification SWIFT_WARN_UNUSED_RESULT;
/// Connected to Paperang device notification
/// {
/// @“device”:MMDevice object
/// }
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDeviceUsableNotification;)
+ (NSString * _Nonnull)MMDeviceUsableNotification SWIFT_WARN_UNUSED_RESULT;
/// Connect to Paperang device failed notification
/// {
/// @“errorCode”:@(313),
/// @“device”:MMDevice object
/// }
/// code:
/// -1  Cannot recognize the device
/// -2  Disallow connection to the device
/// -3  Connection timeout
/// -4  The specified device has disconnected from us
/// 313 Enable the device with Internet
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDidFailToUseDeviceNotification;)
+ (NSString * _Nonnull)MMDidFailToUseDeviceNotification SWIFT_WARN_UNUSED_RESULT;
/// Will transmit data notification
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMWillSendPrintDataNotification;)
+ (NSString * _Nonnull)MMWillSendPrintDataNotification SWIFT_WARN_UNUSED_RESULT;
/// Data transmission completed notification
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDidSendPrintDataNotification;)
+ (NSString * _Nonnull)MMDidSendPrintDataNotification SWIFT_WARN_UNUSED_RESULT;
/// Print completed notification
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDidFinishPrintNotification;)
+ (NSString * _Nonnull)MMDidFinishPrintNotification SWIFT_WARN_UNUSED_RESULT;
/// Device abnormal data:
/// {
/// @“code”:exceptionCode
/// @“errorStr”errorDescription
/// }
/// code:
/// -1 Low battery
/// -2 Lack of paper
/// -3 Overheated
/// -4 Cover opened
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDeviceExceptionStatusNotification;)
+ (NSString * _Nonnull)MMDeviceExceptionStatusNotification SWIFT_WARN_UNUSED_RESULT;
/// Device info received  notification
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDeviceInfoDidReceivedNotification;)
+ (NSString * _Nonnull)MMDeviceInfoDidReceivedNotification SWIFT_WARN_UNUSED_RESULT;
/// Device firm did send  notification
/// {
/// @“device”:MMDevice object
/// }
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull MMDeviceFirmDidSendNotification;)
+ (NSString * _Nonnull)MMDeviceFirmDidSendNotification SWIFT_WARN_UNUSED_RESULT;
@end


#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
