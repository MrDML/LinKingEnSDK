







#import <Foundation/Foundation.h>
@class TWObjectEncode;
NS_ASSUME_NONNULL_BEGIN
@interface TWSessionPath : NSObject
+ (instancetype)shared;

- (void)requestProductDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray*_Nullable products))complete;

- (void)requestProductFromeAppleDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray<TWObjectEncode *>*_Nullable products))complete;

- (void)requestProductFromeGameDatas:(NSArray *_Nonnull)productIds complete:(void(^_Nullable)(NSError * _Nullable error, NSArray<TWObjectEncode *>*_Nullable products))complete;
@end
NS_ASSUME_NONNULL_END
