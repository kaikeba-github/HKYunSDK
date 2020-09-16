//
//  KKBLoginRequest.h
//  KaiKeBaMaster
//
//  Created by Duane on 2019/3/20.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBPassportRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBLoginRequest : KKBPassportRequest

@end

@interface KKBPhoneLoginRequest : KKBLoginRequest

- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber verifyCode:(NSString *)verifyCode;

@end

@class KKB3rdAuthModel;

@interface KKBWechatLoginRequest : KKBLoginRequest

- (instancetype)initWithAuthModel:(KKB3rdAuthModel *)authModel;
- (instancetype)initWithAuthModel:(KKB3rdAuthModel *)authModel phoneNumber:(nullable NSString *)phoneNumber verifyCode:(nullable NSString *)verifyCode;

@end

@interface KKBSDKAppleLoginRequest : KKBLoginRequest

- (instancetype)initWithAuthModel:(KKBSignInAppleModel *)authModel;
- (instancetype)initWithAuthModel:(KKBSignInAppleModel *)authModel phoneNumber:(nullable NSString *)phoneNumber verifyCode:(nullable NSString *)verifyCode;

@end

NS_ASSUME_NONNULL_END
