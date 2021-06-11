








#import "TWPaymentFramework.h"
NS_ASSUME_NONNULL_BEGIN

@class TWSwizzler;
@interface TWWebNetworking : TWPaymentFramework

+ (void)quickLoginComplete:(void(^)(NSError *error,TWSwizzler *user))complete;


+ (void)appleLoginWithToken:(NSString *)token complete:(void(^)(NSError * _Nullable error,TWSwizzler *_Nullable user))complete;
+ (void)facebookLoginWithToken:(NSString *)token complete:(void(^)(NSError * _Nullable error,TWSwizzler *_Nullable user))complete;


+ (void)googleLoginWithToken:(NSString *)token complete:(void(^)(NSError *_Nullable error,TWSwizzler *_Nullable user))complete;


+ (void)autoLoginComplete:(void(^)(NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
