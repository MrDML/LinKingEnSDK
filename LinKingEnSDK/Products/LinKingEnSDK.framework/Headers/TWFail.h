







#import <UIKit/UIKit.h>

@class TWDependency;
@class TWFbAsync;
@class TWHybridSuggested;
@class TWCodersCoder;
@class TWRecipientAnd;
@class TWLogoDelegate;
@class TWAttributeExtractor;
@class TWSwizzler;


NS_ASSUME_NONNULL_BEGIN

@interface TWFail : NSObject
@property (nonatomic, copy) void(^initializeSDKCallBack)(TWFail *manager,NSError *error);
@property (nonatomic, strong,readonly) TWDependency *oauthManager;
@property (nonatomic, strong,readonly) TWFbAsync *adManager;
@property (nonatomic, strong,readonly) TWHybridSuggested *ironsAdManager;
@property (nonatomic, strong,readonly) TWCodersCoder *facebookAdManager;
@property (nonatomic, strong,readonly) TWRecipientAnd *pointManager;
@property (nonatomic, strong,readonly) TWLogoDelegate *payManager;
@property (nonatomic, strong,readonly) TWAttributeExtractor *shareManager;

+ (instancetype)shared;





- (void)registLinKingSDKAppID:(NSString * _Nonnull)appId withSecretkey:(NSString * _Nonnull)secretkey cmoplete:(void(^_Nonnull)(TWFail *manager,NSError *error))complete;



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
