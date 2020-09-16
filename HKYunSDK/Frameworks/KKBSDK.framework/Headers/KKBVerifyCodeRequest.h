//
//  KKBVerifyCodeRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/3/25.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBPassportRequest.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBVerifyCodeType) {
    KKBVerifyCodeType_Normal = 1, // 短信验证码
    KKBVerifyCodeType_Sound = 2, // 语音验证码
};

@interface KKBVerifyCodeRequest : KKBPassportRequest

- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber type:(KKBVerifyCodeType)type;

@end

NS_ASSUME_NONNULL_END
