//
//  KKBUserCenterManager.h
//  KaiKeBaMaster
//
//  Created by Duane on 2019/3/20.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>
#import <KKBLibrary/KKBBasicMacro.h>
#import <KKBLibrary/KKBDataType.h>
#import <ReactiveObjC/ReactiveObjC.h>

NS_ASSUME_NONNULL_BEGIN

@class WCTDatabase;
@class KKB3rdAuthModel;
@class KKBSignInAppleModel;

typedef void(^KKBLoginBlock)(NSError * _Nullable error, KKBLCLoginModel * _Nullable loginModel);
typedef void(^KKBVerifyCodeBlock)(NSError * _Nullable error, NSString * _Nullable code);

@interface KKBUserCenterManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBUserCenterManager)

@property (nonatomic, copy) KKBBlockVoid loginBlock; // 调起登录页面

@property (nonatomic, strong, readonly) KKBSDKLoginSessionModel *loginSessionModel;

@property (nonatomic, strong, readonly) KKBLCLoginModel *lcLoginModel;
@property (nonatomic, assign, readonly) BOOL isLogin;
@property (nonatomic, strong, readonly) NSString *accessToken;

@property (nonatomic, strong, readonly) KKBUserInfoModel *userInfo;
@property (nonatomic, strong, readonly) KKBUserStudyInfoModel *studyInfo;
@property (nonatomic, strong, readonly) KKBStudentWalletBalanceModel *walletInfo;

@property (nonatomic, strong, readonly) NSArray<KKBVipModel *> *myVipList;
@property(nonatomic, strong, readonly) RACSignal<NSArray<KKBVipModel *> *> *vipUpdateSignal;

@property (nonatomic, strong, readonly) WCTDatabase *wcdb;
@property (nonatomic, readonly) NSString *documentDirectory;

@property(nonatomic, strong, readonly) RACSignal *loginSignal;
@property(nonatomic, strong, readonly) RACSignal *logoutSignal;

+ (void)loginSessionEnable:(BOOL)enable;
+ (void)configAppId:(NSString *)appId appKey:(NSString *)appKey;

+ (void)forceWeixinBind:(BOOL)enable;

- (void)getVerifyCodeWithPhoneNumber:(NSString *)phoneNumber completion:(KKBBlockNSError)completion;
- (void)getSoundVerifyCodeWithPhoneNumber:(NSString *)phoneNumber completion:(KKBVerifyCodeBlock)completion;

- (void)weixinAuth:(KKB3rdAuthModel *)authModel completion:(KKBLoginBlock)completion;
- (void)weixinAuth:(KKB3rdAuthModel *)authModel phoneNumber:(NSString *)phoneNumber verifyCode:(NSString *)verifyCode completion:(KKBLoginBlock)completion;
- (void)appleAuth:(KKBSignInAppleModel *)authModel completion:(KKBLoginBlock)completion;
- (void)appleAuth:(KKBSignInAppleModel *)authModel phoneNumber:(NSString *)phoneNumber verifyCode:(NSString *)verifyCode completion:(KKBLoginBlock)completion;
- (void)loginWithPhoneNumber:(NSString *)phoneNumber verifyCode:(NSString*)code completion:(KKBLoginBlock)completion;
- (void)logout;
- (void)tokenIsInvalid;

- (void)weixinBind;
- (void)checkWeixinBind;
- (void)weixinUnbind;
- (void)weixinReBind;

- (void)weixinBind:(nullable KKBLCLoginModel *)loginModel completion:(KKBBlockNSError)completion;

- (void)checkRefreshUserInfo;
- (void)refreshUserInfo:(KKBBlockNSError)completion;
- (void)updateUserInfo:(KKBUserInfoModel *)infoModel completion:(KKBBlockNSError)completion;
- (void)updateAvatar:(NSString *)resKey completion:(KKBBlockNSError)completion;
- (void)getUpdateAvatarToken:(KKBBlockNSString)completion;

- (void)refreshStudyInfo:(nullable KKBBlockNSError)completion;
- (void)refreshWalletInfo:(nullable KKBBlockNSError)completion;
- (void)refreshMyVipList:(nullable KKBBlockNSError)completion;

+ (NSError *)checkPhoneNumber:(NSString *)phone;
+ (NSError *)checkVerifyCode:(NSString *)code;

@end

NS_ASSUME_NONNULL_END
