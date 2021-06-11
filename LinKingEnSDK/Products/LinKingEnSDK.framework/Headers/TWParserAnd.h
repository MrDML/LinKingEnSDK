







#import "TWPaymentFramework.h"
@class TWSwizzler;

NS_ASSUME_NONNULL_BEGIN

@interface TWParserAnd : TWPaymentFramework

+ (void)appleBindingAccountWithToken:(NSString *)token complete:(void(^)(NSError *error,TWSwizzler *user))complete;
+ (void)googleBindingAccountWithToken:(NSString *)token complete:(void(^)(NSError *error,TWSwizzler *user))complete;
+ (void)facebookBindingAccountWithToken:(NSString *)token complete:(void(^)(NSError *error,TWSwizzler *user))complete;
@end

NS_ASSUME_NONNULL_END
