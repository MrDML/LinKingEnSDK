//
//  LEAdManager.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/17.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN



typedef NS_ENUM(NSInteger,LEPLATFORM) {
    LEPLATFORM_NONE,
    LEPLATFORM_Facebook,
    LEPLATFORM_IronSource
};


@protocol LEAdManagerDelegate <NSObject>

@optional
- (void)bannerAdDidLoadPlatform:(LEPLATFORM)platform subManager:(id)manager;
- (void)bannerAdPlatform:(LEPLATFORM)platform subManager:(id)manager didLoadFail:(NSError * _Nullable)error;
- (void)bannerAdDidClosePlatform:(LEPLATFORM)platform subManager:(id)manager;
- (void)bannerAdDidClickPlatform:(LEPLATFORM)platform subManager:(id)manager;
- (void)bannerAdDidVisiblePlatform:(LEPLATFORM)platform subManager:(id)manager;


- (void)rewardAdDidLoadPlatform:(LEPLATFORM)platform subManager:(id)manager;
- (void)rewardAdPlatform:(LEPLATFORM)platform subManager:(id)manager didLoadFail:(NSError * _Nullable)error;
- (void)rewardAdDidClosePlatform:(LEPLATFORM)platform subManager:(id)manager;
- (void)rewardAdDidClickPlatform:(LEPLATFORM)platform subManager:(id)manager;
- (void)rewardAdDidVisiblePlatform:(LEPLATFORM)platform subManager:(id)manager;
- (void)rewardAdWinRewardPlatform:(LEPLATFORM)platform subManager:(id)manager;


- (void)interstitialAdDidLoadPlatform:(LEPLATFORM)platform subManager:(id)manager;
- (void)interstitialAdPlatform:(LEPLATFORM)platform subManager:(id)manager didLoadFail:(NSError * _Nullable)error;
- (void)interstitialAdDidClosePlatform:(LEPLATFORM)platform subManager:(id)manager;
- (void)interstitialAdDidClickPlatform:(LEPLATFORM)platform subManager:(id)manager;
- (void)interstitialAdDidVisiblePlatform:(LEPLATFORM)platform subManager:(id)manager;


@end

@interface LEAdManager : NSObject

@property (nonatomic, assign,readonly) LEPLATFORM platform;
@property (nonatomic, weak) id <LEAdManagerDelegate>delegate;
+ (instancetype)shared;

/// 注册广告
- (void)registerAd;

/// 初始化Banner广告
- (void)initializationBannerRootViewController:(UIViewController *)viewController superView:(UIView *)superView;
/// 展示Banner广告
- (void)showBanner;
/// 移除Banner
- (void)removeBannerViewFromSuperView;
/// 初始化插屏广告
- (void)initializationInterstitialAd:(UIViewController *)viewController;
/// 展现插屏
- (void)showInterstitialAd;

/// 初始化激励视频广告
- (void)initializationRewardVideoAd:(UIViewController *)viewController;
/// 展示激励视频广告
- (void)showRewardVideoAd;


@end

NS_ASSUME_NONNULL_END
