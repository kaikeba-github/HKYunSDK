//
//  KKBSDKJobPositionInfoRequest.h
//  KKBSDK
//
//  Created by Duane on 2020/4/14.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKJobPositionInfoRequest : KKBSDKJobBaseRequest

- (instancetype)initWithPositionId:(uintID)positionId;

@end

NS_ASSUME_NONNULL_END
