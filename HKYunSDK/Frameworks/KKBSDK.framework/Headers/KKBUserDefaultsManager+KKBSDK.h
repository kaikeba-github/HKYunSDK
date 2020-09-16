//
//  KKBUserDefaultsManager+KKBSDK.h
//  KKBSDK
//
//  Created by Duane on 2020/7/10.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBUserDefaultsManager (KKBSDK)

// 用户登录信息
KKBUD_Property_String(lcLoginInfo);
KKBUD_Property_String(loginSessionInfo);

@end

NS_ASSUME_NONNULL_END
