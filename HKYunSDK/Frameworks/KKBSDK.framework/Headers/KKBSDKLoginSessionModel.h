//
//  KKBSDKLoginSessionModel.h
//  KKBSDK
//
//  Created by Duane on 2020/7/18.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKLoginSessionModel : KKBBaseModel

@property (nonatomic, copy)NSString *accessToken;
@property (nonatomic, copy)NSString *groupId;
@property (nonatomic, assign)BOOL isCompanyUser;

@property (nonatomic, readonly)BOOL isLogin;

@end

NS_ASSUME_NONNULL_END
