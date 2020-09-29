//
//  LEPointManager.h
//  LinKingEnSDK
//
//  Created by MrDML on 2020/8/16.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface LEPointManager : NSObject
+ (instancetype)shared;
// 广告打点
- (void)adLogEventName:(NSString *)eventName withParameters:(NSDictionary *_Nullable)params complete:(void(^_Nullable)(NSError *_Nullableerror))complete;


/// 等级
/// @param level 等级
- (void)logAchieveLevelEvent:(int )level serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;

/// 关卡
- (void)logAchieveStageEvent:(int)stage serverId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;

/// 新手引导
- (void)logAchieveCompleteTutorialId:(NSString *)contentId content:(NSString *)content EventServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName complete:(void(^_Nullable)(NSError * _Nullable error))complete;

/// 进入游戏
/// @param serverId 区服ID
/// @param roleId 角色ID
/// @param roleName 角色名称
/// @param enterGame 进入游戏（false单区,true多区）
/// @param complete 回调
- (void)logEnterGameServerId:(NSString *)serverId roleId:(NSString *)roleId roleName:(NSString *)roleName enterGame:(BOOL)enterGame complete:(void(^_Nullable)(NSError * _Nullable error))complete;


/// 用于追踪付款信息配置状态
/// @param success 是否成功
- (void)logAddPaymentInfoSuccess:(BOOL)success;
/// 用于追踪付款信息配置状态
/// @param price 价格
/// @param type 商品类型
/// @param currency 货币类型
/// @param goodsId 商品id
/// @param content 商品描述
/// @param quantity 商品数量
- (void)logAddGoodsCartWithPrice:(NSNumber *)price goodsType:(NSString *)type currency:(NSString *)currency goodsId:(NSString *)goodsId content:(NSString *)content quantity:(int)quantity;

/// 完成购买
/// @param price     购买产生的收入
/// @param orderId 购买生成的订单ID
/// @param receiptId 买家生成的收据ID
- (void)logCompletedPurchase:(NSNumber *)price orderId:(NSString *)orderId receiptId:(NSString *)receiptId;

/// 用于追踪特定商品的“添加到愿望清单”事件
/// @param price 价格
/// @param type 类型
/// @param goodsId 物品id
/// @param content 详细描述
/// @param currency 货币类型
/// @param quantity 数量
- (void)logAddWishlistWithPrice:(NSNumber *)price goodsType:(NSString *)type goodsId:(NSString *)goodsId content:(NSString *)content currency:(NSString *)currency quantity:(int)quantity;

/// 用于追踪用户注册方式
/// @param style 注册方式
- (void)logCompleteRegistrationStyle:(NSString *)style;


/// 用于追踪结账事件
/// @param price 价格
/// @param contentType 商品类型
/// @param contentId 商品id
/// @param quantity 商品数量
/// @param payment 支付方式（信息）
/// @param currency 货币类型
- (void)logInitiatedCheckoutWithPrice:(NSNumber *)price contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content  quantity:(int)quantity payment:(NSString *)payment currency:(NSString *)currency;

/// 用于追踪购买事件（及相关收入）
/// @param price 价格
/// @param type 订单了类型
/// @param currency 货币类型 USD
/// @param orderId 订单Id
/// @param desc 描述
/// @param quantity 数量
- (void)logPurchaseWithPrice:(NSNumber *)price type:(NSString *)type currency:(NSString *)currency orderId:(NSString *)orderId desc:(NSString *)desc quantity:(int)quantity;

/// 用于追踪付费订阅购买
/// @param price 价格
- (void)logSubscribeWithPrice:(NSNumber *)price;

/// 用于追踪产品的免费试用的开始
/// @param price 价格
/// @param currency 货币类型
- (void)logStartTrialWithPrice:(NSNumber *)price currency:(NSString *)currency;

/// 用于追踪应用/商品评级事件
/// @param rating 当前评级
/// @param contentType 评级类型
/// @param contentId 评级id
/// @param content 评级内容
/// @param maxRating 最大评级
- (void)logWithRating:(CGFloat)rating contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content maxRating:(CGFloat)maxRating;

/// 用于追踪搜索事件
/// @param contentType 搜索类别
/// @param searchWords 搜索关键字
/// @param success 是否搜索成功
- (void)logSearchWithContentType:(NSString *)contentType searchWords:(NSString *)searchWords success:(BOOL)success;

/// 用于追踪积分花费事件
/// @param price 价格
/// @param contentType 事件类型
/// @param contentId 事件id
/// @param content 事件内容
- (void)logSpentCreditsWithPrice:(NSNumber *)price ContentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content;

/// 用于追踪成就解锁事件
/// @param desc 详细描述
- (void)logAchievementUnlockedWithDesc:(NSString *)desc;

/// 用于追踪内容视图事件
/// @param price 价格
/// @param contentType 内容类型
/// @param contentId 内容id
/// @param content 内容描述
/// @param currency 货币类型
- (void)logContentViewWithPrice:(NSNumber *)price contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content currency:(NSString *)currency;

/// 用于追踪列表视图事件
/// @param contentType 列表视图类别
/// @param contentList 列表集合
- (void)logListViewWithContentType:(NSString *)contentType contentList:(NSArray *)contentList;

///  用于追踪应用中展示广告的点击次数
- (void)logAdclickWithAdStyle:(NSString *)style;

/// 用于追踪应用中展示广告的展示次数
- (void)logAdView:(NSString *)style;

/// 用于追踪分享事件
/// @param desc 分享描述
- (void)logShareDesc:(NSString*)desc;

/// 用于追踪邀请（社交）事件
- (void)logInvite;

///  用于追踪用户的重参与事件
- (void)logActive;

/// 用于追踪用户登录事件
- (void)logLoginStyle:(NSString *)style;

/// 从推送通知打开 用于追踪从推送通知打开应用的事件
- (void)logOpenedFromPushNotification;

/// 用于追踪更新事件
/// @param contentId 更新事件Id
- (void)logWithContentId:(NSString *)contentId;


/// 设置用户id
/// @param userId <#userId description#>
- (void)logTrackSetCustomerUserID:(NSString *)userId;

// 自定义打点
- (void)customeLogEventName:(NSString *)eventName withParameters:(NSDictionary * _Nullable)params complete:(void(^_Nullable)(NSError *_Nullable error))complete;
- (void)customeLogEventName:(NSString *)eventName complete:(void(^_Nullable)(NSError *_Nullable error))complete;
@end

NS_ASSUME_NONNULL_END
