







#import <Foundation/Foundation.h>
@class TWSwizzler;
NS_ASSUME_NONNULL_BEGIN

@interface TWExtractorDeactivation : NSObject
+ (instancetype)shared;
@property (nonatomic, strong)TWSwizzler * _Nullable user;
@end

NS_ASSUME_NONNULL_END
