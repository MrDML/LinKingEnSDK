//
//  LEFBAnalyticsManager.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/19.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEFBAnalyticsManager : NSObject


+ (instancetype)shared;

/// 是否重新启动自动记录事件
/// @param autoLogAppEventsEnabled YES:重新启动 NO:暂停自动收集
- (void)setAutoLogAppEventsEnabled:(BOOL)autoLogAppEventsEnabled;
#pragma mark - 禁用广告主编号收集功能
/// 是否禁用广告主编号收集功能
/// @param advertiserIDCollectionEnabled YES:重新启动 NO:暂停自动收集
- (void)setAdvertiserIDCollectionEnabled:(BOOL)advertiserIDCollectionEnabled;
/// 添加购物车
/// @param contentData 商品名
/// @param contentId 商品id
/// @param contentType 商品类型
/// @param currency 货币类型
/// @param price 价格
- (void)logAddToCartEvent:(NSString *)contentData
    contentId:(NSString *)contentId
    contentType:(NSString *)contentType
    currency:(NSString *)currency
               valueToSum:(double)price;
/// 等级
/// @param level 等级
- (void)logAchieveLevelEvent:(NSString *)level;
/// 广告点击
/// @param adType 类型
- (void)logAdClickEvent:(NSString *)adType;
/// 广告捕获
/// @param adType 广告类型
- (void)logAdImpressionEvent:(NSString *)adType;
/// 添加付款信息
/// @param success 是否成功
- (void)logAddPaymentInfoEvent:(BOOL)success;
/// 添加愿望清单
/// @param contentData 商品名
/// @param contentId 商品id
/// @param contentType 商品类型
/// @param currency 货币类型
/// @param price 价格
- (void)logAddToWishlistEvent:(NSString *)contentData
    contentId:(NSString *)contentId
    contentType:(NSString *)contentType
    currency:(NSString *)currency
                   valueToSum:(double)price;
/// 完成注册
/// @param registrationMethod registrationMethod description
- (void)logCompleteRegistrationEvent:(NSString *)registrationMethod;
/// 完成新手引导
/// @param contentData 内容数据
/// @param contentId 内容id
/// @param success 状态
- (void)logCompleteTutorialEvent:(NSString *)contentData
    contentId:(NSString *)contentId
                         success:(BOOL)success;
/// 联系
- (void)logContactEvent;
/// 定制产品
- (void)logCustomizeProductEvent;
/// 赠送
- (void)logDonateEvent;
/// 发现位置
- (void)logFindLocationEvent;
/// 发起结账
/// @param contentData 内容信息
/// @param contentId 内容id
/// @param contentType 内容类型
/// @param numItems 数量
/// @param paymentInfoAvailable 是否可以获取付款信息
/// @param currency 货币类型
/// @param totalPrice 总价
- (void)logInitiateCheckoutEvent:(NSString *)contentData
    contentId:(NSString *)contentId
    contentType:(NSString *)contentType
    numItems:(NSInteger)numItems
    paymentInfoAvailable:(BOOL)paymentInfoAvailable
    currency:(NSString *)currency
                      valueToSum:(double)totalPrice;

/// 付款
/// @param numItems 数量
/// @param contentType 商品类型
/// @param contentId 商品id
/// @param currency 货币类型
/// @param price 价格
- (void)logPurchasedEvent :(int)numItems
    contentType :(NSString*)contentType
    contentId :(NSString*)contentId
    currency :(NSString*)currency
                 valToSum :(double)price;
///  用于追踪应用/商品评级事件
/// @param contentType 内容类型
/// @param contentData 内容信息
/// @param contentId 内容id
/// @param maxRatingValue 最大评级
/// @param ratingGiven 当前评级
- (void)logRateEvent:(NSString *)contentType
    contentData:(NSString *)contentData
    contentId:(NSString *)contentId
    maxRatingValue:(NSInteger)maxRatingValue
          valueToSum:(double)ratingGiven;

/// 日程
- (void)logScheduleEvent;

/// 搜索
/// @param contentType 内容类型
/// @param contentData 内容信息
/// @param contentId 内容id
/// @param searchString 搜索关键字
/// @param success 搜索 状态
- (void)logSearchEvent:(NSString *)contentType
    contentData:(NSString *)contentData
    contentId:(NSString *)contentId
    searchString:(NSString *)searchString
               success:(BOOL)success;

/// 消费积分
/// @param contentData 内容信息
/// @param contentId 内容id
/// @param contentType 内容类型
/// @param totalValue 总积分
- (void)logSpendCreditsEvent:(NSString *)contentData
    contentId:(NSString *)contentId
    contentType:(NSString *)contentType
                  valueToSum:(double)totalValue;

/// 开始使用
/// @param orderId 订单id
/// @param currency 货币类型
/// @param price 单价
- (void)logStartTrialEvent:(NSString *)orderId
    currency:(NSString *)currency
                valueToSum:(double)price;
/// 提交申请
- (void)logSubmitApplicationEvent;
/// 订阅
/// @param orderId 商品id
/// @param currency 货币类型`
/// @param price 单价
- (void)logSubscribeEvent:(NSString *)orderId
    currency:(NSString *)currency
               valueToSum:(double)price;
/// 解锁成就
/// @param description 详细信息
- (void)logUnlockAchievementEvent:(NSString *)description;
/// 查看内容
/// @param contentType 内容类型
/// @param contentData 内容信息
/// @param contentId 内容id
/// @param currency 货币类型
/// @param price 单价
- (void)logViewContentEvent:(NSString *)contentType
    contentData:(NSString *)contentData
    contentId:(NSString *)contentId
    currency:(NSString *)currency
                 valueToSum:(double)price;


/// 自定义事件
/// @param eventName 事件名
/// @param params 参数
- (void)customeLogEventName:(NSString *)eventName withParameters:(NSDictionary *)params;
/// 自定义事件
/// @param eventName 事件名
- (void)customeLogEventName:(NSString *)eventName;
/// 自定义事件
/// @param eventName 事件名
/// @param valueToSum 求和
/// @param params 参数
- (void)customeLogEventName:(NSString *)eventName valueToSum:(double)valueToSum withParameters:(NSDictionary *)params;
@end

NS_ASSUME_NONNULL_END
