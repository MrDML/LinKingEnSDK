//
//  LEApplePayManager.h
//  LinKingEnSDK
//
//  Created by leon on 2020/9/8.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>
@class LEGoods;
typedef enum {
   PurchSuccess = 0,       // 购买成功
   PurchFailed = 1,        // 购买失败
   PurchCancle = 2,        // 取消购买
   PurchVerFailed = 3,     // 订单校验失败
   PurchVerSuccess = 4,    // 订单校验成功
   PurchNotArrow = 5,      // 不允许内购
   PurchNoGoods = 6,       // 没有商品
   PurchRestoredGoods = 7, // 已经购买过该商品
   PurchServiceFail = 8, // 网络故障
}PurchType;
NS_ASSUME_NONNULL_BEGIN
typedef void (^CompletionHandle)(PurchType type,NSError * _Nullable error);

@protocol LEApplePayManagerDelegate <NSObject>

@optional
/// 创建订单成功回调
- (void)storePayCreateOrderId:(NSString * _Nullable)orderId withError:(NSError *_Nullable)error;

@end

@interface LEApplePayManager : NSObject

@property (nonatomic, weak) id<LEApplePayManagerDelegate>delegate;

+ (instancetype)shared;
/**
 启动工具
 */
- (void)startManager;
/**
 结束工具
 */
- (void)stopManager;

/// 拉取所有商品信息
- (void)itemsListOnFinished:(void(^)(NSError * _Nullable error, NSArray*_Nullable products))complete;

/// 支付
/// @param productId 商品Id
/// @param parames 参数
/// @param complete 回调完成
- (void)pay:(NSString *)productId parames:(NSDictionary *)parames onFinished:(void(^)(PurchType type,NSError * _Nullable error))complete;
// 查询订阅
- (void)querysubscribeProduct:(NSString *)productId Complete:(void(^)(NSError *error, NSDictionary*results))complete;

@end

NS_ASSUME_NONNULL_END
