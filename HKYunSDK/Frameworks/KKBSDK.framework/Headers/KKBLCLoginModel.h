//
//  KKBLCLoginModel.h
//  KaiKeBaMaster
//
//  Created by Duane on 2019/3/20.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBLCLoginModel : KKBBaseModel

@property (nonatomic, copy)NSString *accessToken;
@property (nonatomic, assign)BOOL isBindWx;

@property (nonatomic, assign)NSTimeInterval refreshDate;

@property (nonatomic, readonly)BOOL isLogin;
@property (nonatomic, readonly)NSString *uniqueId;

@end

NS_ASSUME_NONNULL_END
