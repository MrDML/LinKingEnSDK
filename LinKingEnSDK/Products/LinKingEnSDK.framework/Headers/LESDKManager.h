//
//  LESDKManager.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/7.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, LEADTYPE) {
    ADTYPE_REWARDVIDEO = 0,
    ADTYPE_INTERSTITAL = 1,
    ADTYPE_BANNER = 2,
};
typedef enum {
    LKPurchSuccess = 0,       // 购买成功
    LKPurchFailed = 1,        // 购买失败
    LKPurchCancle = 2,        // 取消购买
    LKPurchVerFailed = 3,     // 订单校验失败
    LKPurchVerSuccess = 4,    // 订单校验成功
    LKPurchNotArrow = 5,      // 不允许内购
    LKPurchNoGoods = 6,       // 没有商品
    LKPurchRestoredGoods = 7, // 已经购买过该商品
    LKPurchServiceFail = 8, // 网络故障
}LKPurchType;
@class LEOauthManager;
@class LEAdManager;
@class LEIronSourceAdManager;
@class LEFacebookAdManager;
@class LEPointManager;
@class LEApplePayManager;
@class LEFBShareManager;
@class LEUser;


@protocol LESDKManagerDelegate <NSObject>

@optional
- (void)bannerAdDidLoadFail:(NSError * _Nullable)error;
- (void)bannerAdDidClose;
- (void)bannerAdDidClick;
- (void)bannerAdDidVisible;

- (void)rewardAdDidLoadFail:(NSError * _Nullable)error;
- (void)rewardAdDidClose;
- (void)rewardAdDidClick;
- (void)rewardAdDidVisible;
- (void)rewardAdWinReward;

- (void)interstitialAdDidLoadFail:(NSError * _Nullable)error;
- (void)interstitialAdDidClose;
- (void)interstitialAdDidClick;
- (void)interstitialAdDidVisible;

- (void)logoutSDKCallBack;
- (void)changeAccountCallBack;

@end

NS_ASSUME_NONNULL_BEGIN

@interface LESDKManager : NSObject
@property (nonatomic, copy) void(^initializeSDKCallBack)(LESDKManager *manager,NSError *error);
@property (nonatomic, strong,readonly) LEOauthManager *oauthManager;
@property (nonatomic, strong,readonly) LEAdManager *adManager;
@property (nonatomic, strong,readonly) LEIronSourceAdManager *ironsAdManager;
@property (nonatomic, strong,readonly) LEFacebookAdManager *facebookAdManager;
@property (nonatomic, strong,readonly) LEPointManager *pointManager;
@property (nonatomic, strong,readonly) LEApplePayManager *payManager;
@property (nonatomic, strong,readonly) LEFBShareManager *shareManager;


@property(nonatomic, weak) id<LESDKManagerDelegate>delegate;

+ (instancetype)shared;

/// 注册SDK
/// @param appId  平台分发的appId
/// @param secretkey 平台分发的key
/// @param complete 完成注册的回调
- (void)registLinKingSDKAppID:(NSString * _Nonnull)appId withSecretkey:(NSString * _Nonnull)secretkey cmoplete:(void(^_Nonnull)(LESDKManager *manager,NSError *error))complete;

/// 登录接口
/// @param rootViewController 根控制器
/// @param complete complete description
- (void)login:(UIViewController*)rootViewController onFinished:(void(^)(LEUser *user,NSError *error))complete;
/// 登出
- (void)logout;
/// 获取商品列表
/// @param complete 回调完成
- (void)itemsListOnFinished:(void(^)(NSError * _Nullable error, NSArray*_Nullable products))complete;
/// 支付
/// @param productId 商品Id
/// @param parames 参数
/// @param complete 回调完成
- (void)pay:(NSString *)productId parames:(NSDictionary *)parames onFinished:(void(^)(LKPurchType type,NSError * _Nullable error))complete;
/// 展示广告
/// @param type 广告类型
/// @param viewController 控制器
/// @param superView 视图
- (void)adShow:(LEADTYPE)type rootViewController:(UIViewController * _Nonnull)viewController superView:(UIView * _Nullable)superView;


/// 进入游戏
/// @param serverId 区服id
/// @param roleId 角色id
/// @param roleName 角色名
/// @param enterGame 进入游戏（false单区,true多区）
- (void)logEnterGame:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName enterGame:(BOOL)enterGame;

/// 新手引导
/// @param contentId 内容id
/// @param content 内容
/// @param serverId 区服ID
/// @param roleId 角色id
/// @param roleName 角色名
- (void)logTutorial:(NSString *)contentId content:(NSString *)content EventServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

/// 关卡
/// @param stage 关卡
/// @param serverId 区服id
/// @param roleId 角色id
/// @param roleName 角色名
- (void)logStage:(int)stage serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

/// 等级
/// @param level 等级
/// @param serverId 区服Id
/// @param roleId 角色id
/// @param roleName 角色名
- (void)logLevel:(int )level serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName;

/// 无参自定义事件
/// @param event 事件名
- (void)logEvent:(NSString *)event;

/// 有参自定义事件
/// @param event 事件名
/// @param values 参数
- (void)logEvent:(NSString *)event withValues:(NSDictionary *)values;


/// 语言bundle，preferredLanguage变化时languageBundle会变化
/// 可通过手动设置bundle，让选择器支持新的的语言（需要在设置preferredLanguage后设置languageBundle）。欢迎提交PR把语言文件提交上来~
@property (strong, nonatomic) NSBundle *_Nullable languageBundle;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)applicationWillTerminate:(UIApplication *)application;
- (BOOL)application:(nonnull UIApplication *)application openURL:(nonnull NSURL *)url options:(nonnull NSDictionary<NSString *, id> *)options;
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts API_AVAILABLE(ios(13.0));
- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void(^)(NSArray<id<UIUserActivityRestoring>> * __nullable restorableObjects))restorationHandler;
@end

NS_ASSUME_NONNULL_END
