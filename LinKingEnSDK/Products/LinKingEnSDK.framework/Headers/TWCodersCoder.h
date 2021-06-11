







#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TWCodersCoder : NSObject


@property (nonatomic, copy) void(^bannerAdViewDidLoadCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidLoadFailCallBack)(NSError *error);
@property (nonatomic, copy) void(^bannerAdViewWillLogImpressionCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidClickCallBack)(void);
@property (nonatomic, copy) void(^bannerAdViewDidFinishHandlingClickCallBack)(void);

@property (nonatomic, copy) void(^interstitialAdDidLoadCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdWillLogImpressionCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidClickCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdWillCloseCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidCloseCallBack)(void);
@property (nonatomic, copy) void(^interstitialAdDidFailCallBack)(NSError *error);


@property (nonatomic, copy) void(^rewardAdDidLoadCallBack)(void);
@property (nonatomic, copy) void(^rewardAdDidFailCallBack)(NSError *error);
@property (nonatomic, copy) void(^rewardAdDidClickCallBack)(void);
@property (nonatomic, copy) void(^rewardAdVideoCompleteCallBack)(void);
@property (nonatomic, copy) void(^rewardAdDidCloseCallBack)(void);
@property (nonatomic, copy) void(^rewardAdWillCloseCallBack)(void);
@property (nonatomic, copy) void(^rewardAdWillLogImpressionCallBack)(void);



+ (instancetype)shared;


- (void)registerFacebookAd;


- (void)initializationFacebookBannerRootViewController:(UIViewController *)viewController superView:(UIView *)superView frame:(CGRect)frame;

- (void)showFacebookBanner;

- (void)removeBannerViewFromSuperView;



- (void)initializationFacebookInterstitialAd:(UIViewController *)viewController;

- (void)showFacebookInterstitialAd;



- (void)initializationFacebookRewardVideoAd:(UIViewController *)viewController;

- (void)showFacebookRewardVideoAd;



@end

NS_ASSUME_NONNULL_END
