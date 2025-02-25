/**
 * SplashScreen
 * 启动屏
 * from：http://www.devio.org
 * Author:CrazyCodeBoy
 * GitHub:https://github.com/crazycodeboy
 * Email:crazycodeboy@gmail.com
 */
#import <React/RCTBridgeModule.h>
#import <UIKit/UIKit.h>

@interface RNSplashScreen : NSObject<RCTBridgeModule>
+ (void)showSplash:(NSString*)splashScreen inRootView:(UIView*)rootView;
+ (void)showLottieSplash:(UIView*)splashScreen inRootView:(UIView*)rootView;
+ (void)showInLottieSplash:(UIView*)splashScreen inRootView:(UIView*)rootView;
+ (void)setInAppView:(void (^)(void))play;
+ (void)inApp;
+ (void)inAppHide;
+ (void)show;
+ (void)setAnimationFinished:(Boolean)flag;
+ (void)hide;
@end
